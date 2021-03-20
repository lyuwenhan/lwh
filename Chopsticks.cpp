#include<iostream>

using namespace std;

int main(){
	freopen("Chopsticks.in", "r", stdin);
	freopen("Chopsticks.out", "w", stdout);
	int a[101] = {0}, n, b;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> b;
		a[b]++;
	}
	int ans = 0;
	for(int i = 0; i <= 100; i++){
		ans += a[i] / 2; 
	}
	cout << ans;
	return 0;
}
