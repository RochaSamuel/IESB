#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    FILE *arq;

    arq = fopen("arquivo2.txt", "a");

    int a[60];
    int b[60];

    for(i = 38; i <= 98; i++){
        a[i] = i;
        b[i] = i;
    }

    for(i = 38; i <= 98; i++)
    for(j = 38; j <= 98; j++)
    if(i != j){
        fprintf(arq,"%d,%d,%d\n", a[i], b[j], b[j]);
    }


    fclose(arq);
    return 0;
}
