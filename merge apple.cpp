#include<iostream>
#include<algorithm>

using namespace std;

int a[10000];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, b = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	for(int i = 1; i < n; i++){
		a[i] += a[i - 1];
		b += a[i];
		int left = i + 1, right = n;
		while(left < right){
			int mid = (left + right) / 2;
			if(a[i] < a[mid]){
				right = mid;
			}else{
				left = mid + 1;
			}
		}
		int ai = a[i];
		for(int j = i; j < left; j++){
			a[j] = a[j + 1];
		}
		a[left - 1] = ai;
	}
	cout << b << endl;
	return 0;
}
