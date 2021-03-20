#include <iostream>

using namespace std;

int main(){
	int n = 1, d, i;
	cin >> d;
	for(i = 1; i < d; i++, n++){
		n = n * 2 + 1;
	}
	cout << n;
	return 0;
}
