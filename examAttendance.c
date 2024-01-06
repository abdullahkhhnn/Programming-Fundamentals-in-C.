/*A university does not allow its student to sit in the exam if his/her attendance is less than 
80% in any course/lab.
Write a program to ask a student about total number of classes scheduled by
instructor during the whole semester and total number of classes he/she attended
during the whole semester. Now pass both integers to a function named
calculateAttendance (int classesAttended, int classesTotal) which should calculate,
display the attendance and print the decision if he/she is allowed to sit in the exam
or not.
Sample Output:
Enter total classes scheduled: 10
Enter total classes attended: 9
Your attendance is: 90%
You are allowed to sit in the exam*/
#include<stdio.h>
float calculate_attendance(float classes_attended, float classes_total){

 float total_attendance=(classes_attended/classes_total)*100.0;
 printf("Total Attendance %.f percent",total_attendance);
 if(total_attendance>=80)
 {
 printf("\nYou are allowed to sit in the class");
  }
  else if (total_attendance<80)
  {
printf("\nYou are not allowed to sit in the class");
   } 
}
   int main()
   {
   int total_attendance,classes_attended,classes_total;
   printf("Enter Total Classes:");
   scanf("%d",&classes_total);
   printf("Enter Classes Attended:");
   scanf("%d",&classes_attended);
  
   
   calculate_attendance(classes_attended,classes_total);
   return 0;
}