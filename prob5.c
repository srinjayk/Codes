#include<stdio.h>

int factr(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return (n*factr(n-1));
	}
}

int main()

{
	int n;
	scanf("%d\n",&n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		int a;
		scanf("%d\n",&a);
		printf("%d\n",factr(a));
	}
}