/*Write a program that stores the monthly costs for the following expenses generated
from operating his or her automobile: loan payment, insurance, gas, oil, tires, and
maintenance. The program should then display the total monthly cost of these
expenses, and the total annual cost of these expenses. Your program should have
two functions named calcMonthlyExp() and calcYearlyExp().
Note: The calcMonthlyExp() will only calculate the monthly expenses and returns
the result. The calcYearlyExp() will get the result from calcMonthlyExp() and then
calculates the yearly expenses and returns the yearly expenses to main. Monthly
expenses should be displayed in calcMonthlyExp() function an yearly expenses
should be displayed in main function.
Note: Your main function should only call calcYearlyExp.*/

#include<stdio.h>
int monthly_expense(int loan_payment,int insurance,int gas,int oil,int tires,int maintenance)
{
	int var1;
	var1=loan_payment+insurance+gas+oil,tires,maintenance;
	return var1;
}
int yearly_expenses()
{
	int var2,loan_payment,insurance,gas,oil,tires,maintenance;
	loan_payment=30;
	insurance=10;
	gas=5;
	oil=5;
	tires=20;
	maintenance=10;
	var2=monthly_expense(loan_payment,insurance,gas,oil,tires,maintenance);
	printf("Monthly Expenses: %d",var2);
	var2=var2*12;
	return var2;
}
int main()
{
int var2=yearly_expenses();
printf("\nYearly Expenses: %d",var2);
return 0;
}