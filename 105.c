#include<windows.h>
#include<stdio.h>
#include<time.h>
#include<conio.h>
int main()
{
    system("title ");
    int x,y;
    printf("���������ͣ��");
    while(!_kbhit())
    {
        x=1;y=1;
        SetCursorPos(x,y);
    }
    return 0 ;
}
