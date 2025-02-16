#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int code, peca, code2, peca2;
    float valor, valor2;

    cin >> code >> peca >> valor;
    cin >> code2 >> peca2 >> valor2;

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << (peca * valor) + (peca2 * valor2) << endl;
}
