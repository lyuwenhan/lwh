#include <iostream>
#include <cmath>

using namespace std;

int main(){
	long long n;
	while(cin >> n){
		long double k = 1;
		while(pow(k, k) <= n){
			k++;
		}
		cout << k - 1 << endl;
	}
	return 0;
}
