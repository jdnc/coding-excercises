#include<iostream>
#include<vector>
using namespace std;

int main(){
	string bitStr;
	string::iterator it;
	int gameNum = 0;
	while(getline(cin, bitStr)){
		gameNum++;
		int count = 0;
		for(it = bitStr.begin(); it != bitStr.end();){
			if(*it == '1'){
				while(*it == '1'){
					if(it == bitStr.end()) break;
					it++;
				}
				if(it == bitStr.end()){
					count += 1;
				}
				else{
					count+=2;
				}
			}
			else
				it++;
		}
		cout <<"Game #" << gameNum <<": " << count << endl;
	}
	
}