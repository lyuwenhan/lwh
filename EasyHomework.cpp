#include<iostream>

using namespace std;

int main(){
	freopen("EasyHomework.in", "r", stdin);
	freopen("EasyHomework.out", "w", stdout);
	int a, b, ans = 1;
	cin >> a;
	for(int i = 0; i < a; i++){
		cin >> b;
		ans *= b;
	}
	if(ans > 0){
		cout << "POSITIVE" << endl;
	}
	else if(ans < 0){
		cout << "NEGATIVE" << endl;
	}
	else{
		cout << "ZERO" << endl;
	}
	return 0;
}
