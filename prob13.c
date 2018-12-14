#include<stdio.h>

int main()
{
    int n,j,k,l;
    scanf("%d\n",&n);
    for (int i = 0; i < n; ++i)
    {
    	/* code */
    	int m;
    	int h=1;
    	scanf("%d\n",&m);
    	int arr[m];
    	for (j = 0; j < m; ++j)
    	{
    		/* code */
    		scanf("%d ",&arr[j]);
    	}
    	scanf("\n");
    	for (j = 0; j < m; ++j)
    	{
    		/* code */
    		printf("%d ",arr[j]);
    	}
    	printf("\n");
    	for (j = 0; j < m-1; ++j)
    	{
    		/* code */
    		if (arr[i]>=arr[i+1])
    		{
    			/* code */
    			h++;
    		}
    	}
    	//printf("%d\n",h);
    }
}