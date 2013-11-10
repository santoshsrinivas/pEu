/* Eu_04  */
/* 10th Nov 2012 */

// Plain old Brute Force, should think of better solution

#include <stdio.h>
#include <stdlib.h>
unsigned int isPalindrome(unsigned long int);

int main(void){
	unsigned long int curr_num = 0;
	unsigned long int i,j;
	unsigned long int x=0,y=0;
	unsigned int flag =1;
	unsigned long int max =0;
	for(i=999;i>99;i--) {
		for(j=999;j>99;j--) {
			curr_num = i*j;
			flag = isPalindrome(curr_num);
			if(flag==0 && curr_num>max){
				max = curr_num;
				x = i; y=j;
			}
		}
	}
	printf("Answer is %ld  with %ld and %ld\n",max,x,y);

	return EXIT_SUCCESS; 
}

unsigned int isPalindrome(unsigned long int num){
	unsigned long int rev=0, rem, temp;
	temp = num;

	while(temp !=0){
		rem = temp%10;
		rev = rev*10 + rem;
		temp = temp/10;
	}

	if(rev == num){
		return 0;
	}
	else {
		return 1;
	}
}
