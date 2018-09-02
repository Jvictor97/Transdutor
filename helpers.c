#include <stdbool.h>

void concat(char [], char []);
void bind(char[], char[], char);
void copy(char[], char[]);
void intToChar(int, char[]);


void concat(char a[], char b[]){
	int i, j;
	for(i = 0; a[i] != '\0'; i++);

	for(j = 0; b[j] != '\0'; j++){
		a[i+j] = b[j];
	}

	a[i+j] = '\0';
}

void bind(char string[] , char replace[], char token){

	char before[500] = "";
	char after[500] = "";	
	bool copy = false;
	int it = 0;

	for(int i = 0; string[i] != token; i++){
		before[i] = string[i];		
	}

	concat(before, replace);

	int i;

	for(i = 0; string[i] != 0; i++){
		if(copy){
			after[it] = string[i];
			it++;
		}
		if(string[i] == token)
			copy = true;
	}

	after[i] = '\0';

	concat(before, after);
	string[0] = '\0';

	concat(string, before);	
}

void copy(char destino[], char origem[]){
	int i = 0;
	while(origem[i] != 0){
		destino[i] = origem[i];
		i++;
	}
	destino[i] = '\0';
}

void intToChar(int n, char v[]){
	if(n < 10){
		v[0] = n + '0';
		v[1] = '\0';
	}else{
		v[0] = n / 10 + '0';
		v[1] = n % 10 + '0';
	}
}