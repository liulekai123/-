# include<stdio.h>
struct book {
    char name[10];
    int price;
};
int main(void)
{
    int i;
    struct book a,max,min;
    printf("input name and price:\n");
    for(i=1;i<=10;i++)
    {
        printf("no.%d:",i);
        scanf("%s%d",a.name,&a.price);
        if(i==1) max=a;
        if(max.price<a.price) max=a;
        if(i==1) min=a;
        if(min.price>a.price) min=a;
    }
    printf("name:%s,price:%d\nname:%s,price:%d",max.name,max.price,min.name,min.price);
    return 0;
}