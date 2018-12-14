// C++ program to print distinct subset sums of 
// a given array. 
#include<bits/stdc++.h> 
using namespace std;
#include<iostream>

// Uses Dynamic Programming to find distinct 
// subset sums 
int checkprintDistSum(int arr[], int n, int k) 
{ 
	int sum = 0; 
	for (int i=0; i<n; i++) 
		sum += arr[i]; 

	// dp[i][j] would be true if arr[0..i-1] has 
	// a subset with sum equal to j. 
	bool dp[n+1][sum+1]; 
	memset(dp, 0, sizeof(dp)); 

	// There is always a subset with 0 sum 
	for (int i=0; i<=n; i++) 
		dp[i][0] = true; 

	// Fill dp[][] in bottom up manner 
	for (int i=1; i<=n; i++) 
	{ 
		dp[i][arr[i-1]] = true; 
		for (int j=1; j<=sum; j++) 
		{ 
			// Sums that were achievable 
			// without current array element 
			if (dp[i-1][j] == true) 
			{ 
				dp[i][j] = true; 
				dp[i][j + arr[i-1]] = true; 
			} 
		} 
	} 

	// Print last row elements 
	for (int j=0; j<=sum; j++) 
		if (dp[n][j]==true) 
			cout << j << " "; 

	for (int j = 0; j <=sum; ++j)
	{
		/* code */
		if (j==k)
		{
			/* code */
			return 1;
		}

	}
	return 0;
} 


// Driver code 
int main() 
{ 
	int n;
	scanf("%d\n",&n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
        int m,x;
	    scanf("%d %d\n",&m,&x);
	    //int m;
	    int arr[m];
	    for (int i = 0; i < m; ++i)
	    {
		
		    scanf("%d\n",&arr[i]); 
	    }
		    int d=checkprintDistSum(arr, m, x); 
	    if (d==1)
	    {
		
		   printf("YES\n");
	    }
	    else
	    {
		   printf("NO\n");
	     }
	}
	return 0; 
} 
