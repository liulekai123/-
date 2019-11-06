
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
    int x;
    printf("x=");
    scanf("%d",&x);
    printf("|x|=%d\n",abs(x));
    double y;
    printf("y=");
    scanf("%d",&y);
    printf("|y|=%d",fabs(y));
    return 0;
}
