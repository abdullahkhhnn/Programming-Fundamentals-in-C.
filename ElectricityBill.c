/*Alice received her electricity bill for the month of October. The previous electricity units
of Alice bill were X units and the present units were Y units. The X or previous units is
the cumulative units for the month September and all previous months. Similarly, Y or
present units is the cumulative units consumed in October plus all previous months
(September, August, ……...). Calculate the units consumed in the month of October and
also calculate the total bill. Your program should print the units consumed in October
and the total bill for October.
1 unit price= 5 Rs.*/

#include<stdio.h>
int main()
{
	float prev_units,current_units,oct_units,total_bill;
	printf("Enter Current Units:");
	scanf("%f",&current_units);
	printf("Enter Previous Units:");
	scanf("%f",&prev_units);
	
	oct_units=current_units-prev_units;
	total_bill=oct_units*5;
	
	printf("Units used in October: %f",oct_units);
	printf("\nTotal Bill: %f",total_bill);
	
	return 0;
}