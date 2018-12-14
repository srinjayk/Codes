#include<stdio.h>

int main()
{
	/* code */
	int n;
	scanf("%d\n",&n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		int a,b;
		scanf("%d\n",&a);
		b=0;
		do
		{
			b=b+a%10;
			a=a/10;
		}
		while(a!=0);
		printf("%d\n",b);
	}
	return 0;
}