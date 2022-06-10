#include<stdio.h>
int main()
{
    
    int a[3][3];
    int k=1;
    for(int j=0; j<=2; j++){
        for(int i=0; i<=2; i++){
            //k=k+1;
            if(i<j){
                a[i][j]=0;   
            }
            else{
                a[i][j]=k;
                k=k+1;
            }
            
           
        }
       
    }
    for(int l=0; l<3; l++){
        for(int m=0; m<3; m++){
            if(l>=m){
                printf("%d\t", a[l][m]);
            }
           
        }
        printf("\n");
    }
}