#include<stdio.h>
#include<stdlib.h>
#define MAXBUF 80
#define OPARCH 1
#define NWARCH 0
#define OUTDIR 10
struct Numeric{
       float *Prev;
       float Number;
       float *Next;
};
struct Word{
       char **Prev;
       char String[MAXBUF];
       char **Next;
};
