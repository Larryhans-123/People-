#include <stdio.h>
int main()
{
	float units, fixedcharge= 15.00;
	float rate=0.20, taxRate=0.05;
	float energycharge, subtotal, tax, totalBill;
	printf("Enter electricity units consumed:");
	scanf("%f", & units);
	energycharge = units*rate;
	subtotal=fixedcharge+energycharge;
	tax=subtotal*taxRate;
	totalBill=subtotal+tax;
	printf("\n----- ELECTRICITY BILL-----\n");
	printf("Fixed Charge: %.2f\n", fixedcharge);
	printf("Energy Charge:%,2f\n", energycharge);
	printf("Subtotal: %.2f\n", subtotal);
	printf("tax (5%%): %.2f\n", tax);
	printf("Total BIll: %.2f\n", totalBill);
	return 0;
}
