/*Write a program that converts seconds into minutes, hours and days and prints the result on
screen in HH:MM:SS format.
Eg: seconds = 5000
Output: 1 hour, 23 minutes and 20 seconds.*/


#include<stdio.h>
int main ()
{

int secs,hours,mins,days;

printf("Enter Seconds:");
scanf("%d",&secs);

days=secs/86400;
secs=secs%86400;

hours=secs/3600;
secs=secs%3600;

mins=secs/60;
secs=secs%60;

printf("%d Days: %d Hours: %d Minutes : %d Seconds",days,hours,mins,secs);

return 0;
}