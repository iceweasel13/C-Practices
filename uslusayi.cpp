#include <stdio.h>
 
long int uslu_hesaplama(int x,int y)
{
    long int sonuc=1;
    if(y == 0)
	 return sonuc;
    sonuc=x*(uslu_hesaplama(x,y-1)); 
}
int main()
{
    int sayi,uslu;
    long int sonuc;
    printf("Sayinin derecesini hesaplayan kod\n");
	printf("----------------------------------------------------\n");	
     
    printf("Sayiyi giriniz: ");
    scanf("%d",&sayi);
     
    printf("Sayinin uslu giriniz: ");
    scanf("%d",&uslu);
     
    sonuc=uslu_hesaplama(sayi,uslu);
     
    printf("%d sayisinin %d dereceden uslu : %ld\n\n",sayi,uslu,sonuc);
     
    return 0;
}
