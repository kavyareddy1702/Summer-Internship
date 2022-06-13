// wap in c to print individual characters of a string in reverse order
#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    int l, r, len,temp;
    printf("\nEnter a string : ");
    gets(string);
    //scanf("%s",&string);
    len=strlen(string);
    l = 0;
    r = len-1;
    for(int i=l; i<r; i++){
        temp = string[i];
        string[i] = string[r];
        string[r] = temp;
        r--;
    }
    printf("String in reverse order : %s\n",string);
    
    
}