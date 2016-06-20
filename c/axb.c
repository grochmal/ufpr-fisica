#include <stdio.h>
#include <math.h>
int main(void)
{
    float a;
    float b;
    float y;
    float x;
    printf("Escreva sua funcao na forma a.x+b=y.\n");
    printf("Escreva o valor de a: ");
    scanf("%f",& a);
    printf("Escreva o valor de b: ");
    scanf("%f",& b);
    printf("Escreva o valor de y: ");
    scanf("%f",& y);
    x=((y-b)/a);
    printf("O valor de x e: ");
    printf("%f\n",x);
    return 0;
}
