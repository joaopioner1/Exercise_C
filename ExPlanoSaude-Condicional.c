#include <stdio.h>

int main()
{
    int idade;
    
    printf("Insira a idade do conveniado: ");
    scanf("%d", &idade);
    
    if (idade < 10) {
        printf("Valor a ser pago: R$ 180.00");
    } else if (idade >= 10 && idade < 40) {
        printf("valor a ser pago: R$ 150.00");
    } else if (idade >= 40 && idade < 60) {
        printf("Valor a ser pago: R$ 195.00");        
    } else {
        printf("Valor a ser pago: R$ 230.00");
    }

    return 0;
}
