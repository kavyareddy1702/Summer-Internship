#include<stdio.h>
int main()
{
    int op, num1, num2;
    printf("-----C A L C U L A T O R-----\n");
    printf("Select operation\n");
    printf("1. Addition");
    printf("2. Subtration\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");    
    scanf("%d",&op);
    printf("Enter two numbers: \n");
    printf("Enter 1st number: \n");
    scanf("%d",&num1);
    printf("Enter 2nd number: \n");
    scanf("%d",&num2);
    switch(op){
        case 1: 
        printf("%d",(num1+num2));
        break;
        case 2: 
        printf("%d",(num1-num2));
        break;
        case 3: 
        printf("%d",(num1*num2));
        break;
        case 4:
        printf("%d",(num1/num2));
        break;
        case 5: 
        printf("%d",(num1%num2));
        break;
        default:
        printf("Invalid choice");
    }
}