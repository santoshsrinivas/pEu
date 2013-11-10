/* Eu_01 */
/* 9th Nov 2013 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i;
	long sum=0;

	for(i=3;i<1000;i++){
		if(i%3==0 || i%5==0){
			sum = sum + i;
			printf("%d\t",i);
		}
	}
	printf("\nAnswer is %ld \n",sum);

	return EXIT_SUCCESS;
}
