#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >>n;
    scanf("\n");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    scanf("\n");
    int m,j,i;
    //int d=0;
    cin >>m;
    scanf("\n");
    for(i=0;i<m;i++)
    {
        int g;
        int d=0;
        scanf("\n");
        cin >>g;
        for(j=0;j<n;j++)
        {
            if((g==arr[j])&&(d==0))
            {
                cout <<"Yes "<<(j+1);
                printf("\n");
                d=1;
                
            }
        }
        for(j=0;j<n-1;j++)
        {
            if((g>arr[j])&&(g<arr[j+1])&&(d==0))
            {
                cout <<"No "<<(j+2);
                printf("\n");
            }
        }
    }
    
    return 0;
}
