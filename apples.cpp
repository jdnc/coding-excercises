#include<iostream>
#include<algorithm>
#include<map>

using namespace std;
long getTime(long i, long j, long size);

int main(int argc, char const *argv[])
{
	long N, K, tmp;
	multimap<long, long> index;
	multimap<long, long> :: iterator it;
	cin >> N >> K;
	long minTime = N + 1;
	long * types = new long[N];
	for (long  i = 0; i< N; i++){
		cin >> tmp;
		types[i] = tmp;
	}
	for(long i = 0; i < N; i++){
		index.insert(pair<long, long>(types[i], i));
	}
	for (long i = 0; i < N; i++){
		it = index.find(K - types[i]);
		if (it == index.end() || it->first == types[i] || it->second == i)
			continue;
		else{
			minTime = min(minTime, getTime(i, it->second, N));
		}
	}
	if (minTime == N+1)
		cout << "-1" << endl;
	else
		cout << minTime << endl;
	return 0;
}

long getTime(long i, long j, long size){
	long dist1 = max(i + 1, j + 1);
	long dist2 = max(size - i, size - j );
	long minI = min(i, j);
	long maxI = max(i, j);
	long dist3 = max(minI + 1, size - maxI);
	long minTime = dist1;
	if (minTime > dist2)
		minTime = dist2;
	if (minTime > dist3)
		minTime = dist3;
	return minTime;
}
