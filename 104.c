#include<windows.h>
#include<stdio.h>
#include<time.h>
#include<conio.h>
int main()
{
    system("title ");
    int x,y;
    printf("???????");
    while(!_kbhit())
    {
        x=rand()%332+300;
        y=rand()%228+300;
        SetCursorPos(x,y);
    }
    return 0 ;
}