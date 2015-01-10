#include <iostream>

using namespace std;

void print_fact(int n)
{
  int arr[200];
  arr[0] = 1;
  for (int i = 1; i < 200; ++i)
    arr[i] = 0;
  int limit = 0;
  for (int i = 2; i <= n; ++i) {
    int tmp = 0;
    for (int j = 0; j < 200; ++j) {
      int result = arr[j] * i;
      arr[j] = (result + tmp) % 10;
      tmp = (result + tmp) /10;
    }
  }
  limit = 199;
  while (arr[limit] == 0) limit--;
  for(; limit >= 0; --limit)
    cout << arr[limit]; 
}

int main(int argc, char* argv[])
{ 

  int t, n;
  cin >> t;
  for (int i = 0; i < t; ++i) {
    cin >> n;
    print_fact(n);
    cout << endl;
  }
  return 0;
}
