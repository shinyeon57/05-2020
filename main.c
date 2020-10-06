#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer = 59;
	int input;
	int i=0;

	do{	
		printf("Guess a number! : ");
		scanf("%d", &input);
		if (input > answer){
			printf("HIGH!\n");
		}
		
		else if (input < answer){
			printf("LOW!\n");
		}
		
		i++;			
	} while (input != answer);
	
	printf("congratulation! trials : %d\n", i);
	

	
	return 0;
}
