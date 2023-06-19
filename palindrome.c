#include<stdio.h>
#include<string.h>
void pacheck()
{
    char mes [20];
    char inmes [20];
    int i,j;
    scanf("%s", &mes);

    //Reversing message
    for(i=0;i<strlen(mes);i++)
    {
        inmes[i]=mes[strlen(mes)-1-i];
    }

    //Check if palindrome
    if(strcmp(inmes,mes)==0)
    {
        printf("%s is Palindrome",mes);
    }
    else
    {
        printf("%s is not Palindrome",mes);
    }
}


int main()
{
    pacheck();
    return 0;
}