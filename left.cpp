#include <iostream>
#include <string>

using namespace std;

int main(){
	int dir = 0,n;
	string cmd;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> cmd;
		if(cmd == "left"){
			dir += 3;
		}
		else if(cmd == "right"){
			dir += 1;
		}
		else if(cmd == "around"){
			dir += 2;
		}
		dir = dir % 4;
	}
	char a[4] = {'N','E','S','W'};
	cout << a[dir] << endl;
	return 0;
} 
