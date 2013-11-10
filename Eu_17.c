/* Eu_17.c */
/* 10th Nov 2013 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void threeDigit(unsigned int);
void twoDigit(unsigned int);
void singleDigit(unsigned int);

char final_string[10000000];
int main(void){
	unsigned int num=1;


	while(num <=1000){
		if(num>99 && num<1000)
			threeDigit(num);
		else if (num>9 && num<100)
			twoDigit(num);
		else if (num>=0 && num<10)
			singleDigit(num);
		else if(num == 1000){
			strcat(final_string,"onethousand");
		}
		else
		{
			printf("Number greater than 1000, exiting.\n");
		}
		num++;
	}

	printf("as Words : %s\n",final_string);
	printf("Length %d\n",strlen(final_string));

	return EXIT_SUCCESS;

}

void threeDigit(unsigned int num){
	unsigned int h_num,t_num;
	h_num = num/100;
	singleDigit(h_num);
	t_num = num - (h_num * 100);
	if(t_num > 0){
		strcat(final_string,"hundredand");
		twoDigit(t_num);
	}
	else{
		strcat(final_string,"hundred");
	}
}


void twoDigit(unsigned int num){
	unsigned int s_num,t_num,s_flag=0;
	switch(num){
		case 10 :
			strcat(final_string,"ten");
			break;
		case 11 :
			strcat(final_string,"eleven");
			break;
		case 12 :
			strcat(final_string,"twelve");
			break;
		case 13 :
			strcat(final_string,"thirteen");
			break;
		case 14 :
			strcat(final_string,"fourteen");
			break;
		case 15 :
			strcat(final_string,"fifteen");
			break;
		case 16 :
			strcat(final_string,"sixteen");
			break;
		case 17 :
			strcat(final_string,"seventeen");
			break;
		case 18 :
			strcat(final_string,"eighteen");
			break;
		case 19 :
			strcat(final_string,"nineteen");
			break;
		case 20 :
			strcat(final_string,"twenty");
			break;
		case 30 :
			strcat(final_string,"thirty");
			break;
		case 40 :
			strcat(final_string,"forty");
			break;
		case 50 :
			strcat(final_string,"fifty");
			break;
		case 60 :
			strcat(final_string,"sixty");
			break;
		case 70 :
			strcat(final_string,"seventy");
			break;
		case 80 :
			strcat(final_string,"eighty");
			break;
		case 90 :
			strcat(final_string,"ninety");
			break;
		default :
			if(num < 10)
				singleDigit(num);
			else{
				t_num = num/10;
				s_flag =1;
				s_num = num % 10;
				twoDigit(t_num * 10);
			}
	}

	if(s_flag == 1)
		singleDigit(s_num);
}


void singleDigit(unsigned int num){
	switch(num){
		case 0 :
			strcat(final_string,"zero");
			break;
		case 1 :
			strcat(final_string,"one");
			break;
		case 2 :
			strcat(final_string,"two");
			break;
		case 3 :
			strcat(final_string,"three");
			break;
		case 4 :
			strcat(final_string,"four");
			break;
		case 5 :
			strcat(final_string,"five");
			break;
		case 6 :
			strcat(final_string,"six");
			break;
		case 7 :
			strcat(final_string,"seven");
			break;
		case 8 :
			strcat(final_string,"eight");
			break;
		case 9 :
			strcat(final_string,"nine");
			break;

	}
}
