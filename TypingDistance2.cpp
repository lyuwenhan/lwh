#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
	freopen("TypingDistance.in", "r", stdin);
	freopen("TypingDistance.out", "w", stdout);
	string a, b;
	int c[26] = {0}, ans = 0;
	cin >> a >> b;
	
	for(int i = 0; i < a.length(); i++){
		c[a[i] - 'a'] = i + 1;
	}
	for(int i = 0; i < b.length() - 1; i++){
		int i2 = c[b[i] - 'a'];
		int i3 = c[b[i + 1] - 'a'];
		ans += abs(i2 - i3);
	}
	cout << ans << endl;
	return 0;
}
