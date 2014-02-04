#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main(){
 	int numFriends;
 	int N;
 	int id;
 	int count = 0;
 	set<int> bobFriends, allFriends;
 	cin >> numFriends;
 	for(int i = 0; i< numFriends; i++){
 		cin >> id;
 		bobFriends.insert(id);
 		cin >> N;
 		for (int j =0; j < N; j++){
 			cin >> id;
 			allFriends.insert(id);
 		}	
 	}
 	set<int> :: iterator its, itv;
 	for(itv = allFriends.begin(); itv != allFriends.end(); itv++){
 		its = bobFriends.find(*itv);
 		if (its == bobFriends.end())
 			count++;
 	}

 	cout << count << endl;
	return 0;
}