#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int N, horas, minutos, segundos;

    cin >> N;

    horas = (N/60)/60;
    minutos = (N/60) - (horas * 60);
    segundos = N - ((horas * 60 * 60) + (minutos * 60));

    cout << horas <<":"<< minutos << ":" << segundos << endl;
}
