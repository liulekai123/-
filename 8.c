#include<stdio.h>
int main(void)
{
    int a,b,c,n;
    printf("n=");
    scanf("%d",&n);
    for(a=0;a<=1;a++)
        for(b=0;b<5;b++)
            for(c=0;c<10;c++)
                if(5*a+2*b+c==n) printf("5--%d,2--%d,1--%d\n",a,b,c);
    printf("%d",a+b+c);
    return 0;
}