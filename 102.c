#include <stdio.h>
#include <windows.h>
int main(int argc, char *argv[])
{
    RECT rect; //RECT��һ�����νṹ�壬�൱�ڱ�����һ�����ε������ߵ�����
    HWND hwnd = NULL,oldhwnd = NULL; //�������ھ��
    int x,y,width,height; //�������洰�ں�������Ϳ�ȡ��߶ȵı���
    int i;
    for(i=0;i<50;i++)
    {
        hwnd = GetForegroundWindow(); //һ��API��������ȡ����ڵľ��
        if(hwnd!=oldhwnd)
        {
            GetWindowRect(hwnd,&rect); //��ȡָ�����ڵ�λ��
            x = rect.left;
            y = rect.top;
            width = rect.right - x;
            height = rect.bottom - y;
            oldhwnd = hwnd; //�Ѹոջ�ȡ�Ĵ��ھ������������
        }
        MoveWindow(hwnd,x-10,y,width,height,TRUE); //�����ƶ���10���أ���ͬ
        Sleep(5); //��ͣ5����
        MoveWindow(hwnd,x-10,y-10,width,height,TRUE);
        Sleep(5);
        MoveWindow(hwnd,x,y-10,width,height,TRUE);
        Sleep(5);
        MoveWindow(hwnd,x,y,width,height,TRUE);
        Sleep(5);
    }
        return 0;
}