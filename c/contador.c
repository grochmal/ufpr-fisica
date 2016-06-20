#include <stdio.h>
#include <math.h>
float resolva (float a, float b)
{
      return (b/a);
}
int main (void)
{
    int n;
    printf ("1. Converta graus Celsius para Fahrenheit.\n");
    printf ("2. Converta graus Fahrenheit para Celsius.\n");
    printf ("3. Converta km/h para ml/h.\n");
    printf ("4. Converta ml/h para km/h.\n");
    printf ("5. Calcule x e y em um sistema de duas equacoes.\n");
    printf ("Escolha uma das funcoes acima: ");
    scanf("%d", &n);
    if (n<1.1)
    {
          float c;
          printf ("Escreva o valor em graus Celsius: ");
          scanf ("%f", &c);
          printf ("Em graus fahrenheit fica: ");
          printf ("%f\n", (resolva(5.0, c*9.0)-32));
          return 0;
          }
    else if (n<2.1)
    {
          float f;
          printf ("Escreva o valor em graus Fahrenheit: ");
          scanf ("%f", &f);
          printf ("Em graus Celsius fica: ");
          printf ("%f\n", resolva(9, 5*(f+32)));
          return 0;
          }
    else if (n<3.1)
    {
          float kmph;
          printf ("Escreva o valor em km/h: ");
          scanf ("%f", &kmph);
          printf ("Em ml/h fica: ");
          printf ("%f\n", resolva(1.6, kmph));
          return 0;
          }
    else if (n<4.1)
    {
          float mlph;
          printf ("Escreva o valor em ml/h: ");
          scanf ("%f", &mlph);
          printf ("Em km/h fica: ");
          printf ("%f\n", resolva(0.625, mlph));
          return 0;
          }
    else if (n<5.1)
    {
          float a11;
          float a12;
          float b11;
          float a21;
          float a22;
          float b21;
          printf ("Escreva as equacoes na forma:\n");
          printf ("Prieira equacao: (a11)x+(a12)y=(b11).\n");
          printf ("Segunda equacao: (a21)x+(a22)y=(b21).\n");
          printf ("De o valor de a11: ");
          scanf ("%f", &a11);
          printf ("De o valor de a12: ");
          scanf ("%f", &a12);
          printf ("De o valor de b11: ");
          scanf ("%f", &b11);
          printf ("De o valor de a21: ");
          scanf ("%f", &a21);
          printf ("De o valor de a22: ");
          scanf ("%f", &a22);
          printf ("De o valor de b21: ");
          scanf ("%f", &b21);
          printf ("Respostas:\n");
          printf ("x=");
          printf ("%f\n", resolva((a21*a12-a22*a11), (b21*a12-a22*b11)));
          printf ("y=");
          printf ("%f\n", resolva((a11*a22-a21*a12), (b21*a11-a21*b11)));
          return 0;
          }
    else
    printf ("Erro");
    return 0;
}
