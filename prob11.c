/* C program for Merge Sort */
#include<stdlib.h> 
#include<stdio.h> 
  
// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    int L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        int m = l+(r-l)/2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 
  
/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", A[i]); 
    printf("\n"); 
} 
  

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



  
// A recursive binary search function. It returns  
// location of x in given array arr[l..r] is present,  
// otherwise -1 
int binarySearch(int arr[], int l, int r, int x) 
{ 
   if (r >= l) 
   { 
        int mid = l + (r - l)/2; 
  
        // If the element is present at the middle  
        // itself 
        if (arr[mid] == x)   
            return mid; 
  
        // If element is smaller than mid, then  
        // it can only be present in left subarray 
        if (arr[mid] > x)  
            return binarySearch(arr, l, mid-1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, mid+1, r, x); 
   } 
  
   // We reach here when element is not  
   // present in array 
   return -1; 
}


int main(int argc, char const *argv[])
{
    /* code */
    int n;
    scanf("%d\n",&n);
    for (int i = 0; i < n; ++i)
    {
        /* code */
        int a;
        scanf("%d\n",a);
        int arr[a];
        for (int j = 0; j < a; ++j)
        {
            /* code */
            scanf("%d ",&arr[j]);
        }
        scanf("\n");
        int b;
        scanf("%d\n",&b);
        int c=arr[b-1];
        mergeSort(arr, 0, a - 1);
       int d= binarySearch(arr, 0, a-1, c);
       printf("%d\n",d );

    }
    return 0;
}