#include <stdio.h>
#include <stdlib.h>
int i=0;
long fact_iter(int n);//-------version iterative
long fact_rec(int n);//--------version recursive
int main()
{
    int n;
    printf("_______________Calcule de la factorielle_____________\n");
      printf("\ndonner un nombre : \n");
      scanf("%i",&n);
 //--------- test du version  iterative----------//
    long m=fact_iter(n);
    printf("la version iterative :\n");
    printf("\n%d!=%ld\n",n,m);

    //--------- test du version  recursive----------//
    m=fact_rec(n);
    printf("la version recursive :\n");
    printf("\n%d!=%ld\n",n,m);
    return 0;
}
long fact_iter(int n){
    long r=1;


for(i=(n-1);i>0;i--){
     r*=n*(n-i);
     n--;
}

return r;
}
long fact_rec(int n){
if(n==0 || n<0){
    return 1;
}else
return n*fact_rec(n-1);
}
