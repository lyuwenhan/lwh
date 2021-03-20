#include <iostream>
using namespace std;
void move(int n, char a, char b, char c){
	if(n > 1){
		move(n - 1, a, c, b);
	}
	cout << a << "->" << n << "->" << b << endl;
	if(n > 1){
		move(n - 1, c, b, a);
	}
}
int main(){
	int n;
	char a, b, c;
	cin >> n >> a >> b >> c;
	move(n, a, b, c);
	return 0;
}
