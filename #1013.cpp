#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, maiorab, maiorabc;

    cin >> a >> b >> c;

    maiorab = (a + b + abs(a - b)) / 2;
    maiorabc = (maiorab + c + abs(maiorab - c)) / 2;

    cout << maiorabc << " eh o maior" << endl;
}
