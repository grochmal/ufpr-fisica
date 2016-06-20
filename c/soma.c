#include<stdio.h>
main()
{
      int x, r;
      printf("Digite um numero de ate 4 algarismos: ");
      scanf("%d", &x);
      r=19998+x;
      printf("O resultado final da soma dos numeros sera: %d\n", r);
      printf("Digite o segundo numero (maximo 4 algarismos): ");
      scanf("%d", &x);
      printf("O meu numero sera: %d\n", 9999-x);
      printf("Digite o quarto numero (maximo 4 algarismos): ");
      scanf("%d", &x);
      printf("O meu numero sera: %d\n", 9999-x);
}
