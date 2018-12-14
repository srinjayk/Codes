#include<iostream>
using namespace std;



int main(){
	char arr[80];
	for (int i = 0; i < 80; ++i){
		cin >>arr[i];
	}
	scanf("\n");
	char arr_num[10][10];
	for (int i = 0; i < 10; ++i){
		for (int j = 0; j < 10; ++j){
			cin >>arr_num[i][j];
		}
		scanf("\n");
	}
	char string[10];
	char string_match[10];
	for (int i = 0; i < 8; ++i){
		for (int j = 0; j <10 ; ++j){
			string[j]=arr[i*10+j];
		}
	}
	return 0;
}