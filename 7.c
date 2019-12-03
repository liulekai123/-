#include<stdio.h>
#include<string.h>
int a(char b[10]);
int main(void)
{
    int p1,p2,n,i;
    char player1[10],player2[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",player1);
        scanf("%s",player2);
        p1=a(player1);
        p2=a(player2);
        if(p1-p2==1||p1-p2==-2) printf("Player1");
        else if(p1==p2) printf("Tie");
        else if(p1-p2==2||p1-p2==-1) printf("Player2");
    }
    return 0;
}
int a(char b[10])
{
    int p;
    if(strcmp(b,"Rock")==0) p=3;
    else if(strcmp(b,"Scissors")==0) p=2;
    else if(strcmp(b,"Paper")==0) p=1;
    return p;
}