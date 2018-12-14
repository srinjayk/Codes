#include<stdio.h>

int func(int n)
{
	int k;
	int sum1=0;
	for (k=1; k <= n; k++)
	{
		if(((k%2)==1)&&((n%k)==0))
		{
            sum1=sum1+k;
            //printf("%d\n",k);
		}
					
	}
	return k;

}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d\n",&n);
	for (int i = 0; i < n; ++i)
	{
		int a,b;
		int sum=0;
        scanf("%d %d\n",&a,&b);
        int j;
        for(j=a;j<=b;j++)
        {
            sum=sum+func(j);
            //printf("%d\n",func(j) );
        }
        printf("%d\n",sum);
	}
	return 0;
}