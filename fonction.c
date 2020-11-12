#include<stdio.h>
   
float tab[3];// declaration globale d'un tableau
// fonction permettant de saisir dans un tableau
void remplirTableau(int i){
        printf("donner la valeur N°%d\n",i+1);
        int test=scanf("%f",&tab[i]);
}
// fonction permettant d'afficher les elements du tableau
void afficherTableau(){
    printf("les valeur du tableau sont :\n");
    for ( int i = 0; i <=3; i++)
        printf("%f\t",tab[i]);
    printf("\n");
    }
// fonction permettant de determiner la valeur max du tableau
float determinerMaximun(){
    int indice=0;//initialisation de la variable par la premiere indice du tableau
    float valeurMax=tab[0];// initialisation de la variable par le premier element du tableau
    for (int i = 0; i <= 3; i++)//parcourir le tableau
    {
        for (int j = 1;  j<=3; j++)// parcourir le tableau tout en commencant par la deuxieme valeur du tab
        {
            if (tab[j]>tab[i] && tab[j]>valeurMax)// comparer les valeurs du tableau
                valeurMax=tab[j];// affecter le max dans la variable valeurMax
        }
    }
    return valeurMax;
}
//fonction permettant de determiner l'indice de la plus grande valeur
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

