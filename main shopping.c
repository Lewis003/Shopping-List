//Shopping List 


#include <stdio.h>

void main (void)  {
	int number, pieces;
	float price, amt, totalAmt, cash, change;
	char addAnother;
	

	//do-while loop -> post-test
	//while loop    -> pre-test
	//for loop      -> pre-test
	
	do {
	printf("====================\n");
	printf("COMRADE SHOPPING LIST\n");
	printf("====================\n\n");
	printf("[1] Maize Flour\t\t  =KES 200.00\n");
	printf("[2] Sugar\t\t  =KES 150.00\n");
	printf("[3] Cooking oil\t\t =KES 400.00\n");
	printf("[4] Lentils\t\t =KES 300.00\n");
	printf("[5] Soap\t\t  =KES 150.00\n");
	
	printf("\nEnter Number\t : ");
	scanf("%d", &number );
	printf("\nEnter Number of pieces\t: ");
	scanf("%d", &pieces);
	
	switch(number) {
		case 1: price = 200.00;
		break;
		case 2: price = 150.00;
		break;
		case 3: price = 400.00;
		break;
		case 4: price = 300.00;
		break;
		case 5: price = 150.00;
		break;
		
	}
    amt = price * pieces;  
    printf("\nAmount\t\t: %.2f", amt);
    
    totalAmt = totalAmt + amt;
    printf("\nTotal Amount\t: %.2f", totalAmt);
    
    printf("\nAdd another item(y/n)? ");
    addAnother = getche();
  }while(addAnother == 'y'  || addAnother == 'Y');
  
  do{
  	  printf("\nCash Paid\t: ");
      scanf("%f", &cash);   
  }while(cash < totalAmt);
 

  
  change = cash - totalAmt;
  printf("\nChange\t\t: %.2f", change);    
printf("\n\nThank you! Come Again!");
	
}

