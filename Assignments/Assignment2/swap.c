#include<stdio.h>
int main()
{
    int num1, num2,temp;
    printf("Enter the 1st number : ");
    scanf("%d",&num1);
    printf("Enter the 2nd number : ");
    scanf("%d",&num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\n1st number is : %d",num1);
    printf("\n2nd number is : %d",num2);
    
    
}