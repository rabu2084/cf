#include<stdio.h>
#include<string.h>
int main()
{
   char s[100];
   int i=0;
   scanf("%s",&s);
   strlwr(s);
   while(s[i]!='\0' ){
     if(s[i]=='a'&&'e'&&'i'&&'o'&&'u')
        continue;
    printf(".%c",s[i]);
    i++;
   }

   return 0;

main();

}
