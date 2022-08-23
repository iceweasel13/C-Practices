#include <stdio.h>

void tek_cift(int sabit, int sayi)
{
    if(sabit > sayi)
        return;
    printf("%d  ", sabit);
    tek_cift(sabit+2, sayi);
}
 
int main()
{
    int n;
	printf("Girilen sayiya kadar olan tek ve cift sayilari yazdiran kod:\n");
	printf("-------------------------------------------------------------\n");	
     
    printf("Lutfen sayi giriniz: ");
    scanf("%d", &n);
     
    printf("\n%d ye kadar olan tum cift sayilar: ", n);
    tek_cift(2, n);
     
    printf("\n\n%d ye kadar olan tum tek sayilar : ", n);
    tek_cift(1, n);
    printf("\n\n");
     
    return 0;
}

