#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main(){
	int numTests;
	cin >> numTests;
	for(int i = 0; i < numTests;  i++){
		string s1, s2;
		int maxLen = 0;
		cin >> s1 >> s2;
		vector<string *>  suffix1;
		vector<string *> suffix2;
		sort(s1.begin(), s1.end());
		sort(s2.begin(), s2.end());
		for (int i = 0; i< s1.length(); i++)
			suffix1.push_back(&s1[i])
		for (int i = 0; i< s2.length(); i++)
			suffix2.push_back(&s2[i]);
		sort(suffix1.begin(), suffix1.end());
		sort(suffix2.begin(), suffix2.end());
		for(int i = 0; i<s1.length() && i < s2.length(); i++){
			if(suffix1[i] == suffix2[i]){
				if (suffix1[i]->length() > maxLen)
					maxLen = suffix1[i]->length();
			}
		}
		while(i < s1.length()){
			if(suffix1[i] == suffix2[s2.length() - 1]){
				if (suffix1[i]->length() > maxLen)
					maxLen = suffix1[i]->length();
			}
			i++;
		}
		while(i < s2.length()){
			if(suffix2[i] == suffix1[s1.length() - 1]){
				if (suffix2[i]->length() > maxLen)
					maxLen = suffix2[i]->length();
			}
			i++;
		}
		cout << maxLen << endl;

	}

}