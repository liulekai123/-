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
	};//竖着的是x，横着的是y
public:
	void Run();
};
 
 
void Maze::Run()
{
	x = 1; y = 1; xout = 9; yout = 1;
	for (int i = 0; i <= 10; i++)
	{
		puts(a[i]); //用于打印显示a中的数据
	}
	while (x != xout || y != yout)//如果未走到终点则继续走，或者通过q退出
	{
		cin >> ch;
		//ch=getchar();
		cout << ch <<'\n'<< endl;
		if (ch == 'q' || ch == 'Q')
		{
			cout << "退出游戏" << endl;
			break;
		}
		if (ch == 's' || ch == 'S')//上移
		{
			if (a[x + 1][y] != '*')
			{
				a[x][y] = ' ';
				x++;
				cout << x << endl;
				a[x][y] = 'O';
			}
		}
		if (ch == 'w' || ch == 'W')//下移
		{
			if (a[x - 1][y] != '*')
			{
				a[x][y] = ' ';
				x--;
				a[x][y] = 'O';
			}
		}
		if (ch == 'a' || ch == 'A')//左移
		{
			if (a[x][y - 1] != '*')
			{
				a[x][y] = ' ';
				y--;
				a[x][y] = 'O';
			}
		}
		if (ch == 'd' || ch == 'D')//右移
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
			puts(a[i]);//用于打印显示a中的数据
		}
	}
	system("cls");
	cout << "恭喜你赢了！" << endl;
}
 
int main()
{
	Maze maze;
	maze.Run();
	Sleep(5000);
    return 0;
}