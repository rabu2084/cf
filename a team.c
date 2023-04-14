#include<stdio.h>
int main()
{
    int n,p,v,t,count=0,sum=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d %d",&p,&v,&t);

        if(p==1) count++;
        if(v==1) count++;
        if(t==1) count++;

        if(count>=2)sum++;
        count=0;
    }
     printf("%d\n",sum);


    return 0;
}
