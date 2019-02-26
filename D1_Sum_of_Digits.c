#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int num;
  scanf("%d",&num);
  int sum=0;
  while(num>0)
  {
    int d=num%10;
    sum+=d;
    num/=10;
   }
   printf("Sum of Number's Digit is:%d",sum);
   getch();
 }
