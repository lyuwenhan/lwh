#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a = n % 400 == 0 || (n % 4 == 0 && n % 100 != 0);
	cout << a << endl;
	return 0;
}
