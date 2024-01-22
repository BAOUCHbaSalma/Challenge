#include <stdio.h>
#include <stdbool.h>
#include <math.h>
/* int main()
{
    int i, nbr, somme = 0;

    while (i < 10)
    {
        printf("entrez le %d nums" ,i+1
        );
        scanf("%d", &nbr);
        if (nbr < 0)
            continue;

        i++;
        somme += nbr;


    }
     printf("la somme est %d", somme);
    return 0;
} */
/* #include<stdio.h>
int main(){
    int nbr ,s,inverse=0;
    printf("entrez un nombre");
         scanf("%d",&nbr);

    while(nbr>0){

        s=nbr%10;
        inverse=inverse*10+s;
        nbr=nbr/10;

    }
    printf("%d",inverse);

    return 0;
} */

/*
#include<stdio.h>
int main(){
    int i , j;
    float T[5][3];

    for(i =0 ; i<5 ; i++){
        for (j = 0 ; j<3 ; j++){
            printf("entrez notes\n ");
            scanf("%u\n",&T[i][j]);
        }
    }
    printf("les notes sont %f",T);
    return 0;
} */

/* #include<stdio.h>
void bonjour(char prenom[50]){
    printf("bonjour %s",prenom);

}
int main(){
    char n[50];
    printf("entrez votre nom");
    scanf("%s",n);
    bonjour(n);
    return 0;
} */
/*  */
/* #include<stdio.h>
int Max_2(int a, int b){
    int Max=a;
    if (Max<b)
        Max=b;
    return Max;
}
int MAX_4(int a ,int b, int c,int d ){

   int Max =a;

    if(c>Max_2(a , b))
        Max=c;
    if(d>Max_2(a , b))
    Max=d;

    return Max;
}

int main(){
    int a,b,c,d;
    printf("entrez les quatre nombre \n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
  printf("le max est :%d ",MAX_4(a,b,c,d));
    return 0;
}
 */
/* #include<stdio.h>
void permuter(int a, int b ){
    int c;
    c=a;
    a=b;
    b=c;
        printf("les valeurs de a %d et b %d  ",a,b);

}
int main(){
    int a,b;
    printf("donnez la valeur de a , b \n");
    scanf("%d%d",&a,&b);
   permuter(a,b);
    return 0;
} */
/*
int factorial(int n){
    int i;
    int res=1;
    for (i=2 ; i<=n;i++){
        res=res*i;

    }
    return res;

}
int main(){
    int nb;
    printf("entrez le nombre \n");
    scanf("%d",&nb);
 printf("le factorial est %d",factorial(nb));
 return 0;
} */

/* int addition(int a, int b){
    int add=0;
    add=a+b;
    return add;
}
int soustraction(int a, int b){
    int sous=0;
    sous=a-b;
    return sous;
}
int multiplication(int a , int b){
    int multi=0;
    multi=a*b;
    return multi;
}
int main (){
    int a , b , choix;
    printf("donner a et b \n");
    scanf("%d%d",&a,&b);
    printf("choisir votre operation \n");
    printf("Addition tappez 1 :\n");
    printf("Soustraction tappez 2 :\n");
    printf("Multiplication tappez 3 :\n");
    scanf("%d",&choix);

    switch (choix)
    {
    case 1:
        printf("l'addition de a et b c'est %d",addition(a,b));
        break;
    case 2:
        printf("Soustraction de a et b c'est %d",soustraction(a,b));
        break;
    case 3:
        printf("Multiplication  de a et b c'est %d",multiplication(a,b));
        break;

    default:
    printf("Choix invalide");
        break;
    }
    return 0;

} */

/*
 int Carre(int i){
   int s=0;
    s=pow(i,2);
    return s;
 }
  void Affiche_Carre(int T[5]){
    int i;
    for(i=0; i<5 ;i++){

    printf("le carre T[%d]=%d\n",i,Carre(T[i]));
    }
 }
 int main(){
   int i;

   int T[5];
   for (i=0; i<5;i++){
    printf("entrez les nombres :");
    scanf("%d",&T[i]);
   }
  Affiche_Carre(T);
   return 0;
 } */

/* int F[0];
int i;
int main (){
for (i=0 ; i<5;i++){
    printf("les numeros sont %s\n",F[0]);
    return 0;

}} */

/* #include <stdio.h>

/* void inserer(int T[], int taille, int N, int position)
{
    int i;
    if (position < 0 || position > taille)
    {
        printf("Position invalide!");
    }
    else
    {
        for (i = taille; i >= position; i--)
        {
            T[i] = T[i - 1];
        }
        T[position] = N;
        taille++;
        printf("Les elements apres l'insersion:\n");
        for (i = 0; i < taille; i++)
        {
            printf("tab[%d] = %d\n", i, T[i]);
        }
    }
}

int main()
{
    int i, N, taille, position;
    printf("Donner la taille du tableau: ");
    scanf("%d", &taille);
    int tab[taille];
    printf("Saisie les elements: \n");
    for (i = 0; i < taille; i++)
    {
        printf("Donner tab[%d] = ", i);
        scanf("%d", &tab[i]);
    }
    printf("Donner le nombre a inserer: \n");
    scanf("%d", &N);
    printf("Donner la position: \n");
    scanf("%d", &position);
    inserer(tab, taille, N, position);
}  */


/* void Trier(int U[]){
    int i, j;
    int C;
    for (i=0;i<6;i++){
        for (j=i+1;j<7;j++){
            if(U[i]>U[j]){
                C=U[i];
                U[i]=U[j];
                U[j]=C;
            }
        }
    }
   printf(" Les elements du tableaux avec ordre croissant est:\n");
    for (i = 0; i < 7; i++)
    {
        printf("%d\n",U[i]);
    }
    
}

int main(){
    int i;
    int U[7];
    for(i=0 ;i<7 ;i++){
        printf("entrez elements du tableaux \n");
        scanf("%d",&U[i]);        
    }
      Trier(U);
  
   return 0; 
}
 */
/* 
int Somme(int nbr){
    if(nbr==0 || nbr<0)
        printf("invalide");
    return nbr+Somme(nbr-1);
}

int main(){
    int f;
    printf("entrer un nombre: ");
    scanf("%d",&f);
    printf("la somme recursive est :%d",Somme(f));
    return 0;
}

 */
 


/*  void fusion(int T[], int g ,int m, int d){
    int i ,j,k;  
    int n1=m-g+1;
    int n2=d-m;
    int Tg[n1],Td[n2];
    for (i=0;i<n1;i++)
      Tg[i]=T[g+i];
    for (j=0;j<n2;j++)
    Td[j]=T[m+1+j];
    i=0;
    j=0; 
    k=g;
    while (i < n1 && j < n2)
    {
          if(Tg[i]<=Td[j]){
        T[k]=Tg[i];
        i++;
    }
    else{
           T[k]=Tg[j];
           j++;

    }
    k++;

    }
    while ((i<n1))
    {
        T[k]=Tg[i];
        i++;
        k++;
    }
     while ((i<n2))
    { 
        T[k]=Td[j];
        j++;
        k++;
    }
    
    
 
    

 } */


 #include <stdio.h>
#include <stdbool.h>

bool isValide(int X){
     while(X<=1){
       printf("entrer un nombre valide");
       scanf("%d",&X);

}
}
D
bool isPremier(int n){
   int sum=0;
   isValide(n);

           for(int i=1;i<n;i++){
               if(n%i==0){
               sum++;
            }
        }
        if(sum==1)
        return true;
        else
        return false;

}
int main(){
    int n;
    printf("entrer un nombre:");
    scanf("%d",&n);
    if(isPremier(n))
    {
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}