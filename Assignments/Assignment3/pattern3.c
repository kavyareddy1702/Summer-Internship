// 1  
// 2  3  
// 4  5  6  

#include<stdio.h>
int main(){
    int n=1;
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d  ",n);
            n++;
        }
        printf("\n");
    }
}
