#include <stdio.h>

int main()
{
    double valorIngresso, desconto, precoSocio, valorTotal, valorPendente;
    int numeroSocio, numeroCrianca, numeroComuns, publicoTotal;
    
    printf("Insira o valor dos ingressos: ");
    scanf("%lf", &valorIngresso);
    printf("Insira o numero de socios: ");
    scanf("%d", &numeroSocio);
    printf("Insira o numero de criancas: ");
    scanf("%d", &numeroCrianca);
    printf("Insira o numero de pagantes comuns: ");
    scanf("%d", &numeroComuns);
    
    publicoTotal = numeroComuns + numeroSocio + numeroCrianca;
    valorPendente = publicoTotal * valorIngresso;
   
    desconto = (valorIngresso * 30.00) / 100 * numeroSocio;
    precoSocio = numeroSocio * valorIngresso - desconto;
    valorTotal = numeroComuns * valorIngresso + precoSocio;
    
    printf("\npublico total: %d", publicoTotal);
    printf("\nvalor total arrecadado no evento: R$ %.2lf", valorTotal);
    printf("\nValor total que poderia ser arrecadado no evento: R$ %.2lf", valorPendente - valorTotal);
    
    return 0;
}
/*Desenvolva um algoritmo que será utilizado para automatizar o cálculo do público e
da renda total de um evento esportivo. Este evento esportivo possui um valor fixo
cobrado por ingresso, no entanto, os sócios do clube em cujas dependências ocorre
o evento possuem um desconto de 30% no valor do ingresso e as crianças menores
de 10 anos não pagam ingresso. Baseado nos dados acima apresentados o usuário
deverá digitar 4 informações de
entrada para o sistema, são elas:
- Valor de cada ingresso
- Número de pessoas (público do evento) que são sócias do clube
- Número de pessoas (público do evento) não pagantes (menores de 10
anos)
- Número de pessoas (público do evento) pagantes (sem desconto algum)
O algoritmo deverá calcular e exibir o público total do evento, a renda total do evento
e o valor que deixou de ser arrecadada devido aos descontos e isenções.
*/