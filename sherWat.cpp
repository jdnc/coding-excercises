#include<iostream>

using namespace std;

int main(){

	long long n, k, q, x;
	cin >> n >> k >> q;
	long long* arr= new long long[n]; 
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	k = k % n;
	for(int i = 0; i<q; i++){
		cin >> x;
		x = (x - k)%n;
		if (x < 0)
			x += n;
		cout << arr[x] << endl;
	}
}