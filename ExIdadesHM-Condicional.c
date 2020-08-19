#include <stdio.h>

int main()
{
    int ageW1, ageW2, ageM1, ageM2, soma, produto;
    
    printf("Insira a idade da primeira mulher: ");
    scanf("%d", &ageW1);
    printf("Insira a idade da segunda mulher: ");
    scanf("%d", &ageW2);
    printf("Insira a idade do primeira homem: ");
    scanf("%d", &ageM1);
    printf("Insira a idade do segundo homem: ");
    scanf("%d", &ageM2);
    
    if (ageW1 > ageW2 && ageM1 > ageM2) {
        soma = ageW2 + ageM1;
        produto = ageM2 * ageW1;
        printf("\nResultado da soma = %d", soma);
        printf("\nResultado do produto = %d", produto);
        printf("\nIdade da primeira mulher = %d", ageW1);
        printf("\nIdade da segunda mulher = %d", ageW2);
        printf("\nIdade do primeiro homem = %d", ageM1);
        printf("\nIdade do segundo homem = %d", ageM2);
    } else if (ageW1 < ageW2 && ageM1 < ageM2) {
        soma = ageW1 + ageM2;
        produto = ageM1 * ageW2;
        printf("\nResultado da soma = %d", soma);
        printf("\nResultado do produto = %d", produto);
        printf("\nIdade da primeira mulher = %d", ageW1);
        printf("\nIdade da segunda mulher = %d", ageW2);
        printf("\nIdade do primeiro homem = %d", ageM1);
        printf("\nIdade do segundo homem = %d", ageM2);
    } else if (ageW1 < ageW2 && ageM1 > ageM2) {
        soma = ageW1 + ageM1;
        produto = ageM2 * ageW2;
        printf("\nResultado da soma = %d", soma);
        printf("\nResultado do produto = %d", produto);
        printf("\nIdade da primeira mulher = %d", ageW1);
        printf("\nIdade da segunda mulher = %d", ageW2);
        printf("\nIdade do primeiro homem = %d", ageM1);
        printf("\nIdade do segundo homem = %d", ageM2);
    } else if (ageW1 > ageW2 && ageM2 > ageM1) {
        soma = ageW2 + ageM2;
        produto = ageM1 * ageW1;
        printf("\nResultado da soma = %d", soma);
        printf("\nResultado do produto = %d", produto);
        printf("\nIdade da primeira mulher = %d", ageW1);
        printf("\nIdade da segunda mulher = %d", ageW2);
        printf("\nIdade do primeiro homem = %d", ageM1);
        printf("\nIdade do segundo homem = %d", ageM2);
    }

    return 0;
}
/*Escreva um programa que faça a leitura da idade de 2 homens e 2 mulheres
(supondo que as idades do mesmo sexo serão diferentes). O programa deve fazer o
somatório da idade do homem mais velho com a idade da mulher mais nova e o
produto da idade do homem mais novo pela idade da mulher mais velha. Ao final
você deve imprimir os resultados, e cada uma das idades digitadas: mulher mais
nova, mulher mais velha, homem mais novo e homem mais velho.

*/