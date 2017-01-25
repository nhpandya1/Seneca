// Jason Kwan and 142633163 and Section R
#include	<stdio.h> //std input output
int main() {
	
	double inputMoney;
   const double gst = 0.13;
	int loonie;
	int quarter;
   int dimes;
   int nickels;
   int pennies;

	
	printf("Please enter the amount to be paid: $ "); //prompt user for money
   scanf("%lf", &inputMoney);
   printf("GST: 1.13\n");
   inputMoney = inputMoney * gst + inputMoney + 0.005;
   printf("Balance owing: $%.2lf\n", inputMoney);

	loonie = inputMoney; // casting loonie to truncate and find how many are needed
	printf("Loonies required: %d, ", loonie);
	inputMoney = inputMoney - loonie;
	printf("balance owing $%.2lf \n", inputMoney);

   quarter = inputMoney / 0.25; //cast for quarters
   printf("Quarters required: %d, ", quarter);
   inputMoney = inputMoney - (quarter * 0.25);
   printf("balance owing $%.2lf \n", inputMoney);

   dimes = inputMoney / 0.10; //cast
   printf("Dimes required: %d, ", dimes);
   inputMoney = inputMoney - (dimes * 0.10);
   printf("balance owing $%.2lf \n", inputMoney);

   nickels = inputMoney / 0.05; //cast
   printf("Nickels required: %d, ", nickels);
   inputMoney = inputMoney - (nickels * 0.05);
   printf("balance owing $%.2lf \n", inputMoney);

   pennies = inputMoney / 0.01;
   printf("Pennies required: %d, ", pennies);
   inputMoney = inputMoney - (pennies * 0.01);
   printf("balance owing $%.2lf \n", inputMoney);



	return 0;
}
 


