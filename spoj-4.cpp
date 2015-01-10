#include <iostream>
#include <stack>
#include <string>

using namespace std;

int getPriority(char op)
{
  if(op == '+' || op == '-') return 1;
  if (op == '*' || op == '/') return 2;
  if (op == '^') return 3;
  return 0;
}

void convertToRpn(string expr)
{
  stack<char> opStack;
  stack<char> varStack;
  string output;
  string::iterator it;
  for (it = expr.begin(); it != expr.end(); ++it) {
    if ((*it >= 'a' && *it <= 'z') || *it == '(')
      varStack.push(*it);
    else if (*it == ')') {
      while (varStack.top() != '(') {
	output.push_back(varStack.top());
	varStack.pop();
	output.push_back(varStack.top());
	varStack.pop();
	output.push_back(opStack.top());
	opStack.pop();
      }
    }
    else if (*it == '+' || *it == '*' || *it == '/' || *it == '-' || *it == '^'){
      char incomingOp = *it;
      while(!opStack.empty() && getPriority(incomingOp) >= getPriority(opStack.top())){
	output.push_back(varStack.top());
	varStack.pop();
	output.push_back(varStack.top());
	varStack.pop();
	output.push_back(opStack.top());
	opStack.pop();
      }
      opStack.push(*it);
    }
  }
  while(!opStack.empty()) {
      output.push_back(varStack.top());
      varStack.pop();
      output.push_back(varStack.top());
      varStack.pop();
      output.push_back(opStack.top());
      opStack.pop();
  }
  cout << output;
  return;
}

int main(int argc, char* argv[])
{
  int numTests;
  string expr;
  cin >> numTests;
  for (int i = 0; i < numTests; ++i) {
    getline(cin, expr);
    convertToRpn(expr);
    cout << endl;
  }
  return 0;
}
