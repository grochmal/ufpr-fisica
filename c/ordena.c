#include<stdio.h>
#include<math.h>
void ordena2(float *a, float *b)
{
     if(*b<*a)
     {
              float c;
              c=*a;
              *a=*b;
              *b=c;
     }
     return;
}
void ordena3(float *a, float *b, float *c)
{
     ordena2(a, b);
     if(*c<*a)
     {
              float d;
              d=*a;
              *a=*c;
              *c=*b;
              *b=d;
     }
     if(*c>=*a && *c<=*b)
     {
               float d;
               d=*b;
               *b=*c;
               *c=d;
     }
     return;
}
int main(void)
{
float a;
float b;
float c;
scanf("%f", &a);
scanf("%f", &b);
scanf("%f", &c);
ordena3(&a, &b, &c);
printf("%f\t%f\t%f\n", a, b, c);
return 0;
}
