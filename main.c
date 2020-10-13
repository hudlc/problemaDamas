#include "header.h"

int main()
{
    int tab[TAM][TAM];

    int i,j,contr=1;
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            tab[i][j]=0;
        }
    }


    tab[4][5]=1;
    tab[5][3]=1;


    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            printf("%d,",tab[i][j]);
        }
        printf("\n");
    }

    if(confLin(tab)||confCol(tab)||diago1(tab)||diago2(tab)){printf("MATRIZ INVALIDA!\n");}
    else{printf("MATRIZ CERTA!\n");}


    return 0;
}
