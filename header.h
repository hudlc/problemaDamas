#include <stdio.h>
#include <stdlib.h>
#define TAM 8

//tab[linha][coluna]

int confLin (int mtx[TAM][TAM])
{

    int i,j,cont=0;

    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            if(mtx[i][j]!=0){cont++;}
        }
        if(cont>1){return 1;}
        cont = 0;
    }

    return 0;
}

int confCol(int mtx[TAM][TAM])
{

    int i,j,cont=0;

    for(j=0;j<TAM;j++){
        for(i=0;i<TAM;i++){
            if(mtx[i][j]!=0){cont++;}
        }
        if(cont>1){return 1;}
        cont = 0;
    }

    return 0;
}



int diago1(int mtx[TAM][TAM])
{
    int i,j,cont=0;

   for(i=0;i<TAM;i++){
        j=0;
        while(j+i<TAM)
        {
            if(mtx[j][j+i]!=0){cont++;}
            j++;
        }
        if(cont>1){return 1;}
        cont=0;
    }

        for(i=1;i<TAM;i++){
        j=0;
        while(j+i<TAM)
        {
            if(mtx[j+i][j] !=0){cont++;}
            j++;
        }
        if(cont>1){return 1;}
        cont=0;
    }

    return 0;
}

int diago2(int mtx[TAM][TAM])
{
    int i,j,cont=0;
    for(i=TAM;i>=0;i--){
        j=0;

        while(i-j>=0&&j<TAM)
        {
            if(mtx[j][i-j] != 0){cont++;}
            j++;
        }
        if(cont>1){printf("\ncaso1\n"); return 1;}
        cont = 0;
    }

    for(i=TAM;i>=0;i--){
        j=1;

        while(TAM-i+j<TAM)
        {
            if(mtx[TAM-i+j][TAM-j] != 0){cont++;};
            j++;

        }
        if(cont>1){printf("\ncaso2\n"); return 1;}
        cont = 0;
    }
    return 0;
}

