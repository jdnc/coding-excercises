#include<iostream>
#include<algorithm>

/*
 * Improvement : make tree a template class
 * complexity ???
*/

using namespace std;

class Tree {

public:
  Tree* left;
  Tree* right;
  int val;
  
  int getHeight();
  int getLongestPath();

  static int longestPath = 0;
};

Tree::Tree(){
  left = NULL;
  right = NULL;
  val = 0;
}

int Tree::getHeight(){
    if(this == NULL)
       return 0;
    return max(left.getHeight(), right.getHeight()) + 1;
}

void Tree::getLongestPath(){
     if (this == NULL)
         return;
     int path = left.getHeight() + right.getHeight() + (left != NULL) + (right != NULL);
      if (longestPath < path)
         longestPath = path;
      return;  
}
