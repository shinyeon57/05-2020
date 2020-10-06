#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int input;
	int sum=0;
	int i;

	printf("input a number: ");
	scanf("%i", &input);

	for(i=1; i <= input; i++){
		sum = sum + i;
	}	

	printf("the result is %i", sum);
	
	return 0;
}
