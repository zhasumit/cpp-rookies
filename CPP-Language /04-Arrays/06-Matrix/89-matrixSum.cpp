#include <iostream>
using namespace std;

int main()
{
    int rowA, colA;
    cout << "Enter the rows and coloums of matrix A : ";
    cin >> rowA >> colA;
    int A[rowA][colA];
    cout << "Enter the matrix A : \n";
    for (int i = 0; i < rowA; i++)
        for (int j = 0; j < colA; j++)
            cin >> A[i][j];

    int rowB, colB;
    cout << "Enter the rows and coloums of matrix B : ";
    cin >> rowB >> colB;
    int B[rowB][colB];
    cout << "Enter the matrix B : \n";
    for (int i = 0; i < rowB; i++)
        for (int j = 0; j < colB; j++)
            cin >> B[i][j];

    if ((rowA == rowB) && (colA == colB))
    {
        int C[rowA][colA], D[rowA][colA];
        for (int i = 0; i < rowA; i++)
            for (int j = 0; j < colA; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
                D[i][j] = A[i][j] - B[i][j];
            }

        cout << "SUM of matrix A and matrix B : \n";
        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < colA; j++)
                cout << C[i][j] << " ";
            cout << "\n";
        }

        cout << "Differnce of matrix A and matrix B : \n";
        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < colA; j++)
                cout << D[i][j] << " ";
            cout << "\n";
        }
    }
    else
    {
        cout << "Rows    [A] : " << rowA << ", Rows    [B] : " << rowB << endl;
        cout << "coloums [A] : " << colA << ", coloums [B] : " << colB;
    }
    return 0;
}