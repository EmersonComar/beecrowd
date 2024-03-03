#include <stdio.h>

int main(void){
	long int n;
	scanf("%ld", &n);

	if(n < -10e7 || n > 10e7){
		return 1;
	}

	if (n == 0){
		printf("NULL\n");
		return 0;
	}

	if (n % 2 == 0)
		printf("EVEN ");
	else
		printf("ODD ");

	if ( n < 0 )
		printf("NEGATIVE\n");
	else
		printf("POSITIVE\n");
	return 0;
}
