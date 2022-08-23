#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node{
    int data ;
    struct node  *next;
}dugum;




void l_ListYazdir(dugum * root){
// linklist yazdirma kismi 
	dugum * iter =  (dugum *)malloc(sizeof(dugum));
	iter=root;
	while(iter->next != NULL){
		printf("%d,",iter->data);
		//
		iter=iter->next;
	}
}  


void birlestirme(dugum *root1 ,dugum *root2){
    while(root1-> next != NULL){
        root1 = root1 -> next ;  
    }
    root1 -> next = root2; 
}

void shortt(dugum *root1){
	struct node *iter = root1;
	struct node *iter2 = root1;
	
	for(iter = root1 ; iter!= NULL ; iter = iter->next){
	    
		for(iter2 = iter->next ; iter2 != NULL ; iter2 = iter2->next){
		    
			if(iter->data > iter2->data){
			    
				int keep = iter2->data;
				
				iter->data = iter2->data;
				iter2->data = keep;
			}
		}}
void sonaEkle(int veri1, dugum *root){
	dugum *iter = (dugum*) malloc(sizeof(dugum));
	iter=root;

		while(iter->next!= NULL){
			iter = iter ->next;
			
		}
		iter->data=veri1;
		iter ->next = NULL;
	
}
	
int main(int argc, char *argv[]) {
	FILE *dataFile;
    dataFile = fopen("dosya1.txt", "r");
    if(dataFile == NULL) {
        printf("Dosya acilamadi\n");
    } else {
        printf(" ");
    }
    int d_verisi;
    dugum *root1 =  (dugum *)malloc(sizeof(dugum));
    fscanf(dataFile, "%d", &d_verisi);
    root1->data = d_verisi;
    root1 -> next = NULL;
    
        while (!feof (dataFile)){
        	fscanf(dataFile, "%d", &d_verisi);
			sonaEkle(d_verisi,root1);	

       }
    
       return(0);
}
    


	
