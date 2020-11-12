#include<stdio.h>
#include "header.h"


int main(){
    float tab[3];
    int i,indice;
    for ( i = 0; i < 4; i++)
    {
        remplirTableau(i);//appel de la fonction remplirTableau
    }
    afficherTableau();//appel de la fonction afficherTableau
    printf("la valeur max est %f a la position %d\n ",determinerMaximun(),indiceMaximun());
    

}