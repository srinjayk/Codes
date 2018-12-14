
#include <stdio.h> 
#define MAX_LIMIT 20 
int main() 
{ 
   int n,k,j;
   scanf("%d\n",&n);
   for (int i = 0; i < n; ++i)
   {
   	/* code */
   	char str[1001];
   	int g=0;
   	scanf("%s",str);
   	int a=strlen(str);
   	if(a%2==0)
   	{
   		for (j = 0; j < a/2; ++j)
   		{
   			/* code */
   			for (k = a/2; k < a; ++k)
   			{
   				/* code */
   				if (str[j]==str[k])
   				{
   					/* code */
   					str[j]='0';
   					str[k]='0';
   				}
   			}
   		}
   	}

   	for (j = 0; j < a; ++j)
   	{
   		/* code */
        //g=g+str[i];
        //printf("%c",str[j]);
   	}

   	//printf("\n");

    if(a%2!=0)
   	{
   		str[(a-1)/2]='0';
   		for (j = 0; j < (a-1)/2; ++j)
   		{
   			/* code */
   			for (k = (a+1)/2; k < a; ++k)
   			{
   				/* code */
   				if (str[j]==str[k])
   				{
   					/* code */
   					str[j]='0';
   					str[k]='0';
   				}
   			}
   		}
   	}

   	for (j = 0; j < a; ++j)
   	{
   		/* code */
        //g=g+str[i];
        //printf("%c",str[j]);
   	}

   	//printf("\n");

   	for (j = 0; j < a; ++j)
   	{
   		/* code */
        
        if (str[j]!='0')
        {
        	/* code */
        	g++;

        }
   	}
    
    if (g==0)
    {
    	/* code */
    	printf("YES\n");
    }
    else
    {
    	printf("NO\n");
    }
   	

   }
  
   return 0; 
}