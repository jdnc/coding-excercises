#include<iostream>
#include<string>

using namespace std;

int gcd (int a, int b);

int main(){
	int numTests;
	cin >> numTests;
	string s;
	for(int i = 0; i< numTests; i++){
		cin >> s;
		int num = 0;
		int mult = 10;
		int decPlaces = 1;
		bool seen = false;
		for(string::iterator it = s.begin(); it != s.end(); it++){
			if(seen)
				decPlaces *= 10;
			if (*it  == '.'){
				seen = true;
			}
			else{
				num = num * mult + (*it - '0');
			}

		}
		cout << decPlaces / gcd(num, decPlaces) << endl;
	}

	return 0;
}

int gcd(int a, int b){
	if(b == 0)
		return a;
	return gcd (b, a%b);
}