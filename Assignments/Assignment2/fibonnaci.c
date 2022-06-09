// // 0 1 1 2 3 5 8 13 21
#include<stdio.h>
int main()
{
    int n, a=0, b=1,c;
    c = a+b;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    if(n==1){
      printf("0");
    }
    else if(n==2){
      printf("0, 1");
    }
    else{
      printf("Fibonacci sequence : %d, %d, ", a , b);
      for(int i=3; i<=n; i++){
        printf("%d, ",c);
        a = b;
        b = c;
        c = a+b;
      }
    }
    return 0;
}
