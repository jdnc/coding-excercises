#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main(){

	int numTasks, numRules, numK, currTask;
	cin >> numTasks >> numRules;
	queue<int> tasks;
	int * indegrees = new int[numTasks + 1];
	int * outdegrees = new int[numTasks + 1];
	int ** edges = new int * [numTasks + 1];
	for(int i =1; i<=numTasks; i++){
		indegrees[i] = 0;
		edges[i] = new int[numTasks];
	}
	{
		for(int j =1; j<=numRules; j++){
			cin >> currTask >> numK;
			tasks.push(currTask);
			outdegrees[currTask] = numK;
			int deps;
			int count = 0;
			for(int k=1; k<=numK; k++){				
				cin >> deps;
				indegrees[deps]++;
				edges[currTask][count++] = deps;
			}
		}
	}
	vector<int> ordered;
	while(!tasks.empty()){
		if (indegrees[tasks.front()] == 0){
			ordered.push_back(tasks.front());
			for(int j = 1; j<=outdegrees[tasks.front()]; j++){
				indegrees[edges[tasks.front()][j]]--;
			}
			tasks.pop();
		}
	}	
	for(vector<int>::iterator it = ordered.begin(); it != ordered.end(); it++)
		cout<< *it<< " "<<endl;
	return 0;
}