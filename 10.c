#include<stdio.h>
int main(void)
{
    int n,scores;
    printf("n=");
    scanf("%d",&n);
    printf("scores=");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&scores);
        if(scores>=90)printf("A");
        else if(scores>=80&&scores<90)printf("B");
        else if(scores>=70&&scores<80)printf("C");
        else if(scores>=60&&scores<70)printf("D");
        else if(scores<60)printf("E");
    }
    return 0;
}