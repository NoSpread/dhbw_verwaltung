#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>


int main(int argc, char *argv[]) {
	FILE *fp;
	fp = fopen("config.txt", "r");

	if(fp == NULL) {
		printf("Datei konnte nicht geoeffnet werden.\n");
		return 1;
	}else {
		char text[256];
		char password[201];
		char helper[2];
		fgets(text, 255, fp);
		const int ZEICHEN = atoi(fgets(text, 255, fp));
	
		char pool[] = {'a', 'b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	
		int min = 0;
		int max = 61;
	
		int random;
	
		int i;
		printf("Password: ");
		srand(time(NULL));
		strcpy(text, "");
		for(i = 0; i < ZEICHEN; i++) {
			random = (rand () % ((max + 1) - min)) + min;
			printf("%c", pool[random]);
			helper[0] = pool[random]; 
			strcat(text,helper);
		
		}
		
		// 	Passwort in einem String
		//	printf("\nPassword: %s",text);
	
		fclose(fp);
		printf("\n");
		system("PAUSE");
		return 0;
	}
}
