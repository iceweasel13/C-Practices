#include<stdio.h>

char* ters_cevir(char metin[])
{
    static int i=0;
    static char ters[100];
    if(*metin)
    {
         ters_cevir(metin+1);
         ters[i++] = *metin;
    }
    return ters;
}


int main()
{

    char metin[100],*ters;
	printf("Girilen metni ters ceviren kod\n");
	printf("------------------------------------------\n");	

    printf("Lutfen bir metin giriniz: ");
    scanf("%s",metin);

    ters = ters_cevir(metin);

    printf("Ters cevrilmis hali:%s\n\n",ters);
    return 0;
}

