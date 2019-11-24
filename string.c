#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[]="hello";
    // strlen--计算字节
    printf("strlen=%d ",strlen(a));
    printf("sizeof=%d\n",sizeof(a));
    // strcmp--比较大小
    char b[]="hello";
    printf("strcmp(a,b)=%d\n",strcmp(a,b));
    // strcat--第二个字符串连接到第一个后面
    char c[]="wlod";
    printf("strcat(a,c)=%s",strcat(a,c));
    // strchr--从左边找字符
    // strrchr--从右边找字符
    return 0;
}