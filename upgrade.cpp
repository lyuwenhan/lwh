#include <iostream>
using namespace std;
int main(){
	freopen("upgrade.in", "r", stdin);
	freopen("upgrade.out", "w", stdout);
	const int m = 1e9 + 7;
	long long a[6][6] = {
	2, 1, 2, 1, 2, 1, 
	2, 2, 2, 2, 2, 2,
	1, 0, 0, 0, 0, 0,
	0, 1, 0, 0, 0, 0,
	0, 0, 1, 0, 0, 0,
	0, 0, 0, 1, 0, 0};
	long long b[6][6], c[6][6] = {0}; 
	long long d[6] = {130, 180, 30, 40, 10, 10};
	for(int i = 0; i < 6; i++){
		c[i][i] = 1;
	}
	long long n;
	cin >> n;
	
	if(n == 2){
		cout << d[0] << ' ' << d[1] << endl;
		return 0;
	}
	if(n == 1){
		cout << d[2] << ' ' << d[3] << endl;
		return 0;
	}
	if(n == 0){
		cout << d[4] << ' ' << d[5] << endl;
		return 0;
	}
	
	n -= 2;
	
	while(n > 0){
		if(n & 1){
			//b = c, c = 0
			for(int i = 0; i < 6; i++){
				for(int j = 0; j < 6; j++){
					b[i][j] = c[i][j];
					c[i][j] = 0;
				}
			}
			//c = a * b
			for(int i = 0; i < 6; i++){
				for(int j = 0; j < 6; j++){
					for(int k = 0; k < 6; k++){
						c[i][j] += a[i][k] * b[k][j] % m;
					}
					c[i][j] %= m;
				}
			}
		}
		//b = a, a = 0
		for(int i = 0; i < 6; i++){
			for(int j = 0; j < 6; j++){
				b[i][j] = a[i][j];
				a[i][j] = 0;
			}
		}
		//a = b * b
		for(int i = 0; i < 6; i++){
			for(int j = 0; j < 6; j++){
				for(int k = 0; k < 6; k++){
					a[i][j] += b[i][k] * b[k][j] % m;
				} 
				a[i][j] %= m;
			}
		}
		n >>= 1;
	}
	
	long long fn1 = 0, fn2 = 0;
	
	for(int i = 0; i < 6; i++){
		fn1 += c[0][i] * d[i] % m;
		fn2 += c[1][i] * d[i] % m;
	}
	fn1 %= m;
	fn2 %= m;
	
	cout << fn1 << ' ' << fn2 << endl;
	
	return 0;
}
