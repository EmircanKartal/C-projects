#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notlar, AA = 4, AB = 3.7, BA = 3.5, BB = 3.0, BC = 2.7, CB = 2.3, CC=2.0 ,DC=1.3, DD = 1.0, FF = 0.0;
    int ders_sayisi;
    float akts, total_not = 0, total_akts = 0;
    char not[3];
    printf("Ders sayisini giriniz: \n");
    scanf("%d", &ders_sayisi);

    for (int i = 0; ders_sayisi > 0 && i < ders_sayisi; i++)
    {
        printf("%d. dersin harf notunu ve akts degerini giriniz: \n",i+1);
        scanf("%s %f", not,&akts);
        if(not[1] != '\0' && not[2] != '\0') {
            printf("Invalid Grade\n");
            continue;
        }
        switch(not[0]) {
            case 'A':
                if(not[1] == 'A')
                    notlar = AA;
                else if(not[1] == 'B')
                    notlar = AB;
                break;
            case 'B':
                if(not[1] == 'A')
                    notlar = BA;
                else if(not[1] == 'B')
                    notlar = BB;
                else if(not[1] == 'C')
                    notlar = BC;
                else {
                    printf("Invalid Grade\n");
                    continue;
                }
                break;
            case 'C':
                if(not[1] == 'B')
                    notlar = CB;
                else if(not[1] == 'C')
                    notlar = CC;
                else {
                    printf("Invalid Grade\n");
                    continue;
                }
                break;
            case 'D':
                if(not[1] == 'C')
                    notlar = DC;
                else if(not[1] == 'D')
                    notlar = DD;
                else {
                    printf("Invalid Grade\n");
                    continue;
                }
                break;
            case 'F':
                if(not[1] == 'F')
                    notlar = FF;
                else {
                    printf("Invalid Grade\n");
                    continue;
                }
                break;
            default:
                printf("Invalid Grade\n");
                continue;
        }
        total_not += notlar*akts;
        total_akts += akts;
    }

    float gpa = total_not / total_akts;
    printf("GPA= %f",gpa);
    return 0;
}
