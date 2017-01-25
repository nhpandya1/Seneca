// Jason Kwan and 142633163 and Section R
#include	<stdio.h> //std input output
int main() {
	
	double inputMoney;
	int loonie;
	int quarter;
	
	printf("Please enter the amount to be paid: $ \n"); //prompt user for money
	scanf("%lf", &inputMoney);
	loonie = inputMoney;
	printf("Loonies required: %d, ", loonie);
	inputMoney = inputMoney - loonie;
	printf("balance owing $%.2lf \n", inputMoney);
   quarter = inputMoney / 0.25;
   printf("Quarters required: %d, ", quarter);
   inputMoney = inputMoney - (quarter * 0.25);
   printf("balance owing $%.2lf \n", inputMoney);

	return 0;
}
 


