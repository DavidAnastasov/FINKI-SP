// Од стандарден влез се читаат знаци се додека не се прочита извичник.
// Во вака внесениот текст се скриени цели броеви (помали од 100).
// Да се напише програма што ќе ги прочита сите знаци и на излез ќе го испечати збирот на сите броеви скриени во текстот.

// For example:
// Input	                           Result
// ako34D neka12em bashka41mewr20!     107

#include <stdio.h>
#include <math.h>

int main()
{
    int zbir = 0;
    int segasen_zbir = 0;
    
    while(1) {
        char znak;
        scanf("%c", &znak);
        
        if (znak >= (char)'0' && znak <= (char)'9') 
        {
            segasen_zbir *= 10;
            segasen_zbir += (int)znak - 48;
        }
        else
        {
            zbir += segasen_zbir;
            segasen_zbir = 0;
        }
            
        if(znak == '!')
            break;
    }
    
    printf("%d", zbir);

    return 0;
}