#define N 80
int Strcmp_v(char s[], char t[]);
int Strcmp_p(char *s, char *t);
int main(void)
{
   char s[N], t[N];
   scanf("%s", s);
   scanf("%s", t);
   printf("%d\n", Strcmp_v(s, t));
   printf("%d\n", Strcmp_p(s, t));
   return 0;
}
int Strcmp_v(char s[], char t[])
{
   int i=0;
   while(s[i]==t[i] && s[i]!='\0')
   {
      i++;
   }
   if(s[i]=='\0' && t[i]=='\0')
   {
      return 0;
   }
   if(s[i]<t[i])
   {
      return -1;
   }
   return 1;
}
int Strcmp_p(char *s, char *t)
{
   char *a, *b;
   a=s;
   b=t;
   int i=0;
   while(*(a+i)==*(b+i) && *(a+i)!='\0')
   {
      i++;
   }
   if(*(a+i)=='\0' && *(b+i)=='\0')
   {
      return 0;
   }
   if(*(a+i)<*(b+i))
   {
      return -1;
   }
   return 1;
}
