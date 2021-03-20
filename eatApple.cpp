#include <iostream>

using namespace std;

int main(){
	int m, t, s, a;
	cin >> m >> t >> s;
	a = m - (s / t + (1 - ((int)(bool)s % t)));
	cout << a << endl;
}
