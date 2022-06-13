//wap to find largest and smallest word in a string
#include<stdio.h>
#include<string.h>
int main()
{
    char string[100], lar, small;
    int len;
    printf("\nEnter a string : ");
    //scanf("%s",&string);
    gets(string);
    len = strlen(string);
    lar = string[0];
    small = string[0];

    for(int i=0; i<len; i++){
        if(string[i]>lar){
            lar = string[i];
        }
        if(string[i]<small)
        {
            small = string[i];
        }
    }
    printf("\nThe largest character : %c\n", lar);

    printf("The smallest character : %c\n", small);
}