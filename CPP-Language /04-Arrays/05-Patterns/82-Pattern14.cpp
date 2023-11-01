/*
          x x x x x
        x x x x x
      x x x x x
    x x x x x
  x x x x x
*/
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number of rows : ";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    // for spaces
    for (int j = 0; j < (n - i); j++)
      cout << "  ";

    // for stars
    for (int k = 1; k <= n; k++)
      cout << "x ";
    cout << "\n";
  }
  return 0;
}