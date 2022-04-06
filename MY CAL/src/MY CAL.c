/*
 ============================================================================
 Name        : MY.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice,a,b,div,sum,mul,sub;
	setbuf(stdout,NULL);
	printf("1 for addition \n2 for subtraction \n3 for multiple \n4 for division");
	printf("\nenter the choice");
	scanf(" %d",&choice);


	switch(choice){
	case 1:
		printf("enter the number");
		scanf("%d%d",&a,&b);
		sum=a+b;
		printf("Answers is %d",sum);
    case 2:
    	printf("enter the number");
    	scanf("%d%d",&a,&b);
			sub=a-b;
			printf("Answers is %d",sub);
     case 3:
    	 printf("enter the number");
    	 scanf("%d%d",&a,&b);
			mul=a*b;
			printf("Answers is %d",mul);
			break;


		case 4:
			printf("enter the number");
			scanf("%d%d",&a,&b);
			div=a/b;
			printf("Answers is %d",div);


		default:
	printf("no option");
	}
	return EXIT_SUCCESS;
}
