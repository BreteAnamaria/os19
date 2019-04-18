#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int mystrlen(char str[20]){
	int k=0;
	while(str[k] != '\0')
		k++;
	return k;
}

int main(int argc, char*argv[]){
	for (int i=0; i<argc; i++)
		printf("\n%s de lungime %d\n",argv[i], mystrlen(argv[i]));



}
