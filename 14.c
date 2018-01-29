#include<stdio.h>
void main()
{
	int a,b,i;
	printf("enter two no.");
	scanf("%d%d",&a,&b);
	if(a<=100000 && b<=100000 )
	for(i=a+1;i<=b-1;i++)
	{
		if(i%2!=0)
		{
			printf("%d\t",i);
		}
	}
}
