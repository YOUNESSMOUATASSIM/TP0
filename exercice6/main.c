#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
int occurence(char* fichier, char c);

char majuscule(char c);

void copie_majuscule(char* fichier_src,char* fichier_dest);

int main()
{



char* path="H:\\TP_language_C\\exercice6\\texte.txt";

    char x;
    printf("donner un caractere a chercher :\n");
    scanf("%c",&x);

int rep=occurence(path,x);// appel de la fonction
     printf("le nombre d occurence de ' %c ' est de : %i\n",x,rep);


char cher;// le caratere a chercher son majuscule
printf(" \n saisie un caractere existe : ");

scanf("%s",&cher);

char majus=majuscule(cher);

      printf("%c",majus);

copie_majuscule(path,"H:\\TP_language_C\\exercice6\\fichier_dest.txt");






    return 0;

}

//__________________fonction occurence___________/


int occurence(char* fichier, char c){
int occu=0;
     FILE *fp;// declarer un  pointeur pour le fichier
    char str[50];
    char* filename = fichier;//  le chemain passer ici

    fp = fopen(filename, "r");// ouverture du fichier pour liser et  affectation du poiteur ' fp' pour pointer sur le premier element du fichier
    if (fp == NULL){
        printf(" le fichier ne ouvrir pas %s\n",filename);
        return 1;
    }
    while (fgets(str,50, fp) != NULL){

        for(int j=0;j<50;j++){
            if(*(str+j)==c)
                occu++;
        }


    }
printf("\n");
    fclose(fp);



 return occu;

}

//__________________fonction majuscule___________/
 inline char majuscule(char c){
     char b;
     int  i=(int)c;


     b=(char)toupper(i);


 return b;

 }

 //__________________fonction copie majuscule___________/

 void copie_majuscule(char* fichier_src,char* fichier_dest){
//_____________________lecture de fichier____________________________________________________________

     FILE *fp_r;// declarer un  pointeur pour le fichier
    char str[50];
    char* nom_fichier = fichier_src;//  le chemain passer ici

    fp_r = fopen(nom_fichier, "r");// ouverture du fichier pour liser et  affectation du poiteur ' fp_r' pour pointer sur le premier element du fichier
    if (fp_r == NULL){
        printf(" le fichier ne ouvrir pas %s\n",nom_fichier);

    }
    //int i;
    while (fgets(str,50, fp_r) != NULL);

    fclose(fp_r);



//________________ecriture dans le fichier_____________________________________________________________

FILE *fp_w;// declarer un pointeur pour le fichier

 nom_fichier = fichier_dest;//  le chemain passer ici


printf("\n");

  for(int i=0;i<50;i++){
    str[i]=majuscule(str[i]);
    }

fp_w = fopen(nom_fichier, "w");// ouverture du fichier pour ecriture

 fprintf(fp_w,"%s",str);

fclose(fp_w);

 printf("\n\t bien copie !  \n");


printf("\n");





 }
