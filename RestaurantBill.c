/*Write a program that calculates the tax and tip on a restaurant bill for a customer with
a X$ meal charge.  The tax should be 4.75% of the meal cost.  The tip should be 10% of
the total after adding the tax.  Display the meal cost, tax amount, tip amount, and
total bill on the screen.*/

#include<stdio.h>
int main()
{
	float meal,tax,tip,total_bill;
	printf("Meal Cost:");
	scanf("%f",&meal);
	
	tax=(4.75/100)*meal;
	total_bill=meal+tax;
	tip=(10.0/100)*total_bill;
	total_bill=total_bill+tip;
	
	printf("\n\nMeal Cost: %.2f",meal);
	printf("\nTax Amount: %.2f",tax);
	printf("\nTip Amount: %.2f ",tip);
	printf("\nTotal Bill: %.2f",total_bill);
	
	return 0;
}