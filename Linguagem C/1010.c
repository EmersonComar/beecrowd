#include <stdio.h>

int main(void){
	int cod1, peca1;
	int cod2, peca2;
	float valor1, valor2, total;

	scanf("%d %d %f", &cod1, &peca1, &valor1);
	scanf("%d %d %f", &cod2, &peca2, &valor2);

	total = (peca1 * valor1) + (peca2 * valor2);

	printf("VALOR A PAGAR: R$ %.2f\n", total);


	return 0;
}
