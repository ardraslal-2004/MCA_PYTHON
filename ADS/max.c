#include<stdio.h>
int main()
{ 
int a,b,c;
printf("Enter three numbers: ");
scanf("%d %d %d", &a, &b, &c);
if (a>b && a>c)
 printf("%d is the maximum",a);
if (a>b && a>c)
 printf("%d is the maximum",b);
else
 printf("%d is the maximum",c);
return 0;
}  
