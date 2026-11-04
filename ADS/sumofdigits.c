#include<stdio.h>
int main()
{ 
 int n,temp;
 int d=0;
 int sum=0;
 printf("Enter a number: ");
 scanf("%d",&n);
 temp=n;
 while(temp>0)
{
  d=temp%10;
  sum=sum+d;
  temp=temp/10;
 }
printf("Sum=%d",sum);
return 0;
} 
