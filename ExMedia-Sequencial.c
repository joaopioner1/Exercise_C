/*int (inteiro 16 bits) %d ou %i
long int (inteiro 32 bits) %li
long long int (inteiro 64 bits) %lli
float (real precisão simples) %f
double (real precisão dupla) %lf
char (um único caractere) %c
char[ ] (texto) %s 
*/
#include <stdio.h>

int main()
{
    double nota1, nota2, media;
    
    printf("Entre com  a primeira nota do aluno: ");
    scanf("%lf", &nota1);
    printf("Entre com  a segunda nota do aluno: ");
    scanf("%lf", &nota2);
    
    media = (nota1 + nota2) / 2;
    
    printf("A media da nota do aluno é: %.2lf\n", media);

    return 0;
}


