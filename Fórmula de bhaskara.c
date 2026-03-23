#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double x1, x2, delta;
    printf("Digite os valores a, b e c: \n");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0) {
        printf("Isto não é uma equação de segundo grau.");
    }
    else {
        delta = (b * b) - 4 * a * c;
        if (delta < 0) {
            printf("Não existem raízes reais");
        }
            else if (delta == 0) {
                printf("Existem apenas uma raiz");
            }
                else {
                    x1 = (-b + sqrt(delta)) / (2 * a);
                    x2 = (-b - sqrt(delta)) / (2 * a);
                    printf("Suas raízes são: (%.2lf e %.2lf)", x1, x2);
                    
                }
            
        
    }

    return 0;
}
