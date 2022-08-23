#include <stdio.h>

int i;

int asal(int sayi)
{
    if(i==1)
    {
        return 1;
    }
    else if(sayi %i==0)
    {
         return 0;
    }     
    else
       {
         i = i -1; 
         asal(sayi);
      }
}

int main()
{

    int sayi,asalmi;

	printf("Girilen sayinin asal olup olmadigini kontrol etme:\n");
	printf("--------------------------------------------------------\n");
	
    printf("Lutfen bir sayi giriniz : ");
    scanf("%d",&sayi);
    
    i = sayi/2;

    asalmi = asal(sayi);

   if(asalmi==1)
        printf("%d asal bir sayidir. \n\n",sayi);
   else
      printf("%d asal sayi degildir.",sayi);
   return 0;
}


