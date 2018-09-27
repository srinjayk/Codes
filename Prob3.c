#include<stdio.h>

int main ()
{
	int n;
	scanf("%d\n",&n);
    for (int i = 0; i < n; ++i)
    {
    	/* code */
    	int a,b,j;
    	scanf("%d %d\n",&a,&b);
    	int arr[a];
    	int res[a];
    	for (j = 0; j < a; ++j)
    	{
    		/* code */
    		scanf("%d ",&arr[j]);
    	}
    	scanf("\n");
    	for (j = 0; j < a; ++j)
    	{
    		/* code */
    		if(b>=arr[j])
    		{
    			b=b-arr[j];
    			res[j]=1;
    		}
    		else
    		{
    			res[j]=0;
    		}
    	}
    	for (j = 0; j < a; ++j)
    	{
    		/* code */
    		printf("%d",res[j] );
    	}
    	printf("\n");
    }

	return 0;
}