/*Write a program that reads A integer from user and outputs whether the number is
even or odd using if else.
Sample Output:
Enter an integer: 5
5 is an odd number
OR
Enter an integer: 12
12 is an even number*/

#include<stdio.h>
int main ()
{
	int integer;
	printf("Enter an Integer:");
	scanf("%d",&integer);
	
	if(integer%2==0)
	{
	printf("%d is an even number",integer);
	}
	else
	{
	printf("%d is an odd number",integer);
}
return 0;
}