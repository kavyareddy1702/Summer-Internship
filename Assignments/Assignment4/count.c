//wap to count total number of alphabets digits and special characters in a string

#include<stdio.h>
#include<string.h>
int main()
{
    char string[10];
    int alpha=0, digits=0, specialchar=0,len;
    printf("\nEnter a string : ");
    gets(string);
    len = strlen(string);
    for(int i=0; i<len; i++)
    {
        if((string[i]>=65 && string[i]<=90) || (string[i]>=97 && string[i]<=122))
        {
            alpha++;
        }
        else if(string[i]>=48 && string[i]<=57)
        {
            digits++;
        }
        else{
            specialchar++;
        }
    }
    printf("\nNo. of alphabets are : %d\n",alpha);
    printf("No. of digits are : %d\n",digits);
    printf("No. of special characters are : %d\n",specialchar);

}
//65 90 97 122
//48 57