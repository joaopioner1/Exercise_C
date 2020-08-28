#include <stdio.h>

int main()
{
    int n1, n2;
    
    scanf("%d", &n1);

    for (int i = 0; i <= n1; i++) {
        scanf("%d", &n2);
        if (n2 % 2 == 0 && n2 > 0) {
            printf("EVEN POSITIVE");
        }
        if (n2 % 2 == 0 && n2 < 0) {
            printf("EVEN NEGATIVE");
        }
        if (n2 % 2 != 0 && n2 > 0) {
            printf("ODD POSITIVE");
        }
        if (n2 % 2 != 0 && n2 < 0) {
            printf("ODD NEGATIVE") 
        }
        if (n2 == 0) {
            printf("NULL");
        } 
    }
    }
    
    return 0;
}

