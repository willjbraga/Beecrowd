#include <iostream>

using namespace std;

int main() {
    int N, aux;

    cin >> N;
    cout << N << endl; // Imprime o valor original lido

    // Cálculo das notas
    aux = N / 100;
    cout << aux << " nota(s) de R$ 100,00" << endl;
    N -= aux * 100;

    aux = N / 50;
    cout << aux << " nota(s) de R$ 50,00" << endl;
    N -= aux * 50;

    aux = N / 20;
    cout << aux << " nota(s) de R$ 20,00" << endl;
    N -= aux * 20;

    aux = N / 10;
    cout << aux << " nota(s) de R$ 10,00" << endl;
    N -= aux * 10;

    aux = N / 5;
    cout << aux << " nota(s) de R$ 5,00" << endl;
    N -= aux * 5;

    aux = N / 2;
    cout << aux << " nota(s) de R$ 2,00" << endl;
    N -= aux * 2;

    aux = N / 1;
    cout << aux << " nota(s) de R$ 1,00" << endl;

    return 0;
}
