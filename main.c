#include<stdio.h>
#include "header.h"


int main(){
    float tab[3];
    int i,indice;
    for ( i = 0; i < 4; i++)
    {
        remplirTableau(i);
    }
    afficherTableau();
    printf("la valeur max est %f a la position %d\n ",determinerMaximun(),indiceMaximun());
    //printf("la valeur max est %d\n ",indiceMaximun());
    

}