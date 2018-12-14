#include<stdio.h>

int main()
{
	/* code */
	int a=9;
	int i,j,k,l,m,p,q;
	int r=1;
	int arr[10][10];
    for (i = 1; i < 10; ++i)
    {
    	/* code */
    	for (j = 1; j < 10; ++j)
    	{
    		/* code */
    		scanf("%d ",&arr[i][j]);
    	}
    	scanf("\n");
    }

    for (i = 1; i < 10; ++i)
    {
    	/* code */
    	for (j = 1; j < 10; ++j)
    	{
    		/* code */
    		//printf("%d ",arr[i][j]);
    	}
    }

    //int b[830];

    //for (i = 1; i < 830; ++i)
    //{
    	/* code */
    //	b[i]=0;
    //}
    
    //for (i = 1; i < 10; ++i)
    //{
    	/* code */
    //	for (j = 1; j < 10; ++j)
    //	{
    		/* code */
    //		if (arr[i][j]!=0)
    //		{
    			/* code */
    //			int c=arr[i][j];
    //			b[i*81+j*9+c]=1;
    //		}
    //	}
    //}
    
    //for (i = 1; i < 830; ++i)
    //{
    	/* code */
    	//printf("%d\n",b[i]);
    //}
    
    //for (i = 1; i < 830; ++i)
    //{
    	/* code */
    	//printf("%d\n",b[i]);
    	//if(b[i]==1)
    	//{
    		//printf("%d 0\n",i);
    		//r++;
    	//}
    //}

    FILE *in_file  = fopen("minisat.txt", "w");

    for (i = 1; i < 10; ++i)
    {
        /* code */
        for (j = 1; j < 10; ++j)
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

    for (k = 1; k < 10; ++k)
    {
    	/* code */
    	for (j = 1; j < 10; ++j)
    	{
    		/* code */
    		for (m = 1; m < 10; ++m)
    		{
    			
    				/* code */

    				printf("%d ",(j*81+m*9+k) );
    				

    		
    		}
    		printf("0\n");
            r++;
    	}
    }

    for (k = 1; k < 10; ++k)
    {
    	/* code */
    	for (j = 1; j < 10; ++j)
    	{
    		/* code */
    		for (m = 1; m < 10; ++m)
    		{
    			
    				/* code */
    				printf("%d ",(m*81+j*9+k) );
    				

    		}
    		printf("0 \n");
            r++;
    	}
    }

    for (k = 1; k < 10; ++k)
    {
    	/* code */
    	for (j = 1; j < 10; j=j+3)
    	{
    		/* code */
    		for (i = 1; i < 10; i=i+3)
    		{
    			/* code */
    			for(m=1;m<4;m++)
    			{
    				for (l = 1; l < 4; ++l)
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
    
    for (k = 1; k < 10; ++k)
    {
    	/* code */
    	for(m = 1 ; m<10 ;m++)
    	{
    		printf("%d ",(m*81+m*9+k));
    	}
    	printf("0 \n");
        r++;
    }

    for (k = 1; k < 10; ++k)
    {
    	/* code */
    	for(m = 1 ; m<10 ;m++)
    	{
    		printf("%d ",(m*81+(8-m)*9+k));
    	}
    	printf("0 \n");
        r++;
    }

    for(i=1;i<10;i++)
    {
    	for(j=1;j<10;j++)
    	{
    		for(l=1;l<9;l++)
    		{
    			for(m=l+1;m<10;m++)
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