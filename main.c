#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {\
	
	char c;
	int cnt=0;
	
	printf("input a string: ");

	while((c = getchar()) != '\n'){
		
		if(c<='9' && c>='0'){
		
			cnt++;		
		}	
	}

	printf("the number of digits is %i\n", cnt);
	
	return 0;
}
