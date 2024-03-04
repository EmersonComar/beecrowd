#include <stdio.h>

int main(void){
    int funcionarios, horas;
    float salario;

    scanf("%d %d %f", &funcionarios, &horas, &salario);

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", funcionarios, (horas*salario));
    return 0;

}