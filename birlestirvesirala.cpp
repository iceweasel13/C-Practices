					
#include<stdio.h>
#include<stdlib.h>
//iki diziyi birlestirme ve sıralama islemi
int main()
{
	int *a,*b,*c,n,m,i,j,s;
	printf("Dizilerin uzunlugunu giriniz:");
	scanf("%d %d",&n,&m);
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(m*sizeof(int));
	c=(int*)malloc((n+m)*sizeof(int));
	printf("1. dizinin elemanlarini  giriniz:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Ýkinci dizinin elemanlarini giriniz:",m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	i=0;
	for(j=0;j<n;j++)
	{
		c[i]=a[j];
		i++;
	}
	for(j=0;j<m;j++)
	{
		c[i]=b[j];
		i++;
	}
	
        for (i = 0; i < n+m; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (c[i] > c[j]) 
                {
 
                    s =  c[i];
                    c[i] = c[j];
                    c[j] = s;
 
                }
 
            }
 
        }
	printf("Birlestirilmis ve siralanmis hali:");
	for(i=0;i<n+m;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}
			
	
