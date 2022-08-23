#include <stdio.h>
#include <stdlib.h>

int main(){
   int a = 4;
   int b = -3;
   int j,i ;
    for ( j = 0; j<9; j++){
        printf("----------------------------------------------------------------------------------------------------------------------------------\n");
        if(a>=0){
            for( i = 0 ; i<7 ; i++){

                if(i == 0 ){
                    printf("|   city(%d ,%d)    ",b,a );
                }

                if(i == 1){
                    printf("|");
                    printf("   city(%d ,%d)    |",b,a );
                }else if (i != 1 && i != 0){
                     printf("   city(%d ,%d)    |",b,a);
                }
                 b++;

            }
                b = -3;
                a--;

                printf("\n");
        }else{
            for( i = 0 ; i<7 ; i++){

                if(i == 0 ){
                    printf("|   city(%d ,%d)   ",b,a );
                }

                if(i == 1){
                    printf("|   ");
                    printf("city(%d ,%d)   |",b,a );
                }else if (i != 1 && i != 0){
                    printf("   city(%d ,%d)   |",b,a);
                }
                    b++;

                }
            b = -3;
            a--;

        printf("\n");
        }

    }

        printf("----------------------------------------------------------------------------------------------------------------------------------\n");


    return 0;
}
