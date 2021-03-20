#include<iostream>
using namespace std;
int main(){
    int a, b, aa, bb;
    aa = bb = 0;
    cin >> a >> b;
    while(a > 0){
    	aa *= 10;
    	aa += a % 10;
    	a /= 10;
	}
    while(b > 0){
    	bb *= 10;
    	bb += b % 10;
    	b /= 10;
	}
	cout << max(aa, bb) << endl;
}
