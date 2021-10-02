#include <iostream>
using namespace std;

int main(){
      double c,f,k,r;

    cout << "Temperature Converter Program from Celcius";
    cout << "\n Enter temperature: ";
    cin >> c;
    f =  (9/5 * c) + 32;
    k = 273 + c;
    r = (4/9 * c) + 32;
    cout << "\n Temperature in Celcius: " << c;
    cout << "\n Temperature in Fahrenheit: " << f;
    cout << "\n Temperature in Kelvin: " << k;
    cout << "\n Temperature in Reamur: " << r;

    return 0;
}