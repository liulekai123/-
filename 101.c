#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
    int x,y;
    printf("猜拳游戏：\n");
    printf("1:石头\n2:剪刀\n3:布\n");
    printf("输入你的选择:");
    scanf("%d",&x);
    srand(time(0));
    y=rand()%3+1;
    if(y=1) printf("电脑出的是石头\n");
    else if(y=2) printf("电脑出的是剪刀\n");
    else printf("电脑出的是布\n");
    if(x-y==1 || x-y==2) printf("你赢了!");
    else printf("你输了!");
    return 0;
}