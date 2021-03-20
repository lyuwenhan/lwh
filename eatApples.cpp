#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	cout << "Today, I ate " << n << " apple";
	if(n > 1){
		cout << "s"; 
	}
	cout << "." << endl;
	return 0;
}
