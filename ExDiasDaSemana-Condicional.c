#include <stdio.h>

int main()
{
   int input;
    
    printf("Insira um numero: ");
    scanf("%d", &input);
    
    switch (input) {
        case 1 : 
            printf("segunda-feira");
            break;
        case 2 :
            printf("terca-feira");
            break;
        case 3 : 
             printf("quarta-feira");
            break;
        case 4 :
             printf("quinta-feira");
            break;
        case 5 :
             printf("sexta-feira");
            break;
        case 6 : 
             printf("sabado");
            break;
        case 7 : 
             printf("domingo");
            break;
        default : 
             printf("insira um numero valido");
    }

    return 0;
}
