//  *
// * *
//* * *

// #include<stdio.h>
// int main(){

//     int n,r,c;
//     printf("Enter number of rows : ");
//     scanf("%d",&n);
//     int sp=n/2, st=1;
//     for(int r=1; r<=n; r++){
//         for(int i=1; i<=sp; i++){
//             printf("\t");
//         }
//         for(int j=1; j<=st; j++){
//             printf("*\t");
//         }
//         sp--;
//         st++;
//         printf("\n");
//     }
// }

#include <stdio.h>
int main() {
	int i,j,k,t=0,n=3;
	for (i=1; i<=n; i++) {
		for (k=t; k<n; k++) {
			printf(" ");
		}
		for (j=0; j< i; j++) {
			printf(" * ");
			t = t + 1;
		}
		printf("\n");
	}
    return 0;
}
