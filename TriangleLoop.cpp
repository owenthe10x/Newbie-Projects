#include <iostream>

using namespace std;

int main()
{
    cout << "WARNING!!! THIS IS MADE BY PROFFESIONAL CODER!! \n\n\n" << endl;



    int n;

    cout << "Masukkan panjang pola: ";
    cin >> n;
    cout << "Pola 1 \n";

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
           cout << endl;
    }   cout << endl;


    int n1;
    cout << "Masukkan panjang pola: ";
    cin >> n1;
    cout << "Pola 2 \n";

    for (int i1 = 1; i1 <= n1; i1++){
        for (int j1 = n1; j1 >= i1; j1--){
            cout << "*";

        }
           cout << endl;
    }   cout << endl;

    int n2;
    cout << "Masukkan panjang pola: ";
    cin >> n2;
    cout << "Pola 3 \n";

    for (int i2 = 1; i2 <= n2; i2++){
        for (int j2 = 1; j2 < i2; j2++){
            cout << " ";}
            for (int k = n2; k >= i2; k--){
                cout << "*";
            }
           cout << endl;
    }   cout << endl;


    int n3;
    cout << "Masukkan panjang pola: ";
    cin >> n3;
    cout << "Pola 4 \n";

    for (int i3 = 1; i3 <= n3; i3++){
        for (int j3 = n3; j3 > i3; j3--){
            cout << " ";}
            for (int k1 = 1; k1 <= i3; k1++){
                cout << "*";
            }
           cout << endl;
    }   cout << endl;



    int n4;
    cout << "Masukkan panjang pola: ";
    cin >> n4;
    cout << "Pola 5 \n";

    for (int i4 = 1; i4 <= n4; i4++){
        for (int j4 = n4; j4 > i4; j4--){
            cout << " ";}
        for (int k4 = 1; k4 <= (2*i4 - 1); k4++){
                cout << "*";
        }
           cout << endl;
    }


    int n5;
    cout << "Masukkan panjang pola: ";
    cin >> n5;
    cout << "Pola 6 \n";

    for (int i5 = 1; i5 <= n5; i5++){
        for (int j5 = 1; j5 < i5; j5++){
            cout << " ";}
            for (int k5 = n5; k5 >= (2*i5 - n5) ; k5--){
                cout << "*";
            }
           cout << endl;
    }   cout << endl;


    int n6;
    cout << "Masukkan panjang pola: ";
    cin >> n6;
    cout << "Pola 7 \n";

    for (int i6 = 1; i6 <= n6; i6++){
    for (int j6 = n6; j6 > i6; j6--){
            cout << " ";}
        for (int k6 = 1; k6 <= (2*i6 - 1); k6++){
                cout << "*";}
        cout << endl;
    }
    for (int i6 = 1; i6 <= n6; i6++){
        for (int j6 = 0; j6 < i6; j6++){
            cout << " ";}
        for (int k6 = n6-2; k6 >= (2*i6 - n6) ; k6--){
                cout << "*";
            }
           cout << endl;
    }   cout << endl;
    return 0;
}
