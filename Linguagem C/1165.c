#include <stdio.h>

int main(void) {
    int x, divisores;
    scanf("%d", &x);

    if (x < 0 || x > 10e7)
        return 1;

    if (x == 2) {
        printf("%d eh primo\n", x);
        return 0;
    } else if (x % 2 == 0) {
        printf("%d nao eh primo\n", x);
        return 0;
    }

    divisores = 0;
    for (int i = 2; i < x; i++) {
        if (x % i == 0)
            divisores++;

        if (divisores > 1)
            break;
    }

    if (divisores == 1)
        printf("%d eh primo\n", x);
    else
        printf("%d nao eh primo\n", x);

    return 0;
}

