#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    double R;

    cin >> R;
    cout << fixed << setprecision(3);
    cout << "VOLUME = " << (4.0/3) * 3.14159 * (R * R * R) << endl;
}
