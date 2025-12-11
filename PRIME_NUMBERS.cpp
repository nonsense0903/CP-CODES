#include<stdio.h>
#include<conio.h>
int main()
{
    int num, i;
    printf("Enter the number\n");
    scanf("%d",&num);
    i = 2;
    while(i <= num - 1)
    {
        if(num % i == 0)
        {
            printf("%d is not a Prime Number\n", num);
            return 0;
        }
        i++;
    }

    if(num == 1)
    {
        printf("1 is not a Prime Number\n");
    }
    else
    {
        printf("%d is a Prime Number\n", num);
    }

    return 0;
}