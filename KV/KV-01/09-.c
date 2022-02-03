// Од стандарден влез се читаат непознат број на хексадецимални цифри се додека не се внесе точка (.). 
// Ваша задача е да го пресметате декадниот збир на внесените хексадецимални цифри. 
// Доколку добиениот декаден збир е делив со 16 се печати Pogodok. 
// Доколку истиот тој збир покрај што е делив со 16 плус завршува на 16 (последните цифри му се 1 и 6), 
// се печати Poln pogodok инаку се печати самиот збир.

// Пример:
// влез: A 7 F 2 0 c A 5
// излез: 61

// (61 = 10 + 7 + 15 + 2 + 0 + 12 + 10 + 5, бројот не е делив со 16, ниту пак последните цифри му се 1,6)

#include <stdio.h>
#include <math.h>

int main()
{
    int zbir = 0;
    
    while (1)
    {
        char znak;
        scanf("%c", &znak);
        
        if (znak == '.')
            break;
            
        int broj;
            
        switch (znak) {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                broj = (int)znak - 48;
                break;
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
            case 'F':
                broj = 10 + ((int)znak - 65);
                break;
            case 'a':
            case 'b':
            case 'c':
            case 'd':
            case 'e':
            case 'f':
                broj = 10 + ((int)znak - 97);
                break;
            default:
                broj = 0;
        }
        
        zbir += broj;
    }
    
    if (zbir % 16 == 0) {
        if(zbir % 10 == 6 && (zbir / 10) % 10 == 1) {
            printf("Poln pogodok");
        } else {
            printf("Pogodok");
        }
    } else {
        printf("%d", zbir);
    }
    
    return 0;
}