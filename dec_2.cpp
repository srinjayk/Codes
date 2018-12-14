#include<iostream>
#include<string>
int main(){
	while(1){
		string str1,str2;
		getline(cin,str1); 
		int a,b;
		cin>>a;
		getline(cin,str2);
		cin>>b;
		if((a==2)&&(b==1))
			cout<<"3";
		else if((a==1)&&(b==2))
			cout<<"3";
		else if((a==3)&&(b==2))
			cout<<"1";
		else if((a==2)&&(b==3))
			cout<<"1";
		else if((a==3)&&(b==1))
			cout<<"2";
		else
			cout<<"2";

	}
	return 0;
}