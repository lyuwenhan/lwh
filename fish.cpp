#include <iostream>
using namespace std;

int main3(){
	int n,ls[100];
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> ls[i];
	}
	for(int i = 0;i < n;i++){
		int a = 0;
		for(int j = 0;j < i;j++){
			if (ls[j] < ls[i]){
				a++;
			}
		}
		cout << a << ' '; 
	}
	return 0;
}
