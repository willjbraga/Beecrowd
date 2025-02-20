#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int N, aux;

    cin >> N;
    aux = (N/100);

    cout << aux << " nota(s) de R$ 100,00" << endl;
    aux *= 100;
    cout << (N - aux)/50 << " nota(s) de R$ 50,00" << endl;
    
    aux += ((N - aux)/50) * 50;
    cout << (N - aux)/20 << " nota(s) de R$ 20,00" << endl;

    aux += ((N - aux)/20) * 20;
    cout << (N - aux)/10 << " nota(s) de R$ 10,00" << endl;

    aux += ((N - aux)/10) *10;
    cout << (N - aux)/5 << " nota(s) de R$ 5,00" << endl;

    aux += ((N - aux)/5) * 5;
    cout << (N - aux)/2 << " nota(s) de R$ 2,00" << endl;

    aux += ((N - aux)/2) * 2;
    cout << (N - aux)/1 << " nota(s) de R$ 1,00" << endl;
}