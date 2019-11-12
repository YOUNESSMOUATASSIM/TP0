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
  // ------------------ la saisie de la valeur chercher  ----------------------//
int etat=1;// def l existance du val dans la table  si existe etat=1 sinon etat=0
int val=0;
      printf("donner un nombre a chercher dans le tableau : \n");
      scanf("%i",&val);

      // ------------------ la recherche de la valeur de val dans le tableau   ----------------------//
for( i=0;i<N;i++){
        if(tab[i]==val){
                etat=1;
             printf("la valeur %i saisie est existe dans la table dans la case: %i\n",val,i);
              break;
        }
        if(tab[i]!=val)
        {
               etat=0;
        }

    }
if(etat==0){
          printf("la valeur %i saisie est n' existe pas dans la table \n",val);

}


}

