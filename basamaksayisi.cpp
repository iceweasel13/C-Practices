#include<stdio.h>

int basamak(int sayi)
{
    static int sayac=0;

     if(sayi!=0)
     {
          sayac++;
         basamak(sayi/10);
    }

    return sayac;
}

int main()
{
  int sayi,sayac;
    printf("Girilen sayinin basamak sayisini bulma :\n");
	printf("-----------------------------------------\n");
    printf("Bir sayi giriniz : ");
    scanf("%d",&sayi);

    sayac = basamak(sayi);

    printf("Girilen sayinin basamak sayisi:%d\n\n",sayac);
    return 0;
}

