// Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8).
// Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија
// вредност се внесува од тастатура), да се најде и испечати најмалиот „благ број“.
// Ако не постои таков број, да се испечати NE.

// For example:
// Input	Result
// 99 500   200

#include <stdio.h>

int main() 
{
    int min;
    int max;
    scanf("%d %d", &min, &max);
    
    int najmal = -1;
    
    for (int i = min; i <= max; i++) 
    {
        int isValid = 1;
        int broj = i;
        while (broj > 0)
        {
            int cifra = broj % 10;
            
            if (cifra % 2 != 0) {
                isValid = 0;
                break;
            }
            
            broj = broj / 10;
        }
        
        if (isValid == 1) {
            najmal = i;
            break;
        }
    }
    
    if (najmal == -1)
        printf("NE");
    else
        printf("%d", najmal);
    
    return 0;
}