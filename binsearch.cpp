#include <iostream>

using namespace std;

int a[1000001] = {0};

int main(){
	ios::sync_with_stdio(false);
	int n, m, b;
	
	cin >> n >> m;
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	for(int i = 0;i < m; i++){
		cin >> b;
		int l = 0, r = n,ans = -1;
		while(l < r){
			int mid = (l + r) / 2;
			if(a[mid] > b){
				r = mid;
			}else if(a[mid] < b){
				l = mid + 1;
			}else{
				ans = mid;
				break;
			}
			//cout << l << endl; 
		}
		cout << ans << endl;
	}
	return 0;
}
