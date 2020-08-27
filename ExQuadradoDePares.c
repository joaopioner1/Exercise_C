#include <stdio.h>

int main()
{
    int input, quad; //quad = quadrado
    scanf("%d", &input);
    
    for (int i = 1; i <= input; i++) {
        if (i % 2 == 0) {
            quad = i * i;
            printf("%d^%d = %d\n",i,i,quad);
        }
    }

    return 0;
}
