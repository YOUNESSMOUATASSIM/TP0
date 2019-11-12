#include<stdio.h>
#include<stdlib.h>
int i=0;
void lire(float* notes, int n);
void afficher(float* notes, int n);
float maximum (float* notes, int n);
int indice_max(float* notes, int n);
int valide(float* notes, int n);
float moyenne(float* notes, int n);
int existe(float* notes, float x, int n);


int main(){
int nb_etd;//le nombre  d'etudiant


do{
    printf(" donner le nombre d'etudiant\n ");
    scanf("%i",&nb_etd);

}while(nb_etd<0 || nb_etd==0);// verifiant le nombre etudiant est il negative ou bien null


float notes[nb_etd];//declare la table des notes

 lire(notes,nb_etd);//_______appel de la fonction lire

 afficher(notes,nb_etd);//_______appel de la fonction afficher

 float max=maximum (notes,nb_etd);//_______appel de la fonction maximum

 //---------------------- affichage premier note des etudiants ----------------//

 printf("\n la premier note des etudiants est :%2.2f\n",max);

 int ind_max= indice_max(notes,nb_etd);

 //------------------- affichage l'indice du premier note  des etudiants ---------//

 printf("\n l'indice du premier note  des etudiants est :%i\n",ind_max);


int nb_et_valide=valide(notes,nb_etd);//appel de la fonction valide


//----------------affichage de nombre etudiant valider --------//

printf(" \n le nombre etudiant valider est :%i\n",nb_et_valide);

float moyen=moyenne(notes,nb_etd);//---appel de la fonction moyenne

//----------------affichage de la moyenne des notes --------//

printf("\n la moyenne des notes est :%2.2f\n",moyen);


//---------------la recherche du ' x '--------------//
float x=0;
printf("\n veuillez donner la note chercher dans la table :");
scanf("%f",&x);

int etat =existe(notes,x,nb_etd);//---appel de la fonction existe
if(etat==1)
printf("\n la note saisie est existe \n");
else
printf("\n la note saisie n'est existe pas \n");
return 0;
}

void lire(float* notes, int n){




         printf(" inserer les notes d'etudants \n");
//___________________ insertion des notes dans la table notes __________//

 for( i=0;i<n;){

    scanf("%f",notes+i);

// test la note saisie avant de l inserer dans la table
    if(*(notes+i)>=0 && *(notes+i)<=20){
      i++; // incrementer si la note saisir est valide
    }
 }


}

void afficher(float* notes, int n){
//__________ Afficher avec le formalisme tableau_______________//

    for(i=0;i<n;i++){
    printf("%2.2f\n",notes[i]);
 }
  printf("\n");

 //__________ Afficher avec le formalisme pointeur_______________//
 for(i=0;i<n;i++){
    printf("%2.2f\n",*(notes+i));
 }

}

float maximum (float* notes, int n){
float max;
max=*(notes);// donner le maximim la 1er valeur de la premier case du  table

//__________chercher le max dans la table
 for(i=1;i<n;i++){

    if(max<*(notes+i)){
      max=*(notes+i);
    }


 }
return max;
}

int indice_max(float* notes, int n){
float max=maximum (notes,n);// appel de la fonction maximum

int indice=0;
//_____ chercher dans la table la valeur = a max
for(i=0;i<n;i++){
    if(*(notes+i)==max){
        indice=i;//_________donner indice du max a variable indice
    }

}
return indice;


}
int valide(float* notes, int n){
int nb_valide=0;

for(i=0;i<n;i++){

    if(*(notes+i)>=10){
        nb_valide++;
    }
}

return nb_valide;
}

float moyenne(float* notes, int n){
float s=0;

for(i=0;i<n;i++){
s+=notes[i]; //--- la somme des notes de la table notes

}


return (float)s/n;//----renvoie la moyenne
}

int existe(float* notes, float x, int n){
for(i=0;i<n;i++){
if(x==*(notes+i)){
    return 1;
}


}
return 0;
}
