#include <stdio.h>

int main(void) 
{
	int a,b,pro,i,flag=0;
	printf("enter the two number:");
	scanf("%d %d",&a,&b);
	pro=n1*n2;
	for(i=1;i<=pro/2;i++)
	{
		if(i*i==pro)
		{
			flag=1;
			break;
		}
	
	}
	
	if(flag==1)
	{
		printf("\nyes");
	}
	else
	{
		printf("\nno");
	}
	return 0;
}
