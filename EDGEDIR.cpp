#include<iostream>
int main(){
	int n,m;
	cin >>n;
	for (int i = 0; i < n; ++i){
		scanf("\n");
		cin >>m;
		int arr[m][2];
		for (int j = 0; j < m; ++j){
			cin >>arr[j][0]>>arr[j][1];
			scanf("\n");
		}
	}
	return 0;
}