/*Write a program that reads the age of three people and outputs the eldest among them.
Sample Output:
Enter the age of Amir: 20
Enter the age of Ali: 23
Enter the age of Haider: 18
Eldest: Ali
Note:
● The program should read the three ages in main from user.
● Create a function that will take three ages as arguments.
● The function will calculate who’s the eldest and prints the result within the
function.*/

#include<stdio.h>
int age(int Age1,int Age2,int Age3){
if (Age1>Age2)
	{
	if (Age1>Age3)
	{
	printf("Abdullah is Eldest");
	}
	else 
	printf("Misbah is Eldest");
}
else if (Age2>Age3)
{
printf("Zowrain is Eldest");
}
else
{
printf("Misbah is Eldest");
}
}
int main ()
{
	int Age1,Age2,Age3;
	printf("Enter Abdullah Age:");
	scanf("%d",&Age1);
	printf("Enter Zowrain Age:");
	scanf("%d",&Age2);
	printf("Enter Misbah Age:");
	scanf("%d",&Age3);
	age(Age1,Age2,Age3);
	return 0;
}
