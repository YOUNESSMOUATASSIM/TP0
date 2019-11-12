#include <stdio.h>
#include <stdlib.h>

int main()
{
    // ------------------ la saisie  de la taille  du tableau ----------------------//
    int N;
    printf("\t ----- donner moi la taille de la table -----  \n");
    scanf("%i",&N);

int tab[N];
int i=0;
  // ------------------ le remplissage du tableau ---------------------//
for(i=0;i<N;i++){

    printf("donner moi la valeur %i :\n",i+1);
    scanf("%i",&tab[i]);


}
  // ------------------ la affichage des elements  du tableau  ----------------------//
int somme=0;
for( i=0;i<N;i++){

    printf("la case %i = %i \n",i,tab[i]);
     somme+=tab[i];
    }

  // ------------------ la affichage   de la somme  des elements de tableau ----------------------//
    printf("\nla somme de la table est  =%i \n",somme);


}

