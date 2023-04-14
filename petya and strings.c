#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    scanf("%s %s",&s1,&s2);{
     strlwr (s1);
     strlwr (s2);

     if(s1==s2)
     {printf("0");}
     if(s1<s2)
     {printf("-1");}
     if(s1>s2)
     {printf("1");}


    }





    return 0;
}
