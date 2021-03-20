#include <iostream>
using namespace std;

bool isCorrectDate(int y, int m, int d){
	if(m < 1 || m > 12) return false;
	
	if(m == 2){
		if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)){
			if(d > 0 && d < 29){
				return true;
			}
		}
		else if(d > 0 && d < 28){
			return true;
		}
	}else if(m == 4 || m == 6 || m == 9 || m == 11){
		if(d > 0 && d < 30){
			return true;
		}
	}else{
		if(d > 0 && d < 31){
			return true;
		}
	}
	return false;
}

int main(){
	int n, y, e, f;
	cin >> n;
	y = n / 10000;
	for(int i = y; i < 10000; i++){
		int m = ((i / 10) % 10) + (i % 10) * 10;
		int d = ((i / 100) % 10) * 10 + i / 1000;
		e = i * 10000 + m * 100 + d;
		if(isCorrectDate(i, m, d) && e > n){
			break;
		}
	}
	for(int i = y; i < 10000; i++){
		if(i / 100 != i % 100) continue;
		int m = ((i / 10) % 10) + (i % 10) * 10;
		int d = ((i / 100) % 10) * 10 + i / 1000;
		f = i * 10000 + m * 100 + d;
		if(isCorrectDate(i, m, d) && f > n){
			break;
		}
	}
	cout << e << endl << f << endl;
	return 0;
}
