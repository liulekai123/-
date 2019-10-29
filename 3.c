# include<stdio.h>
int main(void){
    int a,b,c,d,he;
    double pingjunshu;
    printf("a,b,c,d=");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    he=a+b+c+d;
    pingjunshu=he/4;
    printf("he=%d,pingjunshu=%.1lf",he,pingjunshu);

    return 0;

}