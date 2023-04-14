#include<stdio.h>
#include<stdio.h>
int main()
{
    char str[100];
    int i=0,len=0,n;
    scanf("%d",&n);

   while(n--){
        scanf("%s",&str);

    while(str[i]!='\0') {
    i++;
    len++;     }

    if(len>10)
        printf("%c%d%c\n",str[0],len-2,str[i-1]);
    else
        printf("%s\n",str);

        i=0;
        len=0;
                    }



   return 0;

}
