#include<stdio.h>

int main()
{
	/* code */
	int n,m;
	scanf("%d\n%d",&n,&m);
	if(n>m)
		printf("%d",n-m);
	else
		printf("%d",m+n);
	return 0;
}