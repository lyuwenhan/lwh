#include<iostream>
#include<algorithm>
using namespace std;

struct p{
	string name;
	int age;
	int score;
};

int main(){
	double m, h;
	cin >> h >> m;
	double ans = h / (m * m);
	if(ans < 18.5){
		cout << "Underweight"; 
	}
	else if(ans < 24){
		cout << "Normal"; 
	}
	else{
		cout << ans << endl;
		cout << "Overweight"; 
	}
	cout << endl;
}
