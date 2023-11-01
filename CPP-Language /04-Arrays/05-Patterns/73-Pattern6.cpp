/*
x x x x x
  x x x x
    x x x
      x x
        x
*/
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the height of the tree : ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
      if (i > j)
        cout << "  ";
      else
        cout << "x ";
    cout << "\n";
  }
  return 0;
}