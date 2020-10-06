#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {\
	
	int	input;
	
	printf("Enter the number :");
	scanf("%i", &input);
	

	if (input > 0)
		printf("|number| = %i\n", input);
		
		else 
			printf("|number| = %i\n", -input);

	return 0;
}
