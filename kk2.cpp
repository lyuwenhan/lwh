#include <iostream>
#include <cmath>

using namespace std;
 
int main(){
	ios::sync_with_stdio(false);
	long long n;
	long long a[16] = {0}; 
	for (int i = 1; i < 16; i++){
		a[i] = pow((long double)i, i);
	}
	while(cin >> n){
		int l = 1, r = 16; 
		while(l < r){
			int m = (l + r) / 2;
			if(a[m] <= n){
				l = m + 1;
			}else{
				r = m;
			}
		}
		cout << l - 1 << endl;
	}
	return 0;
}
