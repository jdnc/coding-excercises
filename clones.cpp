#include<iostream>
#include<map>

using namespace std;

int main(){
	int numPeople, seqLen;
	
	while(true){
		cin >> numPeople >> seqLen;
		if (!(numPeople && seqLen))
			break;
		string sample;
		map<string, int> clones;
		map<string, int> :: iterator it;
		int * countArr = new int[numPeople + 1];
		for(int i = 1; i<= numPeople; i++)
			countArr[i] = 0;
		for(int i = 0; i<numPeople; i++){
			cin >> sample;
		    it = clones.find(sample);
		    if(it == clones.end())
		    	clones[sample] = 1;
		    else
		    	clones[sample]++;
		}
		for (it = clones.begin(); it != clones.end(); it++)
			countArr[it->second]++;
		for(int i = 1; i<=numPeople; i++)
			cout << countArr[i] << endl;
		delete[] countArr;
	}

	return 0;
}

























































































































































































