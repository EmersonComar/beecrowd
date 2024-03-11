#include <stdio.h>

int main(void){
	int a, b, c, maior;

	scanf("%d %d %d", &a, &b, &c);
	maior = a;
	if (b > maior)
		maior = b;
	if (c > maior)
		maior = c;
	printf("%d eh o maior\n", maior);

	return 0;
}
