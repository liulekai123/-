#include<stdio.h>
#include<string.h>
int main ()
{
	char a[21];
	int i=0,j=0;
	while((a[i]=getchar())!='\n');
	i++;
	a[i]='\0';
	if((a[j]=='_')||(a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z'))
	{
	for(j=1;j<i;j++)
	{
		if((a[j]=='_')||(a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z')||(a[j]>='0'&&a[j]<='9'))
		continue;
		else
		{
		printf("no");
		break;
     	}
	}
	if(j>i)
	printf("yes");
	else
	printf("no");
}
else
printf("no");
	return 0;
 }