#include <iostream>

using namespace std;

int main(){
	int n, m, lcm;
	cin >> n >> m;
	lcm = n * m;
	while((n %= m) && (m %= n));
	int gcm = n + m;
	lcm /= gcm;
	cout << lcm + 1 << endl;
	return 0;
}
