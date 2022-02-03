// Цик-цак е број за кој важи дека за секој пар соседни цифри во бројот важи 
// дека едната е помала од 5, а другата е поголема или еднаква на 5.

// На пример, ако бројот x е составен од цифрите a, b, c и d, тогаш за нив важи:
// a<5, b>=5, c<5, d>=5 или a>=5, b<5, c>=5, d<5

// Пр.  508294, 2638, 81
// Од тастатура се читаат непознат број на цели броеви поголеми од 
// или еднакви на 10 (броевите помали од 10 се игнорираат). 
// Читањето завршува во моментот кога ќе се прочита знак што не е цифра. 
// Да се испечатат сите цик-цак броеви.
 
// For example:
// Input	Result
// 5005    5050
// 5050    60619
// 60619   8050
// 21365
// 12345
// 8045
// 8050
// k

#include <stdio.h>

int main()
{
    int broj;
    while(scanf("%d", &broj))
    {
        if (broj < 10)
            continue;
        
        int isFirstValid = 0;
        
        int temp = broj;
        
        while (temp > 0) 
        {
            int prva_cifra = temp % 10;
            temp /= 10;
            
            if (temp == 0) 
                break;
            
            int vtora_cifra = temp % 10;
            temp /= 10;
            
            isFirstValid = 0;
            
            if (prva_cifra < 5 && vtora_cifra >= 5)
            {
                isFirstValid = 1;
            }
                
            if (isFirstValid == 0)
                break;
        }
        
        temp = broj;
        
        int isSecondValid = 0;
        while (temp > 0) 
        {
            int prva_cifra = temp % 10;
            temp /= 10;
            
            if (temp == 0) 
                break;
            
            int vtora_cifra = temp % 10;
            temp /= 10;
            
            isSecondValid = 0;
            
            if (prva_cifra >= 5 && vtora_cifra < 5)
            {
                isSecondValid = 1;
            }
            
            if (isSecondValid == 0)
                break;
        }
        
        if (isFirstValid || isSecondValid)
            printf("%d\n", broj);
    }
    
    return 0;
}