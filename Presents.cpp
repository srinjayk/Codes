#include<iostream>
using namespace std;
int main(){
	int n;
	cin >>n;
	int arr[n+1];
	int arr1[n+1];
	for (int i = 1; i < n+1; ++i){
		cin >>arr[i];
	}
	for (int i = 1; i < n+1; ++i){
		arr1[arr[i]]=i;
	}
	for (int i = 1; i < n+1; ++i){
		cout <<arr1[i]<<" ";
	}
	return 0;
}