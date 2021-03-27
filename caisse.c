#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    double random_value;

    srand ( time ( NULL));

    random_value = (double)rand()/RAND_MAX*2000.0-1.0;//float in range 2000 to 1

    printf ( "%f\n", random_value);

    return 0;
    
   double billet[]={2000,1000,500,200,100,50,25,20,10,5,1,0.5,0.2,0.05};
   int montant_client;
   scanf("%d", &montant_client);
   if(montant_client<random_value)
   {
   	scanf( "Le montant inserer est inferieure au montant a payer, veuillez reinserer le montant svp",montant_client );
   }
    
}