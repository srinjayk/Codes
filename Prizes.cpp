#include<iostream>
using namespace std;
int main(){
	int n;
	cin >>n;
	int arr[n];
	scanf("\n");
	for (int i = 0; i < n; ++i){
		cin >>arr[i];
	}
	int arr1[n];
	arr1[0]=arr[0];
	for (int i = 1; i < n; ++i){
		arr1[i]=arr[i]+arr1[i-1];
	}
	for (int i = 0; i < n; ++i){
		cout<<arr1[i]<<" ";
	}
	int prices[5];
	for (int i = 0; i < 5; ++i){
		cin >>prices[i];
	}
	for (int i = 0; i < n; ++i){
		
	}
	return 0;
}
