#include <iostream>
using namespace std;
int main(){
	int a, n[100000], q, x[100000], y[100000];
	cin >> a;
	for(int i = 0;i < a; i++){
		cin >> n[i];
	}
	cin >> q;
	for(int i = 0; i < q; i++){
		cin >> x[i] >> y[i];
	}
	for(int i = 0; i < q; i++){
		int max = 0;
		for(int j = x[i]; j < y[i]; i++){
			if(n[j] > max){
				max = n[j];
			}
		}
		cout << max << endl;
	}
}

