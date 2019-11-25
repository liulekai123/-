#include<stdio.h>
struct brithday {
    int year;
    int mouth;
    int day;
};
struct stdudent {
    int num;
    char name [10];
    int computer,english,math;
    double average;
    struct brithday a;
};
int main(void)
{
    int i,n;
    struct stdudent s1,max;
    printf("n=");
    scanf("%d",&n);
    printf("input the stdent's number,name,course scores and brithday:\n");
    for(i=1;i<=n;i++)
    {
        printf("no.%d:",i);
        scanf("%d%s%d%d%d%d%d%d",&s1.num,s1.name,&s1.math,&s1.english,&s1.computer,&s1.a.year,&s1.a.mouth,&s1.a.day);
        s1.average=(s1.math+s1.english+s1.computer)/3.0;
        if(i==1) max=s1;
        if(max.average<s1.average) max=s1;
    }
     printf("num:%d,name:%s,average:%.2lf,birthday:%d-%d-%d",max.num,max.name,max.average,max.a.year,max.a.mouth,max.a.day);
}