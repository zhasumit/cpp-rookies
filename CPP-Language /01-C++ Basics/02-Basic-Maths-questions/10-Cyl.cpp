#include <iostream>
using namespace std;

int main()
{
    float r, h;
    cout << "Enter th radius and height of the cylinder : ";
    cin >> r >> h;

    float Barea = 3.1415f * r * r;
    cout << "Base area : " << Barea;

    float LSA = 2 * 3.1415f * r * h;
    cout << "Lateral surface area : " << LSA;

    float TSA = (2 * 3.1415f * r) * (r + h);
    cout << "Total surface area : " << TSA;

    float volume = 3.1415f * r * r * h;
    cout << "Volume : " << volume;
    return 0;
}