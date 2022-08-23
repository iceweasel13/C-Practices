#include<stdio.h>


int numPrint(int n)
{
    if(n<=20)
    {
         printf(" %d ",n);
         numPrint(n+1);
    }
}

int main()
{
    int n = 1;
	printf("Ilk 20 sayiyi yazdiran recursive kod:\n");
	printf("-------------------------------------------------\n"); 
    numPrint(n);
    printf("\n-------------------------------------------------\n"); 
    return 0;
}
