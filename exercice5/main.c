#include <stdio.h>
#include <stdlib.h>
#include<math.h>
//#include<string.h>
//#include<ctype.h>
//_______________ creation de la structure complexe_________//

struct complexe{
float reel;
float imaginaire;

};
//_________fonction creer______________/

struct complexe creer(float x, float y);


//_________fonction somme______________/
struct complexe somme(struct complexe z1, struct complexe z2);


//_________fonction difference______________/

struct complexe difference(struct complexe z1, struct complexe z2);


//_________fonction produit______________/
struct complexe produit(struct complexe z1, struct complexe z2);

//_________fonction afficher______________/

void afficher(struct complexe z);



//_________fonction module______________/
float module(struct complexe z);



//_________fonction conjugue______________/
void conjugue(struct complexe z);

int main(){
float reel,imaginaire;
float reel1,imaginaire1;

//------------ charger  les variable 'reel' et ' imaginaire ' avec les valeur saisie par le clavier ---//
   /* printf("donner un la partie reel :\n");
    scanf("%f",&reel);

    printf("\n donner la partie imaginaire :\n");
    scanf("%f",&imaginaire);*/

    // ---- appel de la fonction creer -----//
     //creer(reel,imaginaire);

     printf("/_______________Calcule sur les nombres complexe________________/\n");

     printf(" inserer le 1er complexe et respecter la forme x+iy \n");

     printf(" inserer la partie ' reel ' du complexe \n");
     scanf("%f",&reel);

     printf(" inserer la partie ' imaginaire ' du complexe \n");
     scanf("%f",&imaginaire);

     creer(reel,imaginaire);// appel

     printf(" inserer le 2eme complexe et respecter la forme x+iy \n");

     printf(" inserer la partie ' reel ' du complexe \n");
     scanf("%f",&reel1);

     printf(" inserer la partie ' imaginaire ' du complexe \n");
     scanf("%f",&imaginaire1);



     creer(reel1,imaginaire1);// 2 eme appel


    printf("\n___________________________________________________________________\n");

       afficher(creer(reel,imaginaire));// appel
       afficher(creer(reel1,imaginaire1));

    struct complexe s=somme(creer(reel,imaginaire),creer(reel1,imaginaire1));// instanciation et remplissage
        printf("\nla Somme est %2.2f+i%2.2f\n",s.reel,s.imaginaire);

    struct complexe d=difference(creer(reel,imaginaire),creer(reel1,imaginaire1));// instanciation et remplissage
        printf("\nla Difference  est %2.2f+i%2.2f\n",d.reel,d.imaginaire);



    struct complexe p=produit(creer(reel,imaginaire),creer(reel1,imaginaire1));// instanciation et remplissage
        printf("\nle Produit  est %2.2f+i%2.2f\n",p.reel,p.imaginaire);

          float mod=module(creer(reel,imaginaire));// instanciation et remplissage
        printf("\nle module du 1er complexe est :%2.2f\n",mod);

         mod=module(creer(reel1,imaginaire1));
        printf("\nle module du 2eme complexe est :%2.2f\n",mod);


   conjugue(creer(reel,imaginaire));
   conjugue(creer(reel1,imaginaire1));




    return 0;
}
//____________la fonction creer________________________//


struct complexe creer(float x, float y){
    struct complexe com;//__declarer la variable de type complexe
    com.reel=x;
    com.imaginaire=y;


return com;
}
//____________la fonction somme________________________//
struct complexe somme(struct complexe z1,struct complexe z2){
    struct complexe s;//___ou la somme va etre stocker

    //____la somme de chaqu une des parties ____/

    s.reel=(z1.reel)+(z2.reel);
    s.imaginaire=(z1.imaginaire)+(z2.imaginaire);

    return s;
}

//_________fonction defference______________/

struct complexe difference(struct complexe z1,struct complexe z2){
     struct complexe d;//___ou la defference va etre stocker

    //____la soustraction de chaqu une des parties ____/

    d.reel=(z1.reel)-(z2.reel);
    d.imaginaire=(z1.imaginaire)-(z2.imaginaire);

    return d;


}

  //_________fonction produit______________/

struct complexe produit(struct complexe z1,struct complexe z2){
   struct complexe p;//___ou le produit va etre stocker

    //____la multiplication de chaqu une des parties ____/

    p.reel=(z1.reel)*(z2.reel);
    p.imaginaire=(z1.imaginaire)*(z2.imaginaire);

    return p;


}


//____________la fonction afficher________________________//

void afficher(struct complexe z){
printf("\n z=%2.2f+i%2.2f\n",z.reel,z.imaginaire);

}

//_________fonction module________________________________/

float module(struct complexe z){
float mod;

mod=(float)pow((float)(pow(z.reel,2)+pow(z.imaginaire,2)),0.5);//_____calculer le module |z|

return mod;

}

//_________fonction conjugue______________/

void conjugue(struct complexe z){

    z.imaginaire= (z.imaginaire)*(-1);

printf("\nle conjuger du  complexe est %2.2f+i(%2.2f) :\n ",z.reel,z.imaginaire);

}

