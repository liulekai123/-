#include<stdio.h>
struct brithday {
    int year;
    int mouth;
    int day;
};
struct a {
    char name[10];
    struct brithday b;
    int number;
};
int main(void)
{
    int n,i,min;
    printf("n=");
    struct a a[n],temp;
    scanf("%d",&n);
    printf("input information of name brithday and number:\n");
    for(i=0;i<n;i++)
    {
        printf("no.%d:",i+1);
        scanf("%s%d%d%d%d",a[i].name,&a[i].b.year,&a[i].b.mouth,&a[i].b.day,&a[i].number);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[min].b.year>a[j].b.year)goto a;
            else if(a[min].b.year=a[j].b.year)
            {
                if(a[min].b.mouth>a[j].b.mouth)goto a;
                else if(a[min].b.mouth=a[j].b.mouth)
                {
                    if(a[min].b.day>a[j].b.day)goto a;
                }
            }
            a:temp=a[min];
            a[min]=a[j];
            a[j]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("name:%s,brithday:%d-%d-%d,number:%d\n",a[i].name,a[i].b.year,a[i].b.mouth,a[i].b.day,a[i].number);
    }
    return 0;
}
