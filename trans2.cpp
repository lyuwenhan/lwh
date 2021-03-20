#include <iostream>
#include <string>
using namespace std;
int main(){
//	freopen("trans.in","r",stdin);
//	freopen("trans.out","w",stdout);
	string a;
	int b[100000];
	cin >> a;
	for(int i = 0; i < a.length(); i++){
		b[i] = 1;
		for(int j = 0; j < i; j++){
			if(a[j] <= a[i] && b[j] + 1 > b[i]){
				b[i] = b[j] + 1;
			}
		}
	}
	int c = 0;
	for(int i = 0; i < a.length(); i++){
		if(b[i] > c){
			c = b[i];
		}
	}
	cout << a.length() - c << endl;
		return 0;
}
