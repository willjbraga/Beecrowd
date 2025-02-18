#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int tempo, velocidade;

    cin >> tempo >> velocidade;

    cout << fixed << setprecision(3);
    cout << (float(tempo * velocidade) / 12) << endl;
}
