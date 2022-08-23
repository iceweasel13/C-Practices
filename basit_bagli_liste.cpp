#include<stdio.h>
#include<stdlib.h>

struct dugum{
	int veri;
	struct dugum * gosterici;
};



int main()
{
	
	struct dugum * bir ;
	bir = (struct dugum *) malloc(sizeof(struct dugum));
	

	
	struct dugum * iki;
	iki= (struct dugum *) malloc(sizeof(struct dugum));
	
	
	
	struct dugum * uc;
	uc=(struct dugum*) malloc(sizeof(struct dugum));
	
	
	
	struct dugum * dort ;
	
	dort= (struct dugum*) malloc(sizeof(struct dugum));
	
	bir->veri=11;
	bir ->gosterici=iki;
	
	iki ->veri=22;
	iki->gosterici=uc;

	uc -> veri = 33;
	uc->gosterici=dort;
	
	dort->veri=44;
	dort->gosterici=NULL;
	printf("%d %d %d %d", bir->veri,iki->veri,uc->veri,dort->veri);
	printf("\n %d",iki->gosterici);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
			
	
