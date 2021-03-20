#include <iostream>

using namespace std;

int main(){
	int t, n, k, l;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> n >> k >> l;
		if(n > k * l || (k == 1 && n > 1)){
			cout << -1 << endl;
		}else{
			for(int j = 0; j < n - 1; j++){
				cout << j % k + 1 << ' ';
			}
			cout << (n - 1) % k + 1 << endl;
		}
	}
	return 0;
}
