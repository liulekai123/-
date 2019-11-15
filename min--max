#include<stdio.h>
int main(void)
{
    int i,k,n,min,b;
    printf("n=");
    scanf("%d",&n);
    int a[n];
    printf("put %d figures:",n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(k=0;k<n-1;k++)
    {
        min=k;
        for(i=k+1;i<n;i++)
        {
            if(a[i]<a[min]) min=i;
        }
            b=a[min];
            a[min]=a[k];
            a[k]=b;
    }
    printf("min--max:");
    for(i=0;i<n;i++) printf("%2d",a[i]);
    return 0;
}
