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
   printf("le montant a payer est:");
   printf("%f\n",change);
   
   //function to calculate the change 

   double cashValues[14] = {2000,1000,500,200,100,50,25,20,10,5,1,0.5,0.2,0.05};
   int amountOfCash[14] = {10,10,10,10,10,10,10,10,10,10,10,10,10,10};
   
    difference = change;
   while (difference != 0) {
	  int i; 
      for(i=0; i<14; i++) {
      	
         if(cashValues[i] <= difference) {
         	
              difference -= cashValues[i];
              printf("retourner une devise de:");
              printf("%f \n", cashValues[i]);
          }
      }
  }
    double cashValue[14];
    change=montant_client-montant_a_payer;
    while (change != 0) {
	  int i; 
      for(i=0; i<14; i++) {
      	
         if(cashValues[i] <= difference) {
         	
              difference -= cashValues[i];
           if(cashValue[i]=2000)
              {
              	amountOfCash[0] -=1;
			  }
			  else if(cashValue[i]=1000)
              {
              	amountOfCash[1] -=1;
			  }
			  else if(cashValue[i]=500)
              {
              	amountOfCash[2] -=1;
              }
              	else if(cashValue[i]=200)
              {
              	amountOfCash[3] -=1;
			  }
			  else if(cashValue[i]=100)
              {
              	amountOfCash[4] -=1;
			  }
			  else if(cashValue[i]=50)
              {
              	amountOfCash[5] -=1;
			  }
			  else if(cashValue[i]=25)
              {
              	amountOfCash[6] -=1;
			  }
			  else if(cashValue[i]=20)
              {
              	amountOfCash[7] -=1;
			  }
			  else if(cashValue[i]=10)
              {
              	amountOfCash[8] -=1;
			  }
			  int loop;
			  //loop=0;
			  if(loop <14)
			  {
			  printf("%d",amountOfCash[loop]);
			  loop++;
			  }
            
    }
}

}
}
	
 

  
    





    
    
   

