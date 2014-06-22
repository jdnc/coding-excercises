#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class ZigZag {

public: 
  int longestZigZag(vector<int> sequence); 
};


int ZigZag::longestZigZag(vector<int> sequence) {
   if(sequence.size() < 2) 
     return 1;
   int diff = sequence[1] - sequence[0]; 
   int longestSoFar = 2;
   int currLongest = 2;
   for (int i = 2; i < sequence.size(); ++i){
     int currDiff = sequence[i] - sequence[i-1];
     if (currDiff * diff < 0) {
        currLongest += 1;
     }
     else {
        currLongest = 0;
     }
     longestSoFar = max(currLongest, longestSoFar);
     diff = currDiff;
   }
  
   return longestSoFar;

}
