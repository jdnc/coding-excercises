#include<iostream>
#include<string>
#include<set>

using namespace std;

int main(){
	int numTests;
	cin >> numTests;
	for(int i = 0; i < numTests;  i++){
		string s1, s2;
		int maxLen = 0;
		cin >> s1 >> s2;
		multiset<char> set1;
		multiset<char> :: iterator itm;
		string::iterator it1;
		for(it1 = s1.begin(); it1 != s1.end(); it1++)
			set1.insert(*it1);
		for(it1 = s2.begin(); it1 != s2.end(); it1++){
			itm = set1.find(*it1);
			if (itm == set1.end())
				continue;
			else{
				set1.erase(itm);
				maxLen++;
			}
		}
		cout << maxLen << endl;
	}

}