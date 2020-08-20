#include <stdio.h>

int main()
{
    int input;
    
    printf("Insira a idade do nadador: ");
    scanf("%d", &input);
    
    if (input < 9) {
        printf("A categoria do nadador eh: mirim.");
    } else if (input >= 9 && input < 14) {
        printf("A categoria do nadador eh: infantil.");
    } else if (input >= 14 && input < 18) {
        printf("A categoria do nadador eh: juvenil");
    } else {
        printf("A categoria do nadador eh: adulta");
    }
    
    return 0;
}
