#include<iostream>
#include<algorithm>
#include<map>


using namespace std;

int main(int argc, char const *argv[])
{
	int N, Q;
	cin >> N;
	long tmp, K;
	long * arr = new long[N];
	for(int i = 0; i < N; i++){
		cin >> tmp;
		arr[i] = tmp;
 	}
 	long ** dynArr = new long * [N];
 	for(int i = 0; i < N; i++)
 		dynArr[i] = new long[N];
 	for (int i = 0; i< N; i++){
 		dynArr[i][i] = arr[i];	
 	}
 	for (int i = 0; i< N; i++){
 		for (int j = i+1; j < N; j++){
 			dynArr[i][j] = min(dynArr[i][j-1], arr[j]);
 		}
 	}
 	map<long, int> counter;
 	map<long, int> :: iterator it;
 	for(int i = 0; i< N; i++){
 		for (int j = i; j< N; j++){
 			it = counter.find(dynArr[i][j]);
 			if (it == counter.end())
 				counter[dynArr[i][j]] =  1;
 			else
 				counter[dynArr[i][j]] += 1;
 		}
 	}
 	cin >> Q;
 	for(int i = 0; i < Q; i++){
 		cin >> K;
 		it = counter.find(K);
 		if(it == counter.end())
 			cout  << 0 << endl;
 		else
 			cout << it->second << endl;
 	}
	return 0;
}