#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float R,N,B ;
    char op ;
    printf(" ENTRER LE PREMIER NOMBRE \n ");
    scanf("%d",&N);
     printf(" ENTRER LE dexieme NOMBRE \n ");
     scanf("%d",&B);
     printf(" ENTRER L'operateur : \n ");
     scanf(" %c",&op);
     switch (op) {
         case'+' : R = N+B;
          break;
          case'-' : R = N-B;
         break;
          case'*' : R = N*B;
            break;
          case'/' :if (B!=0){
              R = N/B;}
              else {
                printf("l'operation est impossible ");}
                break;
           case'q' :
           printf("le programme est arreter ");
            break;



}
printf ("le resultas de cet operation est %f ",R);

           return 0;
}
