#include <stdio.h>
	#include <stdlib.h>
	#include <windows.h>
	int main()
	{
		int a;      //定义一个倒计时的时间变量  a(秒)
		printf("请输入要倒计时的时间:\n");
		scanf("%d",&a);      //用户输入所需要倒计时的时间 秒(s)
		system("color 0a");   //指定倒计时在运行时的颜色
		while(a>=0)
		{
			system("cls");
			printf("%d",a);
			Sleep(1000);
			a=a-1;
		}
		system("pause");     
	}