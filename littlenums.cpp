#define ll long long
#include<iostream>


using namespace std;


ll comb2(ll n);

int main(){
	int t;
	ll n, a;
	cin >> t;
	ll num2;
	ll numPairs;
	for (int i = 0; i< t; i++){
		cin >> n;
		numPairs = num2 = 0;
		for (ll j = 0; ll < n; ll++){
			cin   >>  a;
			if (a == 1)
				numPairs -= n - j -1;
			if (a == 2)
				num2++;
		}
		numPairs -= comb2(num2);
		numPairs += comb2(n);
		cout << numPairs << endl;
	}
}


ll comb2(ll n){
	return n*(n-1)/2;
}