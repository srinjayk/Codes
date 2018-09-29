#include<stdio.h>

int main()
{
	/* code */
	int a=9;
	int i,j,k,l,m,p,q;
	int r=1;
	int arr[9][9];
    for (i = 0; i < a; ++i)
    {
    	/* code */
    	for (j = 0; j < a; ++j)
    	{
    		/* code */
    		scanf("%d ",&arr[i][j]);
    	}
    	scanf("\n");
    }

    for (i = 0; i < a; ++i)
    {
    	/* code */
    	for (j = 0; j < a; ++j)
    	{
    		/* code */
    		//printf("%d ",arr[i][j]);
    	}
    }

    int b[729];

    for (i = 0; i < 729; ++i)
    {
    	/* code */
    	b[i]=0;
    }
    
    for (i = 0; i < a; ++i)
    {
    	/* code */
    	for (j = 0; j < a; ++j)
    	{
    		/* code */
    		if (arr[i][j]!=0)
    		{
    			/* code */
    			int c=arr[i][j];
    			b[i*81+j*9+c]=1;
    		}
    	}
    }
    
    for (i = 0; i < 729; ++i)
    {
    	/* code */
    	//printf("%d\n",b[i]);
    }
    
    for (i = 0; i < 729; ++i)
    {
    	/* code */
    	//printf("%d\n",b[i]);
    	if(b[i]==1)
    	{
    		printf("%d 0\n",i);
    		r++;
    	}
    }

    for (k = 0; k < 9; ++k)
    {
    	/* code */
    	for (j = 0; j < 9; ++j)
    	{
    		/* code */
    		for (m = 0; m < 8; ++m)
    		{
    			for (l = m+1; l < 9; ++l)
    			{
    				/* code */

    				printf("%d %d 0\n",-(j*81+m*9+k),-(j*81+l*9+k) );
    				r++;

    			}
    		}
    	}
    }

    for (k = 0; k < 9; ++k)
    {
    	/* code */
    	for (j = 0; j < 9; ++j)
    	{
    		/* code */
    		for (m = 0; m < 8; ++m)
    		{
    			for (l = m+1; l < 9; ++l)
    			{
    				/* code */
    				printf("%d %d 0\n",-(l*81+j*9+k),-(m*81+j*9+k) );
    				r++;

    			}
    		}
    	}
    }

    for (k = 0; k < 9; ++k)
    {
    	/* code */
    	for (j = 0; j < 9; j=j+3)
    	{
    		/* code */
    		for (i = 0; i < 9; i=i+3)
    		{
    			/* code */
    			for(m=0;m<3;m++)
    			{
    				for (l = 0; l < 3; ++l)
    				{
    					/* code */
    					if ((l==2)&&(m==2))
    					{
    						break;
    					}
    					for (p = m+1; p < 3; ++p)
    					{
    						/* code */
    						for (q = l+1; q < 3; ++q)
    						{
    							/* code */
    							printf("%d %d 0\n",-((i+l)*81+(j+m)*9+k),-((i+p)*81+(j+q)*9+k) );
    							r++;
    						}
    					}
    				}
    			}

    		}
    		
    	}
    }
    printf("%d\n",r );



	return 0;
}