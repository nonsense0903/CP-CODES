#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
float sum, average;
char d;
char str[30];
printf("Enter first Integer");
scanf("%d",&a);
printf("Enter second integer");
scanf("%d",&b);
printf("Enter third integer");
scanf("%d",&c);
printf("\nEnter the character");
getchar();
d=getchar();
printf("\nEnter the string");
scanf("%s",str);
sum=a+b+c;
average=(float)sum/3;
printf("\nSum of three integers %2f", sum);
printf("\nAverage of three integers %2f", average);
printf("\nSingle character");
printf("\nString of character is");
putchar(d);
puts(str);
return 0;
}