#include <stdio.h>

long pascal(int sayi, int i) {
        if(sayi == i || i == 0)
                return 1;
        else
                return pascal(sayi-1, i) + pascal(sayi-1, i-1);
}
int main() {
   int n, i, j, bosluk = 0;
   printf("Satir sayisini giriniz: ");
   scanf("%d", &n);
   for(i = 0; n >= i; i++) {
            for(bosluk = 0; bosluk < n-i; bosluk++)
                    printf(" ");
            for(j = 0; i >= j; j++) {
                    long sonuc = pascal(i, j);
                    printf("%ld ", sonuc);
            }
            printf("\n");
    }
    return 0;
}
