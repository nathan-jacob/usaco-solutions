#include < unistd.h >
#include < stdlib.h >
#include < stdio.h >

#include "LASAalloc.h"

int main(int argc, char *argv[])
{
    char *array;
    int i;

    /*
     * must be first call in the program
     */
    LASAalloc lasa;

    array = lasa.lalloc(10);
    if(array == NULL)
    {
        fprintf(stderr,"call to lasa.lalloc() failed\n");
        fflush(stderr);
        exit(1);
    }

    for(i=0; i < 9; i++)
    {
        array[i] = 'a' + i;
    }
    array[9] = 0;

    printf("here is my nifty new string: %s\n",array);

    lasa.lfree(array);

    return(0);
}
