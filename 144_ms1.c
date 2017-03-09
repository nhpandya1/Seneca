#include <stdio.h>
// tools
void welcome(void);
void printTitle(void);
void printFooter(double gTotal);
void flushKeyboard(void);
void pause(void);
int getInt(void);
double getDouble(void);
int getIntLimited(int lowerLimit, int upperLimit);
double getDoubleLimited(double lowerLimit, double upperLimit);
// app interface
int yes(void);
void GroceryInventorySystem(void);
int menu(void);


// code your functions here:

void welcome(void) {
	printf("---=== Grocery Inventory System ===---");
}

void printTitle(void) {
	print("Row |SKU| Name               | Price  |Taxed| Qty | Min |    Total   |Atn");
	print("----+---+--------------------+--------+-----+-----+-----+------------|---");
}

void printFooter(double grandTotal) {
	printf("--------------------------------------------------------+----------------\n");
	if (grandTotal > 0) {
		printf("                                      Grand Total: | %12.2lf", grandTotal);
	}
}

void flushKeyboard(void) {
	while (getchar() != '\n') {
		getchar();
	}
}

void pause(void) {
	printf("Press <ENTER> to continue...");
	flushKeyboard();
}

int getInt(void) {
	int res;
	char NL = 'x';
	while (NL != '\n') {
		scanf("%d%c", &res, &NL);
		while (NL != '\n');
		flushKeyboard();
		printf("Invalid integer, please try again: ");
	}
	return res;
}

int getIntLimited(int lowerLimit, int upperLimit) {
	int lim = 0;
	do {
		lim = getInt();
		if (lim < lowerLimit || lim > upperLimit) {
			printf("Invalid value, %d < %d < %d", lowerLimit, lim, upperLimit);
		}
	} while (lim < lowerLimit || lim > upperLimit);
	return lim;
}

double getDouble(void) {
	double res;
	char NL;
	NL = 'y';
	while (NL != '\n') {
		scanf("%lf%c", &res, &NL);
		while (NL != '\n') {
			flushKeyboard();
			printf("Invalid number, please try again: ");
		}
	}
	return res;
}

double getDoubleLimited(double lowerLimit, double upperLimit) {
	double lim;
	do {
		lim = getDouble();
		if (lim < lowerLimit || lim > upperLimit) {
			printf("Invalid number, %.2lf < %.2lf < %.2lf", lowerLimit, lim, upperLimit);
		}
	} while (lim < lowerLimit || lim > upperLimit);

	return lim;

}

int yes(void) {
	char yes = 'x';
	char NL = 'x';
	int res;
	switch (yes) {
	case 'y':
	case 'Y':
		res = 1;
		flushKeyboard();
		break;
	case 'n':
	case'N':
		res = 0;
		flushKeyboard();
		break;
	default:
		printf("Only (Y)es or (N)o are acceptable: ");
		flushKeyboard();
	}
	return res;
}

int menu(void) {
	printf("1- List all items<\n");
	printf("2- Search by SKU\n");
	printf("3- Checkout an item\n");
	printf("4- Stock an item\n");
	printf("5- Add new item or update item\n");
	printf("6- delete item\n");
	printf("7- Search by name\n");
	printf("0- Exit program\n");
}

void GroceryInventorySystem(void) {
	int select;
	int Exit = 0;
	do {
		switch (select) {
		case 1:
			printf("List Items under construction!\n");
			break;
		case 2:
			printf("Search Items under construction!\n");
			break;
		case 3:
			printf("Checkout Item under construction!\n");
			break;
		case 4:
			printf("Stock Item under construction!\n");
			break;
		case 5:
			printf("Add/Update Item under construction!\n");
			break;
		case 6:
			printf("Delete Item under construction!\n");
			break;
		case 7:
			printf("Search by name under construction!\n");
			break;
		case 0:
			printf("Exit the program? (Y)es/(N)o: ");
			Exit = yes();
			break;
		}
	} while (Exit = 0);
}
