#include <stdio.h>
	#include <stdlib.h>
	#include <windows.h>
	int main()
	{
		int a;      //����һ������ʱ��ʱ�����  a(��)
		printf("������Ҫ����ʱ��ʱ��:\n");
		scanf("%d",&a);      //�û���������Ҫ����ʱ��ʱ�� ��(s)
		system("color 0a");   //ָ������ʱ������ʱ����ɫ
		while(a>=0)
		{
			system("cls");
			printf("%d",a);
			Sleep(1000);
			a=a-1;
		}
		system("pause");     
	}