#define N 80
int Strlen_v(char s[]);
int Strlen_p(char *s);
int main(void)
{
   char str[N];
   scanf("%s", str);
   printf("%d\n", Strlen_v(str));
   printf("%d\n", Strlen_p(str));
   return 0;
}
int Strlen_v(char s[])
{
   int i=0;
   while(s[i]!='\0')
   {
      i++;
   }
   return i;
}
int Strlen_p(char *s)
{
   char *p;
   p=s;
   while(*p!='\0')
   {
      p++;
   }
   return p-s;
}
