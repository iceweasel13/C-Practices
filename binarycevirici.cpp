#include<stdio.h>

long Binarycevirici(int sayi)
{
    static long binary,r,f = 1;

    if(sayi != 0)
    {
         r = sayi % 2;
         binary = binary+ r * f;
         f = f * 10;
         Binarycevirici(sayi / 2);
    }
    return binary;
}

int main()
{
    long binary;
    int sayi;
	
	printf("Girilen sayiyi binary e ceviren kod\n");
	printf("---------------------------------------------------\n");

    printf("Lutfen bir tam sayi giriniz: ");
    scanf("%d",&sayi);

    binary = Binarycevirici(sayi);
    printf(" %d nin binarye cevrilmis hali : %ld",sayi,binary);
    return 0;
}

