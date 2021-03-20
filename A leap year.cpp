#include <iostream>
using namespace std;
int main(){
	int l, r,ls[2000], n = 0;
	cin >> l >> r;
	for(int i = l; i <= r; i++){
		if(i % 400 == 0 || (i % 4 == 0 && i % 100 != 0)){
			ls[n] = i;
			n++;
		}
	}
	cout << n << endl;
	for(int i = 0; i < n; i++){
		cout << ls[i] << ' ';
	} 
	return 0;
}
