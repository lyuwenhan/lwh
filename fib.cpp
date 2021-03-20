#include <iostream>

using namespace std;

int main(){
	int a[2][2] = {1, 1, 1}, b[2][2], c[2][2] = {1, 0, 0, 1};
	long long n; 
	const int m = 1007;
	cin >> n;
	n--;
	while(n > 0){
		if(n & 1){
			//b = c, c = 0
			for(int i = 0; i < 2; i++){
				for(int j = 0; j < 2; j++){
					b[i][j] = c[i][j];
					c[i][j] = 0;
				}
			}
			//c = a * b
			for(int i = 0; i < 2; i++){
				for(int j = 0; j < 2; j++){
					for(int k = 0; k < 2; k++){
						c[i][j] += a[i][k] * b[k][j];
						c[i][j] %= m;
					}
				}
			}
		}
		//b = 0
		for(int i = 0; i < 2; i++){
			for(int j = 0; j < 2; j++){
				b[i][j] = 0;
			}
		}
		//b = a * a
		for(int i = 0; i < 2; i++){
			for(int j = 0; j < 2; j++){
				for(int k = 0; k < 2; k++){
					b[i][j] += a[i][k] * a[k][j];
					b[i][j] %= m;
				}
			}
		}
		//a = b
		for(int i = 0; i < 2; i++){
			for(int j = 0; j < 2; j++){
				a[i][j] = b[i][j];
			}
		}
		n >>= 1;
	}
	cout << c[0][0];
}
