/*An electronics company sells circuit boards at 20% profit. Write a program that will
calculate the selling price of a circuit board that costs X R.s. Display the original price of
board and the selling price of board on the screen.*/

#include<stdio.h>
int main()
{
	float original_price,selling_price,profit;
	printf("Enter Original Price:");
	scanf("%f",&original_price);
	
	profit=20.0/100*original_price;
	
	selling_price=original_price+profit;
	
	printf("Original Price: %.3f\n",original_price);
	printf("selling_price: %.3f",selling_price);
	
	return 0;
}