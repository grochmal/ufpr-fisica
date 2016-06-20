#include<stdio.h>
void inverte_se_precisar(float *a, int b)
{
     if(b<0)
     {
            *a=1/(*a);
     }
     return;
}
void torna_negativo_se_precisar(float *a, int b)
{
    if(b<0)
    {
           *a=-(*a);
    }
    return;
}
int potencia_int(float a, int n, float *b)
{
    float x;
    int z;
    int w;
    int v;
    x=1.0;
    z=0;
    w=1;
    v=1;
    if(n==0)
    {
            *b=1.0;
            return 1;
    }
    if(a==1.0)
    {
            *b=1.0;
            return 1;
    }
    if(a==0.0)
    {
              if(n<0)
              {
                     return 0;
              }
              *b=0.0;
              return 1;
    }
    if(n<0)
    {
           n=-n;
           w=-w;
    }
    if(a<0)
    {
           a=-a;
           if(n%2==1)
           {
                     v=-v;
           }
    }
    while(z<n)
    {
              x=x*a;
              z=z+1;
    }
    inverte_se_precisar(&x, w);
    torna_negativo_se_precisar(&x, v);
    *b=x;
    return 1;
}
int main(void)
{
    float a;
    int n;
    float b;
    printf("\n");
    printf("Este programa resolve potencias:\n ");
    printf("Digite o numero da potencia: ");
    scanf("%f", &a);
    printf("O grau da potencia: ");
    scanf("%d", &n);
    printf("\n");
    if(potencia_int(a, n, &b))
    {
          printf("Resposta: ");
          printf("%f\n", b);
          printf("\n");
          return 0;
    }
    printf("Nao ha resposta.\n");
    printf("\n");
    return 0;
}
