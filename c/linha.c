#include<stdio.h>
int main(void)
{
    int a;
    int b;
    int x;
    int y;
    a=177;
    b=219;
    x=1;
    y=1;
    while(y<24)
    {
               while(x<24)
               {
                          if(x==y)
                          {
                                  printf("%c", b);
                          }
                          else
                          {
                              printf("%c", a);
                          }
                          x++;
               }
               x=1;
               printf("\n");
               y++;
    }
    return 0;
}
