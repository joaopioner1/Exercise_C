#include <stdio.h>

int main()
{
    double input;
    
    printf("Insira um numero para verificar em qual intervalo esta: ");
    scanf("%lf", &input);
    
    if (input >= 0 && input <= 25) {
        printf("intervalo [0,25]");    
    } else if (input > 25 && input <= 50) {
        printf("intervalo [25,50]");
    } else if (input > 50 && input <= 75) {
        printf("intervalo [50,75]");
    } else if (input > 75 && input <= 100) {
        printf("intervalo [75,100]");
    } else {
        printf("Fora do intervalo.");
    }

    return 0;
}

