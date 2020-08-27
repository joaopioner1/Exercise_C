#include <stdio.h>

int main()
{
    double input, mul;
    
    printf("Insira um numero para calcular a temporada: ");
    scanf("%lf", &input);
    
    for (int i = 0; i <= 10; i++) {
        mul = i * input;
        printf("%d x %.2lf = %.2lf\n", i, input, mul);
    }

    return 0;
}
