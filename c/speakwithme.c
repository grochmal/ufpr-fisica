#define POCZONTEK "+0\n\0"
#define CYFRY_HUMOR 4
#define WYL_WIELKOSC 6
#define POL_WYL_WIELKOSC WYL_WIELKOSC/2
#define POZNY_HUMOR "-4\n\0"
#define MAX_ROZMOWA 81

#include<stdio.h>
#include<time.h>

long int pocz_nasiono=1;
void niewadome_nasiono(int nasiono);
int niewiad_numer(void);
int plus_niewiad_numer(void);
int patzry_humor(void);
int czy_jestem_zly(void);
char *robi_wyl_poczatek(void);
int wylanczam_sie(void);
void zmienia_humor(int zmiana);
char *zwraca_humor(void);
int dlugosc_zdania(char *zdanie);
int takie_same_zdanie(char *zdanie1, char *zdanie2);
void jedna_linia(char *linia);
int rozmowa(void);

int main(int argc, char *argv[])
{
	if(argc!=2)
	{
puts("\nPlease follow the format 'speak_with_me mode', where");
puts("mode can be:");
puts("\t-c, --conversation\tThe program will try to speak");
puts("\t                  \tcontinuosely with you.");
puts("\t-h, --help        \tPrint the help file of this program.");
puts("\t-m, --mathematics \tThis resolve some mathematical");
puts("\t                  \tproblems, this is the most stable");
puts("\t                  \tand util part of the program.");
puts("\t-q, --question    \tI will try to answer questions");
puts("\t                  \t(very fine).\n");
		return 0;
	}
	if(!strcmp(argv[1], "-c") || !strcmp(argv[1], "--conversation"))
	{
		puts("\nConversation\n");
		if(czy_jestem_zly())
		{
			puts("I don't want to speak with you!");
			return 0;
		}
		niewadome_nasiono(time(NULL));
		zmienia_humor(niewiad_numer()%2);
		printf("My humour today is %s (%d)\n",
			zwraca_humor(), patrzy_humor());
		while(rozmowa())
		{
			;
		}
		return 0;
	}
	if(!strcmp(argv[1], "-h") || !strcmp(argv[1], "--help"))
	{
		puts("\nHelp\n");
		return 0;
	}
	if(!strcmp(argv[1], "-m") || !strcmp(argv[1], "--mathematics"))
	{
		puts("\nMathematics\n");
		return 0;
	}
	if(!strcmp(argv[1], "-q") || !strcmp(argv[1], "--question"))
	{
		puts("\nQuestion\n");
		return 0;
	}
	puts("\nPlease follow the format 'speak_with_me mode', where");
	puts("mode can be:");
	puts("\t-c, --conversation\tThe program will try to speak");
	puts("\t                  \tcontinuosely with you.");
	puts("\t-h, --help        \tPrint the help file of this program.");
	puts("\t-m, --mathematics \tThis resolve some mathematical");
	puts("\t                  \tproblems, this is the most stable");
	puts("\t                  \tand util part of the program.");
	puts("\t-q, --question    \tI will try to answer questions");
	puts("\t                  \t(very fine).\n");
	return 0;
}

void niewadome_nasiono(int nasiono)
{
	pocz_nasiono=nasiono;
}

int niewiad_numer(void)
{
	pocz_nasiono=pocz_nasiono*1103515245+12345;
	return (int)(pocz_nasiono/65536)%32768;
}

int plus_niewiad_numer(void)
{
	int numer;
	if((numer=niewiad_numer())<0)
	{
		return -numer;
	}
	return numer;
}

int patrzy_humor(void)
{
	int n;
	char hum[CYFRY_HUMOR];
	FILE *fhumour;
	if((fhumour=fopen("Humor", "r"))==NULL)
	{
		if((fhumour=fopen("Humor", "w"))==NULL)
		{
			return 0;
		}
		fputs(POCZONTEK, fhumour);
		fclose(fhumour);
		return 0;
	}
	fgets(hum, CYFRY_HUMOR, fhumour);
	fclose(fhumour);
	n=atoi(hum);
	return n;
}

int czy_jestem_zly(void)
{
	if(patrzy_humor()==-6)
	{
		if(wylanczam_sie());
		{
			return 1;
		}
	}
	return 0;
}

int wylanczam_sie(void)
{
	char wyl[WYL_WIELKOSC]="0of3\n\0",
	     aby_wyl[POL_WYL_WIELKOSC],
	     ilosc_wyl[POL_WYL_WIELKOSC];
	char *strz_wyl;
	int i=0, aby, ilosc;
	FILE *fwylanczam, *fhumor;
	strz_wyl=wyl+POL_WYL_WIELKOSC;
	if((fwylanczam=fopen("Wylanczam Sie", "r"))==NULL)
	{
		if((fwylanczam=fopen("Wylanczam Sie", "w"))==NULL)
		{
		return 0;
		}
		niewadome_nasiono(time(NULL));
		*(wyl+3)=*(wyl+3)+(plus_niewiad_numer()%7);
		fputs(wyl, fwylanczam);
		fclose(fwylanczam);
		return 0;
	}
	fgets(wyl, WYL_WIELKOSC, fwylanczam);
	fclose(fwylanczam);
	while(i<POL_WYL_WIELKOSC)
	{
		*(aby_wyl+i)=*(strz_wyl+i);
		i++;
	}
	i=0;
	while(i<POL_WYL_WIELKOSC)
	{
		*(ilosc_wyl+i)=*(wyl+i);
		i++;
	}
	ilosc=*ilosc_wyl-'0';
	aby=*aby_wyl-'0';
	if(aby>ilosc)
	{
		ilosc++;
		if((fwylanczam=fopen("Wylanczam Sie", "w"))==NULL)
		{
			return 0;
		}
		*wyl='0'+ilosc;
		fputs(wyl, fwylanczam);
		fclose(fwylanczam);
		return 1;
	}
	if((fhumor=fopen("Humor", "w"))==NULL)
	{
		return 0;
	}
	fputs(POZNY_HUMOR, fhumor);
	fclose(fhumor);
	if((fwylanczam=fopen("Wylanczam Sie", "w"))==NULL)
	{
		return 0;
	}
	*wyl='0';
	*(wyl+1)='o';
	*(wyl+2)='f';
	*(wyl+3)='3';
	*(wyl+4)='\n';
	*(wyl+5)='\0';
	niewadome_nasiono(time(NULL));
	*(wyl+3)=*(wyl+3)+(plus_niewiad_numer()%7);
	fputs(wyl, fwylanczam);
	fclose(fwylanczam);
	return 0;
}

void zmienia_humor(int zmiana)
{
	int n;
	char *phum;
	char hum[CYFRY_HUMOR];
	FILE *fhumour;
	phum=hum;
	n=patrzy_humor();
	if(n==6 && zmiana>0)
	{
		return;
	}
	if(n>-6 && n<=6)
	{
		n=n+zmiana;
		if((fhumour=fopen("Humor", "w"))==NULL)
		{
			return;
		}
		if(n<0)
		{
			*hum='-';
			*(hum+1)='0'+(-n);
			*(hum+2)='\n';
			*(hum+3)='\0';
		}
		else
		{
			*hum='+';
			*(hum+1)='0'+n;
			*(hum+2)='\n';
			*(hum+3)='\0';
		}
		fputs(phum, fhumour);
		fclose(fhumour);
	}
	return;
}

char *zwraca_humor(void)
{
	int i;
	char hum[CYFRY_HUMOR];
	char *g="great", *n="good", *b="bad", *non="No archive";
	FILE *fhumour;
	if((fhumour=fopen("Humor", "r"))==NULL)
	{
		return non;
	}
	fgets(hum, CYFRY_HUMOR, fhumour);
	fclose(fhumour);
	i=atoi(hum);
	if(i==6 || i==5 || i==4 || i==3)
		return g;
	else if(i==2 || i==1 || i==0 || i==-1 || i==-2)
		return n;
	else if(i==-3 || i==-4 || i==-5 || i==-6)
		return b;
	else
		return non;
	return;
}

int dlugosc_zdania(char *zdanie)
{
	int i=0;
	while(*(zdanie+i)!='\n' && *(zdanie+i)!='\0')
	{
		i++;
	}
	return i;
}

int takie_same_zdanie(char *zdanie1, char *zdanie2)
{
	int i=0;
	while(*(zdanie1+i)==*(zdanie2+i) &&
		*(zdanie1+i)!='\n' &&
		*(zdanie1+i)!='\0'&&
		i<=MAX_ROZMOWA)
	{
		i++;
	}
	if(dlugosc_zdania(zdanie2)==i)
	{
		return 1;
	}
	return 0;
}

void jedna_linia(char *linia)
{
	int i=0;
	while(i<MAX_ROZMOWA && *(linia+i)!='\n')
	{
		i++;
	}
	if(i==MAX_ROZMOWA)
	{
		i--;
		*(linia+i-1)='\n';
		*(linia+i)='\0';
		return;
	}
	if(i==MAX_ROZMOWA-1)
	{
		*(linia+i-1)='\n';
		*(linia+i)='\0';
		return;
	}
	*(linia+i+1)='\0';
	return;
}

int rozmowa(void)
{
	int i=0;
	char rozmowa[MAX_ROZMOWA],
	     odpowiedz[MAX_ROZMOWA],
	     tak_nie[MAX_ROZMOWA];
	char *strz_rozmowa,
	     *strz_odpowiedz,
	     *strz_tak_nie;
	FILE *frozmowa;
	strz_rozmowa=rozmowa;
	strz_odpowiedz=odpowiedz;
	strz_tak_nie=tak_nie;
	fgets(strz_rozmowa, MAX_ROZMOWA, stdin);
	jedna_linia(strz_rozmowa);
	if((frozmowa=fopen(strz_rozmowa, "r"))==NULL)
	{
		puts("Sorry I don't know how to respond to you.");
		puts("Can you teach me the answer?");
		puts("I will remember it for the next time.");
		fgets(strz_tak_nie, MAX_ROZMOWA, stdin);
		jedna_linia(strz_tak_nie);
		if(takie_same_zdanie(strz_tak_nie, "yes"))
		{
			if((frozmowa=fopen(strz_rozmowa, "w"))==NULL)
			{
				puts("Sorry, my memory has failed.");
				return 0;
			}
			fgets(strz_odpowiedz, MAX_ROZMOWA, stdin);
			jedna_linia(strz_odpowiedz);
			fputs(strz_rozmowa, frozmowa);
			fputs(strz_odpowiedz, frozmowa);
			fclose(frozmowa);
			return 0;
		}
	}
	fgets(strz_odpowiedz, MAX_ROZMOWA, frozmowa);
	fgets(strz_odpowiedz, MAX_ROZMOWA, frozmowa);
	printf("%s", odpowiedz);
	fclose(frozmowa);
	return 0;
}

