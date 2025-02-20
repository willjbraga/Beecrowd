#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main (){

    float N;

    cin >> N;

    N *= 100;

    cout << "NOTAS:" << endl;
    cout << int(N/10000) << " nota(s) de R$ 100.00" << endl;
    N = fmod(N,10000);

    cout << int(N/5000) << " nota(s) de R$ 50.00" << endl;
    N = fmod(N,5000);

    cout << int(N/2000) << " nota(s) de R$ 20.00" << endl;
    N = fmod(N,2000);

    cout << int(N/1000) << " nota(s) de R$ 10.00" << endl;
    N = fmod(N,1000);

    cout << int(N/500) << " nota(s) de R$ 5.00" << endl;
    N = fmod(N,500);

    cout << int(N/200) << " nota(s) de R$ 2.00" << endl;
    N = fmod(N,200);

    cout << "MOEDAS:" << endl;
    cout << int(N/100) << " moeda(s) de R$ 1.00" << endl;
    N = fmod(N,100);

    cout << int(N/50) << " moeda(s) de R$ 0.50" << endl;
    N = fmod(N,50);

    cout << int(N/25) << " moeda(s) de R$ 0.25" << endl;
    N = fmod(N,25);

    cout << int(N/10) << " moeda(s) de R$ 0.10" << endl;
    N = fmod(N,10);

    cout << int(N/5) << " moeda(s) de R$ 0.05" << endl;
    N = fmod(N,5);

    cout << int(N/1) << " moeda(s) de R$ 0.01" << endl;
    N = fmod(N,1);
}
