#include<iostream>
int main(){
	int n,m;
	cin>>n>>m;
	scanf("\n");
	for (int i = 0; i < n; ++i){
		int a;
		cin>>a;
		if(m>=a)
			cout<<"Good Boi";
		else
			cout<<"Bad Boi";
	}
	return 0;
}