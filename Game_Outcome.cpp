#include<iostream>
using namespace std;
int main(){
	int n;
	cin >>n;
	int arr[n][n];
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			cin >>arr[i][j];
		}
	}
	int row[n];
	int col[n];
	for (int i = 0; i < n; ++i){
		row[i]=0;
	}
	for (int i = 0; i < n; ++i){
		col[i]=0;
	}
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			row[i]=row[i]+arr[i][j];
		}
	}
	for (int j = 0; j < n; ++j){
		for (int i = 0; i < n; ++i){
			col[j]=col[j]+arr[i][j];
		}
	}

	/*for (int i = 0; i < n; ++i){
		cout <<row[i]<<" ";
	}
	for (int i = 0; i < n; ++i){
		cout <<col[i]<<" ";
	}
	printf("\n");*/

	int winning=0;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			if(row[i]<col[j]) winning++;
		}
	}
	cout <<winning;
	return 0;
}