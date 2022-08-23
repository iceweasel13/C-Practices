#include<stdio.h>

int ekokBul(int a, int b)  
{
    static int temp = 1;    
    
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        ekokBul(a,b);
        return temp;
    }
}


int main()
{
    printf("Girilen iki sayinin ekokunu bulan program\n\n");
    
    int a, b, ekok;
    
    printf("\n\nLutfen iki sayi giriniz:\n");
    
    scanf("%d%d", &a, &b);
    
    ekok = ekokBul(a,b);    
    printf("\n\n%d ve %d nin ekoku: %d\n\n", a, b, ekok);
    
    return 0;
}


