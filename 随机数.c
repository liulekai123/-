#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
    int number;
    srand(time(0));
    number=rand();
    printf("number=%d",number);
    return 0;
}