#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
    int x,y;
    printf("��ȭ��Ϸ��\n");
    printf("1:ʯͷ\n2:����\n3:��\n");
    printf("�������ѡ��:");
    scanf("%d",&x);
    srand(time(0));
    y=rand()%3+1;
    if(y=1) printf("���Գ�����ʯͷ\n");
    else if(y=2) printf("���Գ����Ǽ���\n");
    else printf("���Գ����ǲ�\n");
    if(x-y==1 || x-y==2) printf("��Ӯ��!");
    else printf("������!");
    return 0;
}