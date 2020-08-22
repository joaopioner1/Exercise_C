#include <stdio.h>

int main()
{
    double salary, emp, verifc, percent;
    int nPrest;
    
    printf("Insira o salario do funcionario: ");
    scanf("%lf", &salary);
    printf("Insira o valor do emprestimo: ");
    scanf("%lf", &emp);
    printf("Insira a quantidade de prestacoes: ");
    scanf("%d", &nPrest);
    
    verifc = emp / nPrest; // verifica o valor da prestacao
    percent = 30 * salary / 100; 
    if (verifc > percent) {
        printf("O emprestimo nao pode er concedido.\nO valor a prestacao eh maior que 30 por cento do salario do funcionario");
    } else {
        printf("O emprestimo pode ser concedido.");
    }
    
    
    
    return 0;
}
/*Uma empresa abriu uma linha de crédito para os funcionários. O valor da prestação
não pode ultrapassar 30% do salário. Faça um programa que receba o salário, o
valor do empréstimo e o número de prestações e informe se o empréstimo pode ser
concedido. Nenhum dos valores informados pode ser zero ou negativo.
*/
