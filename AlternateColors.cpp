#include<iostream>

using namespace std;

int main(){
	freopen("AlternateColors.in", "r", stdin);
	freopen("AlternateColors.out", "w", stdout);
	int r, g, b, k;
	string a;
	cin >> r >> g >> b >> k;
	while(true){
		if(r > 0){
			r--;
			k--;
			a = "RED";
		}
		if(k <= 0){
			break;
		}
		if(g > 0){
			g--;
			k--;
			a = "GREEN";
		}
		if(k <= 0){
			break;
		}
		if(b > 0){
			b--;
			k--;
			a = "BLUE";
		}
		if(k <= 0){
			break;
		}
	}
	cout << a << endl;
	return 0;
}
