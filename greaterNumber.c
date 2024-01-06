/*Write a program that reads two integers from user and outputs the largest one using if else.
Sample Output:
Enter first integer x: 5
Enter second integer y: 10
Second integer 10 is greater than first integer 5*/

#include<stdio.h>
int main ()
{
	int num1,num2;
	printf("Enter Number 1:");
	scanf("%d",&num1);
	printf("Enter Number 2:");
	scanf("%d",&num2);
	
	if (num1>num2)
	printf("Number 1 is Greater");
	
	else if (num1<num2)
	printf("Number 2 is Greater");
	
	else if (num1=num2)
	printf("The Numbers are equal");
	return 0;
}
