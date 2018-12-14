#include<stdio.h>

int sum(int n)
{
	int sum=0;
	int m=n;
	do
	{
		sum=sum+m%10;
		m=m/10;
	}while(m!=10);
}

int main(int argc, char const *argv[])
{
	int m;
	int h=0;
	scanf("%d",&m);
	for (int i = 1; i <= m; ++i)
	{
		if((i+sum(i)+sum(sum(i)))==i)
		{
			h++;
		}
	}
	printf("%d",h);
	return 0;

}