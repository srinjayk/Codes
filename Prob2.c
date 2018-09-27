#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n,i,a,b,c;
	scanf("%d\n",&n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		scanf("%d\n",&a);
		int arr[a];
		arr[0]=1;
		if (a>1)
		{
			arr[1]=2;
		}
		if(a>=3)
		{
			for (int i = 2; i < a; ++i)
			{
				/* code */
				arr[i]=arr[i-1]+arr[i-2]+1;
			}
		}

		for (int i = 0; i < a; ++i)
		{
			printf("%d ",arr[i]);
		}
		printf("\n");
	}
	return 0;
}