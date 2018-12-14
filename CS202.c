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

    /*for (i = 0; i < a; ++i)
    {
    	for (j = 0; j < a; ++j)
    	{
    		printf("%d ",arr[i][j]);
    	}
    }

    int b[729];

    for (i = 0; i < 729; ++i)
    {
    	b[i]=0;
    }
    
    for (i = 0; i < a; ++i)
    {
    	for (j = 0; j < a; ++j)
    	{
    		if (arr[i][j]!=0)
    		{
    			int c=arr[i][j];
    			b[i*81+j*9+c]=1;
    		}
    	}
    }
    
    for (i = 0; i < 729; ++i)
    {
    	printf("%d\n",b[i]);
    }
    
    for (i = 0; i < 729; ++i)
    {
    	printf("%d\n",b[i]);
    	if(b[i]==1)
    	{
    		printf("%d 0\n",i);
    		r++;
    	}
    }*/


    for (i = 0; i < 9; ++i)
    {
        /* code */
        for (j = 0; j < 9; ++j)
        {
            /* code */
            //scanf("%d ",&arr[i][j]);
            if (arr[i][j]!=0)
            {
                /* code */
                int c=arr[i][j];
                printf("%d 0\n",(i*81+j*9+c));
                r++;

            }
        }
        scanf("\n");
    }

    for (k = 0; k < 9; ++k)
    {
    	/* code */
    	for (j = 0; j < 9; ++j)
    	{
    		/* code */
    		for (m = 0; m < 9; ++m)
    		{
    			
    				/* code */

    				printf("%d ",(j*81+m*9+k) );

    		
    		}
    		printf("0\n");
    		r++;
    	}
    }

    for (k = 0; k < 9; ++k)
    {
    	/* code */
    	for (j = 0; j < 9; ++j)
    	{
    		/* code */
    		for (m = 0; m < 9; ++m)
    		{
    			
    				/* code */
    				printf("%d ",(m*81+j*9+k) );

    		}
    		printf("0 \n");
    		r++;
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
    					
    							/* code */
    							printf("%d ",((i+l)*81+(j+m)*9+k));
    						
    				}
    			}
    			printf("0 \n");
    			r++;

    		}
    		
    	}
    }
    
    for (k = 0; k < 9; ++k)
    {
    	/* code */
    	for(m = 0 ; m<9 ;m++)
    	{
    		printf("%d ",(m*81+m*9+k));
    	}
    	printf("0 \n");
    	r++;
    }

    for (k = 0; k < 9; ++k)
    {
    	/* code */
    	for(m = 0 ; m<9 ;m++)
    	{
    		printf("%d ",(m*81+(8-m)*9+k));
    	}
    	printf("0 \n");
    	r++;
    }

    for(i=0;i<9;i++)
    {
    	for(j=0;j<9;j++)
    	{
    		for(l=0;l<8;l++)
    		{
    			for(m=l+1;m<9;m++)
    			{
    				printf("%d %d 0\n",-(i*81+j*9+l),-(i*81+j*9+m));
    				r++;
    			}
    		}
    	}
    }

    printf("%d\n",r );



	return 0;
}