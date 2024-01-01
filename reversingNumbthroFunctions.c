/*Write a program in C that contains a function to reverse a three-digit number.
● The function should take the number as parameter.
● The function should reverse the number and print the reversed no within the function.
Hint: Use modulus %
E.g.: 123 is your integer. Output: 321*/

#include<stdio.h>
int reverse(int num)
{
	int hundred=num/100;
	num=num%100;
	
	int ten=num/10;
	num=num%10;
	
	int num1=(num*100)+(ten*10)+hundred;
	return num1;
}
int main()
{
	int num=654;
	int output=reverse(num);
	printf("Reversed Number is: %d",output);
	
	int num2=321;
	int output2=reverse(num2);
	printf("\nReversed Number is: %d",output2);
	return 0;
}