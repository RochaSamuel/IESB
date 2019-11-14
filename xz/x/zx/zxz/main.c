#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    FILE *arq;

    arq = fopen("arquivo.txt", "a");

    int a[38];
    int b[38];

    for(i = 0; i <= 37; i++){
        a[i] = i;
        b[i] = i;
    }

    for(i = 0; i <= 37; i++)
    for(j = 0; j <= 37; j++)
        fprintf(arq,"%d,%d,%d\n", a[i], b[j], b[j]);

    fclose(arq);
    return 0;
}
