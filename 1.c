#include<stdio.h>

int main(void)
{
    int a,b,c,max=0;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    if(a>b)
        if(a>c) max=a;
        else max=c;
    else
        if(b>c) max=b;
        else max=c;
    printf("max=%d",max);
        
    
    return 0;
}
