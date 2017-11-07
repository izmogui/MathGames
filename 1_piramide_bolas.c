#include <stdio.h>
#include <stdlib.h>

/*

MAX 10000

cada capa tiene n² bolas, n={1,2,...,m}, sum n² < MAX

¿bolas sobran?
*/

#define MAX 10000



int main(int argc, char *argv[]){
	
	int i, sum_n = 0, m;
	for(i = 1; sum_n <= MAX; i++){
		m = i*i;
		sum_n = sum_n+m;
	}
	sum_n = sum_n-m;
	printf("Sobran %d bolas.\n", MAX-sum_n);
	
	exit(0);
}
