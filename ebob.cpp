#include<stdio.h>


int ebobBul(int a,int b)
{
     while(a!=b)
     {
          if(a>b)
              return ebobBul(a-b,b);
          else
             return ebobBul(a,b-a);
     }
     return a;
}


int main()
{
  int sayi1,sayi2,ebob;
  printf("Girilen 2 sayinin ebobunu bulan kod :\n");
  printf("------------------------------------------\n");  
  printf("Lutfen birinci sayiyi giriniz: ");
  scanf("%d",&sayi1);
  printf("Lutfen ikinci sayiyi giriniz: ");
  scanf("%d",&sayi2);
  
  ebob = ebobBul(sayi1,sayi2);
  printf("\n%d ve %d in ebobu: %d dur\n\n",sayi1,sayi2,ebob);
  return 0;
}


