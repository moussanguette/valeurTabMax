#include<stdio.h>
    
static float tab[3];
void remplirTableau(int i){
    printf("donner la valeur N°%d\n",i+1);
    scanf("%f",&tab[i]);
}

void afficherTableau(){
    printf("les valeur du tableau sont :\n");
    for ( int i = 0; i <=3; i++)
        printf("%f\t",tab[i]);
    printf("\n");
    }

float determinerMaximun(){
    float valeurMax=tab[0];
    int indice=0;
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 1;  j<=3; j++)
        {
            if (tab[j]>tab[i] && tab[j]>valeurMax)
                valeurMax=tab[j];
        }
    }
    return valeurMax;
}
int indiceMaximun(){
    float valeurMax=tab[0];
    int indice=0;
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 1;  j<=3; j++)
        {
            if (tab[j]>tab[i] && tab[j]>valeurMax)
                indice=j;
        }
    }
    return indice;
}

