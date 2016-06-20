#include <stdio.h>
#include <math.h>
int main(void)
{
    float a;
    float b;
    float c;
    float raiz_discriminante;
    printf("Escreva sua funcao na forma ax^2+bx+c=0\n");
    printf("Escreva o valor de a: ");
    scanf("%f",&a);
    printf("Escreva o valor de b: ");
    scanf("%f",&b);
    printf("Escreva o valor de c: ");
    scanf("%f",&c);
    raiz_discriminante=sqrt(b*b-4*a*c);
    printf("%f\n",(((-b)+raiz_discriminante)/(2*a)));
    printf("%f\n",(((-b)-raiz_discriminante)/(2*a)));
    return 0;
}
