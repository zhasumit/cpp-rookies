// given row and col find the element => nCr
// (n! / (r! * (n-r)!))

#include <bits/stdc++.h>
using namespace std;
// =======================================================================
int factorial(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

int brute_force_combination(int n, int r)
{
    return (factorial(n) / (factorial(r) * factorial(n - r)));
}

// =======================================================================

// Optimal approach for finding the combination after removing
// =======================================================================

// since the n-r factorial somehow removes the upper part of n!
// O9r
int nCr(int n, int r)
{
    long long res = 1;
    for (int i = 0; i < r; i++)
    {
        // everytime numerator is multiplied by n-1 (10 x 9 x 8 x 7 ...)
        res = res * (n - i);
        // everytime denominator is multilied by n+1 (1 x 2 x 3 x 4 ...)
        res = res / (i + 1);
    }
    return res;
}

// =======================================================================