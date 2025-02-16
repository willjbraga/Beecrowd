#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int X;
    double Y;

    cin >> X;
    cin >> Y;

    cout << fixed << setprecision(3);
    cout << X / Y << " km/l" << endl;
}
