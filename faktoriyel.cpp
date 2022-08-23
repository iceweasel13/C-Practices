#include<stdio.h>


int faktoriyel_bul(int sayi)
{
   if(sayi==1)
       return 1;
   else
       return(sayi*faktoriyel_bul(sayi-1));
 }

int main()
{
  int a,f;
	printf("Girilen sayinin faktoriyelini bulan kod\n");
	printf("-------------------------------------------------\n");	  
  printf("Lutfen bir sayi giriniz : ");
  scanf("%d",&a);
  f=faktoriyel_bul(a);
  printf("%d nin faktoriyeli: %d\n\n",a,f);
  return 0;
}


