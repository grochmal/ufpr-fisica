#include<stdio.h>
#include<math.h>
int main (void)
{
    float soma;
    float produto;
    float raiz_discriminante;
    scanf("%f",&soma);
    scanf("%f", &produto);
    raiz_discriminante=sqrt(soma*soma-4*produto);
    printf("%f\n", (soma-raiz_discriminante)/2);
    printf("%f\n", (soma+raiz_discriminante)/2);
    return 0;
}
