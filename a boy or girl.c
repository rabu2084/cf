#include<stdio.h>
int main()
{
    char s[100];
    int i=0,len=0;

        scanf("%s",&s);

    while(s[i]!='\0'){
        len++;
        i++;
    }
    if(len%2==0)
        printf("CHAT WITH HER !");

    else
        printf("IGNORE HIM !");



    return 0;
}
