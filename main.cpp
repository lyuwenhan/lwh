#include <iostream>
#include <iomanip>
using namespace std;

void f1(){
	int n, a[100];
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int i = 1;i < n;i++){
		for(int j = 0;j < 1;i++){
			if (a[j] > a[i]){
				int b = a[i];
				for(int k = i;k > j;k--){
					a[k] = a[k + 1];
				}
				a[j] = b;
			}
		}
	}
	for(int i = 0;i < n;i++){
		cout << a[i] << ' ' << endl;
	}
}
void f2(){
    double s = 0;
    int n = 0, k;
    cin >> k;
    while (s <= k){
        n++;
        s += 1.0 / n;
    }
    cout << n << endl;
}
void f3(){
	int a[20][20] = {0}, n;
	cin >> n;
	for(int i = 0; i < n; i++){
		a[i][0] = 1;
	}
	for(int i = 1; i < n; i++){
		a[i][i] = 1;
	}
	for(int i = 2; i < n; i++){
		for(int j = 1 ; j <= i; j++){
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1]; 
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0 ; j < n; j++){
			cout << setw(3) << a[i][j];
		}
		cout << endl;
	}
}
void f4(){
	int a[100][100] = {0}, n;
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = i ; j < n; j++){
			a[i][j] = j - i + 1;
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0 ; j <= i; j++){
			if (a[i][j] == 0){
				cout << setw(4) << ' ';
			}
			else{
				cout << setw(4) << a[i][j];
			}
		}
		cout << endl;
	}
}
void f5(){
	string n;
	cin >> n;
	for(int i = 0,a = 0;i <= 10;i++){
		for(int j = 0;j < 10;j++){
			if(n[j] == '?'){
				if(a = 'x')a += 10 * j;
				else a += i * j;
			}else if(a = 'x')a += 10 * j;
			else a += n[j] * j;
		}
		if(a % 11 == 0){
			cout << i << endl;
			return;
		}
	}
	cout << -1 << endl;
}
void f6(){
    double x, r = 0;
    int n = 1;
    cin >> x;
    if (x * 10 != ((int)x) * 10){
    	x *= 10;
    	for(int i = x / 10;i != 0;i /= 10){
    		n *= 10;
		}
	}
    while (x != 0){
        r = r * 10 + (int)x % 10;
        x = (int)(x / 10);
    }
    cout << r / n << endl;
}
void f7(){
	double t;
	int n;
    cin >> t >> n;
	cout << fixed << setprecision(3) << t / n << endl << n * 2 << endl;
}
bool check(int a){
	int b = a,c = 0;
	while (b != 0){
        c = c * 10 + b % 10;
        b = b / 10;
	}
	if (a == c){
		return true;
	}
	return false;
}
void f8(){
	int n, a = 0;
	cin >> n;
	for(int i = 1;i <= n;i++){
		if(check(i)){
			a++;
		}
	}
	cout << a << endl;
}
int fib1(int n){
	int a = 1, b = 1, c = 1;
	for(int i;i < n - 2;i++){
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}
int fib2(int a){
	if(a == 1 || a == 2){
		return 1;
	}
	return fib2(a - 1) + fib2(a - 2);
}
int c = 0;
void han(char a,char b,char c,int n){
	if (n == 1){
		//cout << a << " -> " << c << endl;
		c++;
	}
	else{
		han(a,c,b,n - 1);
		han(a,b,c,1);
		han(b,a,c,n - 1);
	}
}
int 10main(){
	int n;
	cin >> n;
	han('a','b','c',n);
	return 0;
}
