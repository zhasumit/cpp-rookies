/*
        x
      x x x
    x x x x x
  x x x x x x x
x x x x x x x x x
x x x x x x x x x
  x x x x x x x
    x x x x x
      x x x
        x
*/
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the heigth of the pattern : ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = n - i; j >= 1; j--)
      cout << "  ";
    for (int j = 1; j <= 2 * i - 1; j++)
      cout << "x ";
    cout << "\n";
  }
  for (int i = n; i >= 1; i--)
  {
    for (int j = n - i; j >= 1; j--)
      cout << "  ";

    for (int j = 1; j <= 2 * i - 1; j++)
      cout << "x ";
    cout << "\n";
  }
  return 0;
}