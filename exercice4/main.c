#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void palindrome (char* CH);
void palindrome_rec (char * CH);
int main()
{
    char CH[50];
printf("donner  un palindrome :\n");
gets(CH);
strcpy(CH,strlwr(CH)); //-----put string in lowercase to compare correctly


palindrome(CH);//-----appel de la version itérative


palindrome_rec (CH);//-----appel de la version récursive



    return 0;
}

void palindrome(char* CH){

printf("\n la version iterative :\n");

    char tab[50]={};//---table comparative vide

    int j=0,i=0;
    int comp=0;// compteur


    //-------------- inverser la table CH[] dans la table tab[] ----//
for(i=strlen(CH)-1;i>=0;i--){
    tab[j]=(char)CH[i];
    j++;
}

   //---------------- comparer elements par elements de chaque table de tab[] par charque un de CH[]----//
for(i=0;i<strlen(tab)-1;i++){
    if(tab[i]==CH[i]){
        comp++;
    }
}
//printf("\n strlen(CH)-1 %i",strlen(CH)-1);
//printf("\n strlen(tab)-1 %i",strlen(tab)-1);
//printf("\n comp %i",comp);

//--------- test sur comp --------------//
if(comp==strlen(tab)-1){
    printf("\n oui c'est un palindrome\n");
}else
  printf("\n no ce n'est pas un palindrome\n");
}




void palindrome_rec (char * CH){

printf("\n la version  recursive :\n");
    strcpy(CH,strlwr(CH));//-----put string in lowercase to compare correctly

      char tab2[50]={};//---table comparative vide

    int j=0,i=0;
    int comp=0;// compteur


    //-------------- inverser la table CH[] dans la table tab2[] ----//
for(i=strlen(CH)-1;i>=0;i--){
    tab2[j]=(char)CH[i];
    j++;
}


   //---------------- comparer elements par elements de chaque table de tab2[] par charque un de CH[]----//
for(i=0;i<strlen(tab2)-1;i++){
    if(tab2[i]==CH[i]){
        comp++;
    }
}


//--------- test sur comp --------------//
if(comp==strlen(tab2)-1){
    printf("\n oui c'est un palindrome\n");

}else
  printf("\n no ce n'est pas un palindrome\n");

  printf("\n donner un autre palindrome valide :\n");
  gets(CH);

    palindrome_rec (CH);//---appel de la fonction recursive


}
