#include <stdio.h>
 
int basamakToplam(int sayi)
{
    if(sayi == 0)
        return 0;
         
    return ((sayi % 10) + basamakToplam(sayi / 10));
}
 
int main()
{
    int sayi, toplam;
	printf("Girilen sayinin basamaklarýnýn toplamini bulan kod\n");
	printf("-----------------------------------------------------\n");     
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &sayi);
     
    toplam = basamakToplam(sayi);
     
    printf("%d nin basamaklari toplami = %d\n\n", sayi,toplam);
     
    return 0;
}


