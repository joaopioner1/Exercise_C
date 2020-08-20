#include <stdio.h>
#include <math.h>

int main()
{
    double r, area, diam, comp;
    
    printf("Entre com o raio da circunferencia: ");
    scanf("%lf", &r);
    
    area = 3.14 * pow(r, 2);
    diam = r * 2;
    comp = 2 * 3.14 * r;
    
    printf("Area = %.3lf",area);
    printf("\nDiametro = %.3lf",diam);
    printf("\nComprimentro = %.3lf",comp );
    
    return 0;
}
