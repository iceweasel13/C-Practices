#include <stdio.h>
#include <string.h>


int kelimeArama(char* cumle, char* kelime) {

	int i, j, flag, a, b;
	b = strlen(cumle);	// cumle uzunlugu
	a = strlen(kelime);	// kelime uzunlugu


	while (i < b) {

		
		j = 0;
		while (i < b && j < a && cumle[i] == kelime[j]) {
			++i;
			++j;
		}

		
		if (( i == b || cumle[i] == ' ') && j == a)
			return 1;

		
		while (i < b && cumle[i] != ' ') {
			++i;
		}
		++i;

	}


	return 0;

}

int main() {

	char cumle[100];	
	char kelime[100];	

	printf("Lutfen bir cumle giriniz: ");
	gets(cumle);

	printf("Aranacak kelimeyi giriniz: ");
	gets(kelime);

	if (kelimeArama(cumle, kelime)) {
		printf("%s cumlenin icinde yer almaktadir.", kelime);
	}
	else {
		printf("%s cumlenin icinde yer almamaktadir.", kelime);
	}


}
	
