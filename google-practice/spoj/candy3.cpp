#include<iostream>
#define ll long long
using namespace std;

int main() {

  ll n;
  ll t;
  ll x;
  cin >> t;
  for (ll k = 0; k<t ; k++) {
	  ll sum = 0;
	  cin >> n;
	  for (ll i = 0; i < n; ++i) {
	     cin >> x;
	     sum = (sum + x) % n
	  }
	  if (sum % n == 0)
	    cout << "YES" << endl;
	  else 
	    cout << "NO" << endl;
  } 
  return 0;

}
