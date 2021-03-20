#include <iostream>

using namespace std;

int a(int n){
	if(n < 1){
		return 0;
	}else if(n == 1){
		return 1;
	}
	return a(n - 1) + 3 * n - 2;
}

int main(){
	int n;
	cin >> n;
	cout << a(n);
	return 0;
}
