#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	double change;
    double montant_a_payer;
    //int cashValues;
    double difference;

    srand ( time ( NULL));

    montant_a_payer = (double)rand()/RAND_MAX*2000;//float in range 2000 to 1;
    printf("Le montant a payez est:");

    printf ( "%f\n", montant_a_payer);

    
   int montant_client;
   printf("veuillez inserer le montant pour payer svp:");
   scanf("%d", &montant_client);
   change=montant_client-montant_a_payer;
   if(change<0)
   {
   	printf( "Le montant inserer est inferieure au montant a payer, veuillez reinserer le montant svp:");
   	scanf("%d",&montant_client );
   	
   	
   }
   change=montant_client-montant_a_payer;
   printf("%f\n",change);
   
   //function to calculate the change 
   double cashValues[14] = {2000,1000,500,200,100,50,25,20,10,5,1,0.5,0.2,0.05};
   
   difference = change;
   while (difference != 0) {
	  int i; 
      for(i=0; i<14; i++) {
         if(cashValues[i] <= difference) {
              difference -= cashValues[i];
              printf("%f \n", cashValues[i]);
              i=0;
         }
    }
}
   
    
    
   return 0 ;
}