#include <stdio.h>
#include <string.h>
 
void Palindrom(char kelime[], int indeks)
{
    int len = strlen(kelime) - (indeks + 1);
    if (kelime[indeks] == kelime[len])
    {
        if (indeks + 1 == len || indeks == len)
        {
            printf("Girilen kelime palindromdur.\n\n");
            return;
        }
        Palindrom(kelime, indeks + 1);
    }
    else
    {
        printf("Girilen kelime palindrom degil");
    }
}
 
int main()
{
    char kelime[25];
    printf("Girilen kelimenin palindrom olup olmadigini kontrol eden kod:\n");
	printf("----------------------------------------------------------\n");	
 
    printf("Lutfen bir kelime giriniz: ");
    scanf("%s", kelime);
    Palindrom(kelime, 0);
 
    return 0;
}
 

