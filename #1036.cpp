#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main (){

    double  A, B, C, delta, bhaskara;

    cin >> A >> B >> C;

    delta = (B*B) - (4*A*C);

    cout << fixed << setprecision(5);
    if (delta <=0 || A == 0){
        cout << "Impossivel calcular" << endl;
    }else{
        bhaskara = (-B + sqrt(delta)) / (2 * A);
        cout << "R1 = " << bhaskara << endl;
        bhaskara = (-B - sqrt(delta)) / (2 * A);
        cout << "R2 = " << bhaskara << endl;
    }
}
