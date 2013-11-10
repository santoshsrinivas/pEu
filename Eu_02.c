/* Eu_02 */
/* 9th Nov 2013 */

#include <stdio.h>
#include <stdlib.h>
#define NUM_LIMIT 4000000

int main(void){

	unsigned long int sum =2; // initializing sum to 2 , because the second term (s_term) is an even number, hence it is added into sum at the startup.
	unsigned long int f_term = 1;
	unsigned long int s_term = 2;
	unsigned long int curr_term =0;

	while(curr_term <= NUM_LIMIT){
		curr_term = f_term + s_term;
		f_term = s_term;
		s_term = curr_term;

		if(curr_term % 2 == 0 && curr_term <= NUM_LIMIT){
			sum = sum + curr_term;
			printf("%ld\t",curr_term);
		}
	}
	printf("answer is %ld \n",sum);

	return EXIT_SUCCESS;
}


