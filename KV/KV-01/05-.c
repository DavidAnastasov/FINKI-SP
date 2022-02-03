// Од тастатура се читаат 2 позитивни цели броеви. 
// Доколку се внесе барем еден негативен број или 0 треба да се печати „Invalid input“.
// Треба да се определи дали помалиот број “е парен еквивалент” од поголемиот број.
// Еден број “е парен еквивалент” на друг број, ако и само ако неговите цифри се наоѓаат на 
// парните позиции од другиот број, во истиот редослед. Соодветно да се испечатат пораки „PAREN“ и „NE“.
// Позициите треба да се сметаат оддесно-налево (најмалку значајната цифра е на позиција 1)

// For example:
// Input	        Result
// 12345678 1357    PAREN

#include <stdio.h>
#include <math.h>

int main()
{
    int broj1, broj2;
    scanf("%d%d", &broj1, &broj2);
    
    if (broj1 <= 0 || broj2 <= 0) 
    {
        printf("Invalid input");
        return 0;
    }
    
    int pomal = broj1 <= broj2 ? broj1 : broj2;
    int pogolem = broj1 >= broj2 ? broj1 : broj2;
    
    int isParen = 1;
    while (pomal > 0)
    {
        int cifra_pomal = pomal % 10;
        pomal /= 10;
        
        pogolem /= 10;
        int cifra_pogolem = pogolem % 10;
        pogolem /= 10;
        
        if (cifra_pomal != cifra_pogolem)
            isParen = 0;
    }
    
    if (isParen) {
        printf("PAREN");
    } else {
        printf("NE");
    }
    
    return 0;
}
