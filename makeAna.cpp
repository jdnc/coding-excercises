#include<iostream>
#include<string>


using namespace std;
int main(){
	int lenA, lenB, minDels;
	string a,b;
	cin >> a >> b;
	lenA = a.length();
	lenB = b.length();
	int counter[26] = {0};
	for(int i = 0; i<lenA; i++)
		counter[a[i] - 'a']++;
	for(int i =0; i<lenB; i++)
		counter[b[i]-'a']--;
	minDels = 0;
	for(int i =0; i< 26; i++){
		if(counter[i] > 0)
			minDels += counter[i];
		else
			minDels -= counter[i];
	}
	cout << minDels << endl;

}