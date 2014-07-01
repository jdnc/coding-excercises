#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main() {

  ll scenarios;
  ll numStamps;
  ll numFriends;
  cin >> scenarios;
  for(ll i = 0; i< scenarios; i++) { 
    cin >> numStamps >> numFriends;
    vector<ll> stamps;
    for (ll j = 0; j< numFriends; j++) {
       ll n;
       cin >> n;
       stamps.push_back(n);
    }
    std::sort(stamps.begin(), stamps.end(), std::greater<ll>());
    ll sum = 0;
    ll count = 0;
    for (vector<ll>::iterator it = stamps.begin(); it != stamps.end(); ++it) {
       if (sum >= numStamps) break;
       sum += *it;
       ++count;
    }
    cout << "Scenario #" << i + 1 << ":" << endl;
    if (sum < numStamps) 
        cout << "impossible" << endl;
    else 
        cout << count << endl;
    cout << endl;
   }
  return 0;
}
