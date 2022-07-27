/*
ID: nathan.31
LANG: C++
TASK: agrinet
*/#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define MAXFARM	100

int nfarm;
int dist[MAXFARM][MAXFARM];
int isconn[MAXFARM];

int
main(void)
{
    FILE *fin, *fout;
    int i, j, nfarm, nnode, mindist, minnode, total;

    fin = fopen("agrinet.in", "r");
    fout = fopen("agrinet.out", "w");
    assert(fin != NULL && fout != NULL);

    fscanf(fin, "%d", &nfarm);
    for(i=0; i<nfarm; i++)
    for(j=0; j<nfarm; j++)
	fscanf(fin, "%d", &dist[i][j]);

    total = 0;
    isconn[0] = 1;
    nnode = 1;
    for(isconn[0]=1, nnode=1; nnode < nfarm; nnode++) {
	mindist = 0;
	for(i=0; i<nfarm; i++)
	for(j=0; j<nfarm; j++) {
	    if(dist[i][j] && isconn[i] && !isconn[j]) {
	    	if(mindist == 0 || dist[i][j] < mindist) {
		    mindist = dist[i][j];
		    minnode = j;
		}
	    }
	}
	assert(mindist != 0);

	isconn[minnode] = 1;
	total += mindist;
    }

    fprintf(fout, "%d\n", total);

    return 0;
}
