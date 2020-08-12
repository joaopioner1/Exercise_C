#include <stdio.h>

int main()
{
    int quantidadeM, quantidadeH, quantidadeC;
    
    printf("Insira a quantidade de mulheres que virão para a festa: ");
    scanf("%d", &quantidadeM);
    printf("Insira a quantidade de homens que virão para a festa: ");
    scanf("%d", &quantidadeH);
    printf("Insira a quantidade de crianças que virão para a festa: ");
    scanf("%d", &quantidadeC);
    
    int mediaCH = quantidadeH * 400; //Calculando a media de carne por homem
    int mediaCM = quantidadeM * 320;
    int mediaCC = quantidadeC * 200;
    double mediaTotal = mediaCM + mediaCC + mediaCH;
   
    printf("TOTAL DE CARNE COMPRADA QUE DEVERÁ SER COMPRADA: gm %.2lf\n", mediaTotal);
    
    return 0;
}
/*Considere que você deseja uma comemoração especial para o seu aniversário e
assim irá convidar familiares a amigos para um churrasco na sua residência. Você
irá precisar comprar a carne a ser consumida pelos seus convidados, logo precisa
de uma forma de calcular a quantidade cermta a ser adquirida.
Desenvolva o algoritmo do programa para auxiliar no cálculo da quantidade de carne
bovina (sem osso) a ser comprada considerando que homens, mulheres e crianças
consomem uma quantidades diferentes de carne.
Consumo de carne médio
(http://www.embaixadordochurrasco.com.br/calculochurrasco):
Homens: 400 gramas
Mulheres: 320 gramas
Crianças: 200 gramas
*Observação: geralmente é adicionada uma margem de segurança na quantidade
de carne a ser comprada para evitar que falte. Adicione uma margem de segurança
de 20% no total de carne a ser adquirida
*/
