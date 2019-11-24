#include "stdafx.h"
#include <windows.h>
#include <iostream>
using namespace std;
class Maze
{
private:
	int x, y, xout, yout;
	char ch;
	char a[100][100] = 
	{   "**********",
		"*O       *",
		"**  ******",
		"***      *",
		"* ****** *",
		"*     ** *",
		"* ***    *",
		"* *   ****",
		"* ********",
		"* ********",
	};//���ŵ���x�����ŵ���y
public:
	void Run();
};
 
 
void Maze::Run()
{
	x = 1; y = 1; xout = 9; yout = 1;
	for (int i = 0; i <= 10; i++)
	{
		puts(a[i]); //���ڴ�ӡ��ʾa�е�����
	}
	while (x != xout || y != yout)//���δ�ߵ��յ�������ߣ�����ͨ��q�˳�
	{
		cin >> ch;
		//ch=getchar();
		cout << ch <<'\n'<< endl;
		if (ch == 'q' || ch == 'Q')
		{
			cout << "�˳���Ϸ" << endl;
			break;
		}
		if (ch == 's' || ch == 'S')//����
		{
			if (a[x + 1][y] != '*')
			{
				a[x][y] = ' ';
				x++;
				cout << x << endl;
				a[x][y] = 'O';
			}
		}
		if (ch == 'w' || ch == 'W')//����
		{
			if (a[x - 1][y] != '*')
			{
				a[x][y] = ' ';
				x--;
				a[x][y] = 'O';
			}
		}
		if (ch == 'a' || ch == 'A')//����
		{
			if (a[x][y - 1] != '*')
			{
				a[x][y] = ' ';
				y--;
				a[x][y] = 'O';
			}
		}
		if (ch == 'd' || ch == 'D')//����
		{
			if (a[x][y + 1] != '*')
			{
				a[x][y] = ' ';
				y++;
				a[x][y] = 'O';
			}
		}
		system("cls");
		for (int i = 0; i <= 10; i++)
		{
			puts(a[i]);//���ڴ�ӡ��ʾa�е�����
		}
	}
	system("cls");
	cout << "��ϲ��Ӯ�ˣ�" << endl;
}
 
int main()
{
	Maze maze;
	maze.Run();
	Sleep(5000);
    return 0;
}