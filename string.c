#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[]="hello";
    // strlen--�����ֽ�
    printf("strlen=%d ",strlen(a));
    printf("sizeof=%d\n",sizeof(a));
    // strcmp--�Ƚϴ�С
    char b[]="hello";
    printf("strcmp(a,b)=%d\n",strcmp(a,b));
    // strcat--�ڶ����ַ������ӵ���һ������
    char c[]="wlod";
    printf("strcat(a,c)=%s",strcat(a,c));
    // strchr--��������ַ�
    // strrchr--���ұ����ַ�
    return 0;
}