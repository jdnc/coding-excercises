#include<iostream>
#include<algorithm>

using namespace std;

 struct node{
 	int data;
 	node * left;
 	node * right;
 };

bool isComplete(node * root);
int height(node * root);


 bool isComplete(node * root){
 	if (root == NULL)
 		return true;
 	if (height(root->right) > height (root->left))
 		return false;
 	return isComplete(root->left) && isComplete(root->right);
 }

 int height(node * root){
 	if (root == NULL)
 		return 0;
 	return max(height(root->left), height(root->right)) + 1;

 }

 int main(){

 	return 0;
 }