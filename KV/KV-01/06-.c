// Да се напише програма во која од стандарден влез прво се внесува еден позитивен цел број z, 
// а потоа последователно се внесуваат парови цели броеви (a, b). 
// Внесувањето на парови цели броеви треба да заврши кога корисникот ќе го внесе парот (0, 0). 
// Треба да се пресмета колку пати z е еднаков на збирот на секој внесен пар броеви a и b, 
// како и колкав процент од вкупниот број внесени парови (a, b) даваат збир z 
// (ЗАБЕЛЕШКА: парот (0, 0) не се зема во предвид при извршувањето на пресметките!).

// For example:
// Input	    Result
// 100          Vnesovte 2 parovi od broevi chij zbir e 100
// 50 50        Procentot na parovi so zbir 100 e 50.00%
// -50 -50
// -99 199
// 32 98
// 0 0

#include <stdio.h>
#include <math.h>

int main()
{
    int z;
    scanf("%d", &z);
    
    int brojac_parovi = 0;
    int brojac_zbirovi = 0;
    
    while (1)
    {
        int broj1, broj2;
        scanf("%d %d", &broj1, &broj2);
        
        if (broj1 == 0 && broj2 == 0)
            break;
            
        brojac_parovi++;
            
        if (broj1 + broj2 == z)
            brojac_zbirovi++;
    }
    
    printf("Vnesovte %d parovi od broevi chij zbir e %d\n", brojac_zbirovi, z);
    printf("Procentot na parovi so zbir %d e %.2f%%\n", z, (float)brojac_zbirovi / brojac_parovi * 100.0);
    
    return 0;
}
