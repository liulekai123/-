#include<stdio.h>
void bubble(int a[],int n);
int main(void)
{
    int n,i;
    printf("n=");
    scanf("%d",&n);
    int a[n];
    printf("enter a[%d]:",n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    bubble(a,n);
    printf("a[%d]:",n);
    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
void bubble(int a[],int n)
{
    int i,j,t;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}
