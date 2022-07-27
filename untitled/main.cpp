/*
ID: nathan.31
PROG: prefix
LANG: C++
*/
#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;
/* maximum number of primitives */
#define MAXP 200
/* maximum length of a primitive */
#define MAXL 10

char prim[MAXP+1][MAXL+1]; /* primitives */
int nump;                  /* number of primitives */

int start[200001];         /* is this prefix of the sequence expressible? */
char data[200000];         /* the sequence */
int ndata;                 /* length of the sequence */
string convertToString(char* a, int size)
{
    string s(a);

    // we cannot use this technique again
    // to store something in s
    // because we use constructors
    // which are only called
    // when the string is declared.

    // Remove commented portion
    // to see for yourself

    /*
    char demo[] = "gfg";
    s(demo); // compilation error
    */

    return s;
}
int main(int argc, char **argv)
 {
  FILE *fout, *fin;
  int best;
  int lv, lv2, lv3;

  if ((fin = fopen("prefix.in", "r")) == NULL)
   {
    perror ("fopen fin");
   }
  if ((fout = fopen("prefix.out", "w")) == NULL)
   {
    perror ("fopen fout");
   }

  /* read in primitives */
  while (1)
   {
    fscanf (fin, "%s", prim[nump]);
    if (prim[nump][0] != '.') nump++;
    else break;
   }

  /* read in string, one line at a time */
  ndata = 0;
  cout << typeid(data).name();
  while (fscanf (fin, "%s", data+ndata) == 1)
    //ndata += size( convertToString(data, 200000) + to_string(ndata));

  start[0] = 1;
  best = 0;
  for (lv = 0; lv < ndata; lv++)
    if (start[lv])
     { /* for each expressible prefix */
      best = lv; /* we found a longer expressible prefix! */
      /* for each primitive, determine the sequence starting at
         this location matches it */
      for (lv2 = 0; lv2 < nump; lv2++)
       {
        for (lv3 = 0; lv + lv3 < ndata &&  prim[lv2][lv3] &&
	    prim[lv2][lv3] == data[lv+lv3]; lv3++)
          ;
	if (!prim[lv2][lv3])   /* it matched! */
	  start[lv + lv3] = 1; /* so the expanded prefix is also expressive */
       }
     }

  /* see if the entire sequence is expressible */
  if (start[ndata]) best = ndata;

  fprintf (fout, "%i\n", best);
  return 0;
 }