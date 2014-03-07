//#define long long long long
#include<iostream>


using namespace std;


long long comb2(long long n);

int main(){
	int t;
	long long n, a;
	cin >> t;
	long long num2;
	long long numPairs;
	for (int i = 0; i< t; i++){
		cin >> n;
		numPairs = num2 = 0;
		for (long long j = 0; long long < n; long long++){
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


long long comb2(long long n){
	return n*(n-1)/2;
}