#include <iostream>
#include <string>

using namespace std;

int main(){
	int a, b, t,sumA = 0,i = 1;
	cin >> a >> b >> t;
//	sumA += a;

	while(true) {
		if (sumA + a >= t) {
			//xxx
		}
		if (b * i + b >= t) {
			//xx
		}
 	}
	for(;!(sumA + a >= t || b * i + b >= t);i++){
		if(sumA <= b * i){
			sumA += a;
		}
		cout << sumA << ' ' << b * i << endl;
	}
	if(sumA == b * i){
		cout << "tongshi" << endl;
	} 
	else if((t - sumA) > b * i){
		cout << "tuzi" << endl;
	}
	else{
		cout << "wugui" << endl;
	}
	return 0;
}  

