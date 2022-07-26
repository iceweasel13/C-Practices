#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void craps_oyna();

int main(void)
{
    char cevap,cikis;
    do
    {
        printf("\n\n");
        printf("Craps oyununu oynamak icin y ye cikis yapmak icin q ya basin\n ");
        cevap=getchar();
        cikis=getchar();
        if(cevap=='y' || cevap=='Y')
            craps_oyna();
    }while(cevap=='y' || cevap=='Y');
		printf("\n\n");
system("pause");
return 0;
}

void craps_oyna()
{
    int rand_int(int a, int b);
    srand(time(NULL));

    int zar_1,zar_2,zar_3,zar_4,tur_1,tur_2;

    zar_1=rand_int(1,6);
    zar_2=rand_int(1,6);
    tur_1=zar_1 + zar_2;
    printf("%i attiniz.\n",tur_1);

    if(tur_1==7 || tur_1==11)
        {
            printf("Kazandiniz!\n");
            return;
        }
    else if(tur_1==2 || tur_1==3 || tur_1==12)
        {
            printf("Kaybettiniz\n");
            return;
        }
    else
        {
            do
            {

                zar_3=rand_int(1,6);
                zar_4=rand_int(1,6);
                tur_2=zar_3 + zar_4;
                printf(" %i attiniz.\n",tur_2);
                if(tur_2==tur_1)
                 {
                     printf("Kazandiniz");
                     return;
                 }
            }while(tur_2 != 7);

        printf("Kaybettiniz");
        }

}
int rand_int(int a, int b)
{

    return rand()%(b-a+1)+a;
}
