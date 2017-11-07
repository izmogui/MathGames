#include <stdio.h>
#include <stdlib.h>

/*

MAX 100

n=11*t, n<MAX, t={1,2,...,9}
n=6*m-8, n<MAX, m={1,2,...,16}

¿n?
*/

#define MAX 100



int main(int argc, char *argv[]){
	
	int i, j;
	printf("Puede tener ");
	for(i = 0; i < MAX; i+=11){
		for(j = 0; j < MAX; j+=6){
			if(i == j-8 && i != 0){
				printf("%d ", i);
			}
		}
	}
	printf("floreros\n");
	
	exit(0);
}
