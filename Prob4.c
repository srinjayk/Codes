#include<stdio.h>
#include<math.h>

int min(int a,int b)
{
	if(a>=b)
	{
		return b;
	}
	else
	{
		return a;
	}
}

int main(int argc, char const *argv[])
{
	/* code */
	int n;
	scanf("%d\n",&n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		int a,b,c,d,e,f,g,h,j,l;
        scanf("%d %d %d %d %d\n",&a,&b,&c,&d,&e);
        l=min(a,b);
        f=min(l,c);
        g=min(d,e);
        h=a+b+c;
        j=d+e;
        
        //printf("%d %d %d %d %d %d %d %d %d\n",	a,b,c,d,e,f,g,h,j);

        if ((g>=f)&&(h==j))
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