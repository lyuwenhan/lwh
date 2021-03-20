#include <iostream>
#include <string>
using namespace std;
int main(){
	string a, month = "", day;
	int m, d;
	cin >> a;
	for(int i = 0; i < 3; i++){
		month += a[i];
	}
	day = a[3];
	day += a[4];
	if(month == "Jan"){
		m = 1;
	}
	else if(month == "Feb"){
		m = 2;
	}
	else if(month == "Mar"){
		m = 3;
	}
	else if(month == "Apr"){
		m = 4;
	}
	else if(month == "May"){
		m = 5;
	}
	else if(month == "Jun"){
		m = 6;
	}
	else if(month == "Jul"){
		m = 7;
	}
	else if(month == "Aug"){
		m = 8;
	}
	else if(month == "Sep"){
		m = 9;
	}
	else if(month == "Oct"){
		m = 10;
	}
	else if(month == "Nov"){
		m = 11;
	}
	else if(month == "Dec"){
		m = 12;
	}
	d = (int)(a[3] - '0') * 10 + (int)(a[4] - '0');
	cout << m << ' ' << d << endl;
}
