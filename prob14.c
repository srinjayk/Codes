#include<stdio.h>

int main()
{
	int n;
	scanf("%d\n",&n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		int a,b,j;
		int k=0;
		int sum=0;
		scanf("%d %d\n",&a,&b);
		int arr[a];
		for (j = 0; j < a; ++j)
		{
			scanf("%d "&arr[j]);
			sum=sum+arr[j];
		}
		scanf("\n");
		for (j = 0; j < a; ++j)
		{
			if((arr[j]+b)>(sum-arr[j]))
			{
				k++;
			}
		}
		printf("%d\n",k);

	}
	return 0;
}