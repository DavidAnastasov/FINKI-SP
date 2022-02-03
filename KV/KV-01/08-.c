// Од стандарден влез се внесуваат два цели броја N и Х.
// Да се најде најблискот број помал од N коj е тотално различен од бројот Х.
// Еден број е тотално различен од друг ако и само ако во него не се појавува ниту една од цифрите на другиот број.
// Задачата да се реши без употреба на низи и матрици.

// For example:
// Input	Result
// 88 7     86

#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    int X;
    
    scanf("%d%d", &N, &X);
    
    for (int i = N - 1; 1; i--)
    {
        int broj1 = i;
        int isRazlicen = 1;
        
        while (broj1 > 0) 
        {
            int cifra1 = broj1 % 10;
            int broj2 = X;
            while(broj2 > 0) 
            {
                int cifra2 = broj2 % 10;
                
                if (cifra1 == cifra2)
                    isRazlicen = 0;
                
                broj2 /= 10;
                
            }
            
            if (isRazlicen == 0)
                break;
            
            broj1 /= 10;
        }
        
        if (isRazlicen) {
            printf("%d", i);
            break;
        }
    }
    
    return 0;
}
