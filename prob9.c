#include<stdio.h>

int digit(int a)
{
	int b;
	do
		{
			b=b+a%10;
			a=a/10;
		}
		while(a!=0);
		return b;
}

int main(int argc, char const *argv[])
{
	/* code */
	int m,n;
	scanf("%d %d",&a,&b);
	int c=a-b;
	if(digit(c)==digit(c+1))
		printf("%d",(c+1));
	else
		printf("%d",(c-1));

	return 0;
}