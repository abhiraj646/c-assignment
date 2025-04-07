#include <stdio.h>
#include "abhiraj.h"
int main()
{
    int a;
    int temp;
    int p;
    printf("Enter A Number Is Palindrome Or Not ");

    scanf("%d", &a);
    if (palindrome(a) == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palidrome\n");
    }
    int n;
    int sum;
    int m = 1;
    int temp1;
    int n2 = n;
    int temp2;
    printf("Enter Number to Check Spy Number Or Not ");
    scanf("%d", &n);
    if (spynumber(n) == 1)
    {
        printf("Spy Number\n");
    }
    else
    {
        printf("Not Spy Number\n ");
        printf("Not Spy Number\n ");
        // printf("%d\n",sum);
        // printf("%d",m);
    }
    printf("Enter number to check even/odd :-\n");
    int b ;
    scanf("%d",&b);
    if(evenodd(b)==0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
}
