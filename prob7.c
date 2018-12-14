#include<stdio.h>

int main(int argc, char const *argv[])
{
	/* code */
	int a;
	do
	{
		scanf("%d\n",&a);
		if (a!=42)
		{
			/* code */
			printf("%d\n",a);
		}
		else
		{
			break;
		}
	}while(1);
	return 0;
}