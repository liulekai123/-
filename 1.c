#include<stdio.h>
#include<math.h>
int main(void)
{
    int min=1,sum=0,n,i,item;
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<n;i++)min=min*10;
    int e=min*10;
    for(i=min;i<e;i++)
    {
        int b,c;
        b=c=i;
        min=e/10;
        sum=0;
        while(min>0)
        {
            item=c/min;
            sum=sum+pow(item,n);
            c=c%min;
            min=min/10;
        }
        if(sum==b)printf("%d\n",b);
    }
    return 0;
} 