// Цик-цак е број за кој што важи дека за секој пар соседни цифри, тие се наизменично 
// поголеми односно помали една во однос на друга. 

// На пример, ако бројот x е составен од цифрите a, b, c, d и е, тогаш за нив важи:
// a>b, b<c, c>d, d<e или a<b, b>c, c<d, d>e

// Пр. 343, 4624, 6231209
// Од тастатура се читаат непознат број цели броеви поголеми од или еднакви на 10 (броевите помали од 10 се игнорираат). 
// Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.

// For example:
// Input	Result
// 343      343
// 22       4624
// 4624     6231209
// 123456
// 6231209
// 9
// k

#include <stdio.h>

int main()
{
    int broj;
    while(scanf("%d", &broj))
    {
        if (broj < 10)
            continue;
        
        int isFirstValid = 1;
        
        int temp = broj;
        
        int cik = 0;
        while (temp > 0) 
        {
            int prva_cifra = temp % 10;
            temp /= 10;
            
            if (temp == 0)
                break;
            
            int vtora_cifra = temp % 10;
            
            if (
                prva_cifra == vtora_cifra ||
                (cik == 0 && prva_cifra > vtora_cifra) ||
                (cik == 1 && prva_cifra < vtora_cifra)
            )
                isFirstValid = 0;
            
            cik = cik == 0 ? 1 : 0;
        }
        
        temp = broj;
        
        int isSecondValid = 1;
        int cak = 1;
        while (temp > 0) 
        {
            int prva_cifra = temp % 10;
            temp /= 10;
            
            if (temp == 0)
                break;
            
            int vtora_cifra = temp % 10;
            
            if (
                prva_cifra == vtora_cifra ||
                (cak == 0 && prva_cifra > vtora_cifra) ||
                (cak == 1 && prva_cifra < vtora_cifra)
            )
                isSecondValid = 0;
            
            cak = cak == 0 ? 1 : 0;
        }
        
        if (isFirstValid || isSecondValid)
            printf("%d\n", broj);
    }
    
    return 0;
}