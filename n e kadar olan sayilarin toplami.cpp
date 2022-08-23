#include<stdio.h>
 
int sayilarinToplami(int n1) 
{
   int sonuc;
   if (n1 == 1) 
   {
      return (1);
   } else 
   {
      sonuc = n1 + sayilarinToplami(n1 - 1); 
   }
   return (sonuc);
}
 
int main() 
{
   int n1;
   int toplam;
	printf("1 den n e kadar olan sayilarin toplamini yazdiran recursive kod:\n");
	printf("-----------------------------------------------------------\n");    
 
   printf(" Kacinci sayininkini yazdirmak istersiniz : ");
   scanf("%d", &n1);
 
   toplam = sayilarinToplami(n1); 
   printf("\n 1 den %d ye kadar olan sayilarin toplami : %d\n\n", n1, toplam);
 
   return (0);
}
 

