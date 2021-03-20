#include <iostream>
using namespace std;

int main2(){
    int ls[100] = {0};
    for(int i = 0, a;true;i++){
        cin >> a;
        if (a == 0){
            break;
        }
        ls[i] = a;
    }
    for(int i = 99;i >= 0;i--){
    	if (ls[i] != 0){
    		cout << ls[i] << ' ';
    	}
    }
}
