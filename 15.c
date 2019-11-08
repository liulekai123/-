#include<stdio.h>
#include<math.h>
int main(void)
{
    int min=1,sum=0,n,i,j,a,b;
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<n;i++) min=min*10;
    for(j=min;j<min*10;j++)
    {
        b=j;
        while(min>0)
        {
            a=j/min;
            sum=sum+pow(a,n);
            j=j%min;
            min=min/10;
        }
        if(sum==b) printf("%d",b);
    }
    return 0;
}