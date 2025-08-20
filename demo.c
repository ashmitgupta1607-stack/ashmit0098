#include<stdio.h>
int main()
{
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;
printf("enter the marks");
scanf("%d",&sub1);
scanf("%d",&sub2);
scanf("%d",&sub3);
scanf("%d",&sub4);
scanf("%d",&sub5);
int percentage;
percentage=sub1+sub2+sub3+sub4+sub5/5;

if ((percentage>85)&&(percentage<=75))
{
   printf("grade o");
}
if ((percentage>75)&&(percentage<=60))
{
  printf("grade A");
}
 if ((percentage>60)&&(percentage<=40))
 {
   printf("grade B");
 }
 
 if ((percentage>40)&&(percentage<=35))
 {
   printf("grade C");
 }
 
 if ((percentage>35)&&(percentage=35))
 {
   printf("grade D");
 }
 
   if ((percentage<35))
   {
   printf("grade F");
   }
  return 0;  
 }
  
