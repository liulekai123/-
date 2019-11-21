#include<stdio.h>
void mouth_day(int year,int yearday,int *pmouth,int *pday);
int main(void)
{
    int mouth,day,year,yearday;
    printf("input year and yearday:");
    scanf("%d%d",&year,&yearday);
    mouth_day(year,yearday,&mouth,&day);
    printf("%d-%d-%d",year,mouth,day);
    return 0;
}
void mouth_day(int year,int yearday,int *pmouth,int *pday)
{
    int k,leap;
    int tab[2][13]={
        {0,31,28,31,30,31,30,31,31,30,31,30,31},
        {0,31,29,31,30,31,30,31,31,30,31,30,31}
    };
    leap=(year%4==0 && year%100!=0) || year%400==0;
    for(k=1;yearday>tab[leap][k];k++)
    {
        yearday=yearday-tab[leap][k];
    }
    *pmouth=k;
    *pday=yearday;
}