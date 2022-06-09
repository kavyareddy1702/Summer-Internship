// 153
// 1^3+5^3+4^3
#include<stdio.h>
#include<math.h>
int main(){
    int n,p=0,temp,rem,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp = n;
    while(temp!=0){
        temp=temp/10;
        ++p;
    }
    temp = n;
    while(temp>0){
        rem = temp%10;
        sum = sum + pow(rem,p);
        temp = temp/10;
    }
    if(n == sum)
    {
        printf("Number is Armstrong");
    }
    else{
        printf("Number is not armstrong");
    }
    return 0;
}
