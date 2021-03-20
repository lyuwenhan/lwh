#include<iostream>

using namespace std;

int main(){
	freopen("FoxAndGame.in", "r", stdin);
	freopen("FoxAndGame.out", "w", stdout);
	int ans = 0, n;
	string a;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a;
		for(int j = 0; j < 3; j++){
			if(a[j] == 'o'){
				ans++;
			}
		}
	}
	cout << ans;
	return 0;
}
