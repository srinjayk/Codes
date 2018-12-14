#include<stdio.h>

int main()
{
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
			b=b+a/5;
			a=a/5;
		}
		while(a!=0);
		printf("%d\n",b);

	}
}