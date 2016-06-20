#include "dance-data.h"

char *archive(int neoop, char *fname);
void filerror(void);
int mdli(int a);
void memoerror(void);
char *mkquest(char *fname);
void noption(void);
char *noret(char *s);
char *stcop(char *s, char *t);
char tolowc(char c);

int main(void)
{
    FILE *fpt;
    char cmd, ch, fcmd[MAXBUF], fname[MAXBUF]="project1";
    while(1)
    {
            if((fpt=fopen("../men/basemenu.men", "r"))==NULL)
               filerror();
            puts("\nMenu Base\n");
            while((ch=fgetc(fpt))!=EOF)
               putc(ch, stdout);
            putc('\n', stdout);
            fclose(fpt);
            fgets(fcmd, MAXBUF-1, stdin);
            cmd=fcmd[0];
            switch(cmd)
            {
               case '1':
                    archive(NWARCH, fname);
                    break;
               case '2':
                    archive(OPARCH, fname);
                    break;
               case '3':
                    fputs("\ndata new\n", stdout);
                    break;
               case '4':
                    fputs("\ndata open\n", stdout);
                    break;
               case '5':
                    fputs("\nstatistic\n", stdout);
                    break;
               case '6':
                    fputs("\nQuiting program...\nPres Enter to exit.\n", stdout);
                    cmd=getchar();
                    exit(0);
                    break;
               case '<':
                    puts("Back Menu\n");
                    break;
               default:
                    noption();
                    break;
            }
    }
    return 0;
}
char *archive(int neoop, char *fname)
{
     char **pbuf, *buf, *pstr, *pfstr, str[MAXBUF], fstr[MAXBUF]={"../output/"}, cmd=1, ver=1;
     static char *tclass={".quest"};
     FILE *fpt;
     if(neoop)
     {
                    while(cmd)
                    {
                            puts("\n\nOpen file: ");
                            pstr=str;
                            pfstr=fstr;
                            fgets(str, MAXBUF-(OUTDIR+1), stdin);
                            if(str[0]=='<')                                  //if the user wants return to main menu.
                               return fname;
                            stcop(fname, noret(str));
                            pfstr+=OUTDIR;                                   //number of characters of "output/"
                            while((*pfstr++=*pstr++)!='\0');
                            noret(fstr);
                            if((fpt=fopen(fstr, "rw"))==NULL)
                            {
                                                while(cmd!='n')
                                                {
                                                               puts("\n\nThis archive does not exist, want to start new archive? y/n ");
                                                               fgets(str, MAXBUF-1, stdin);
                                                               cmd=tolowc(str[0]);
                                                               if(cmd='y')
                                                                  return archive(NWARCH, fname);
                                                               if(cmd='<')
                                                                  return fname;
                                                }
                            }
                            if(fpt!=NULL)
                               mkquest(fname);
                    }
     }
     else
     {
         fputs("\n\nName of the new file:\nFor name \"", stdout);
         fputs(fname, stdout);
         fputs("\" simply write y.\n", stdout);
         while(cmd)
         {
                   pstr=str;
                   pfstr=fstr;
                   fgets(str, MAXBUF-1, stdin);
                   if(str[0]=='<' && fname[1]!='\n')                //if the user wants return to main menu.
                      return fname;
                   if(ver && str[0]=='y' && str[1]=='\n')
                   {
                      stcop(str, fname);
                      ver=0;
                   }
                   stcop(fname, str);
                   pfstr+=OUTDIR;                                   //number of characters of "output/"
                   while((*pfstr++=*pstr++)!='\0');
                   noret(fstr);
                   if((fpt=fopen(fstr, "w"))==NULL)
                   {
                                       puts("\n\nCannot be used as a file name, please try another.\n");
                                       puts("\n\nName of the new file:");
                   }
                   if(fpt!=NULL)
                      mkquest(fname);
         }
     }
     return fname;
}                            
void filerror(void)
{
     fputs("Fail on opening file.\n", stderr);
     getchar();
     exit(0);
     return;
}
int mdli(int a)
{
    if(a<0)
    {
           a=-a;
    }
    return a;
}
void memoerror(void)
{
     fputs("Fail on allocating memory, please close some aplications and try again.\n", stderr);
     getchar();
     exit(0);
     return;
}
char *mkquest(char *fname)
{
     puts("\n\nparabens vc chegou a começar as questos, por enquanto o programa so chega ate aqui");
     puts("o nome do arquivo chamado e ");
     puts(fname);
     return fname;
}
void noption(void)
{
     puts("Select the number of option.\n");
     return;
}
char *noret(char *s)
{
     char *p;
     p=s;
     while(*p++!='\n');
     p--;
     *p='\0';
     return s;
}    
char *stcop(char *s, char *t)
{
     int i=0;
     while((*s++=*t++)!='\0')
        i++;
     s[i]='\0';
     return s;
}
char tolowc(char c)
{
     if(c>='A' && c<='Z')
     {
               c-=mdli('A'-'a');
     }
     return c;
}
