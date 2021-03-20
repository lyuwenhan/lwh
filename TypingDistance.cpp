#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
	freopen("TypingDistance.in", "r", stdin);
	freopen("TypingDistance.out", "w", stdout);
	string a, b;
	int c[50] = {0}, ans = 0;
	cin >> a >> b;
	for(int i = 0; i < b.length(); i++){
		for(int j = 0; j < a.length(); j++){
			if(a[j] == b[i]){
				c[i] = j;
			}
		}
	}
	for(int i = 0; i < b.length() - 1; i++){
		ans += abs(c[i] - c[i + 1]);
	}
	cout << ans << endl;
}
