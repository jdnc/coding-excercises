#include<iostream>
#include<string>

using namespace std;

class MagicalStringDiv2{
public:
	int minimalMoves(string s){
		int steps =0;
		for(int i = 0; i<s.length()/2; i++)
			if (s[i] == '>')
				steps++;
		for(int i = 0; i<s.length()/2; i++)
			if (s[i] == '<')
				steps++;
		return steps;
	}
}