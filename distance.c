/*Ali and Haider are two cyclists. Ali covers a distance of X km in Y hours and Z minutes.
While Haider covers a distance of A km in B hours and C minutes. Write a program
that calculates the speed of two cyclists and prints the speed of both players in m/sec.*/

#include<stdio.h>
int main()
{
	float ali_distance,h1,m1,speed1,speed2,ali_time,haider_distance,h2,m2,haider_time;
	printf("Enter Ali Distance in Kilometre:");
	scanf("%f",&ali_distance);
	printf("Enter Ali Time in Hours:");
	scanf("%f",&h1);
	printf("Enter Ali Time in Minutes:");
	scanf("%f",&m1);
	printf("Enter Haider Distance in Kilometre:");
	scanf("%f",&haider_distance);
	printf("Enter Haider Time in Hours:");
	scanf("%f",&h2);
	printf("Enter Haider Time in Minutes:");
	scanf("%f",&m2);
	
	ali_distance=ali_distance*1000;
	ali_time=(h1*3600)+(m1*60);
	speed1=ali_distance/ali_time;
	
	haider_distance=haider_distance*1000;
	haider_time=(h2*3600)+(m2*60);
	speed2=haider_distance/haider_time;
	
	
	printf("Ali Speed in m/s: %.2f",speed1);
	printf("\nHaider Speed in m/s: %.2f",speed2);
	
	return 0;	
}