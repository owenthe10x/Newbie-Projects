#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main (){
    short int warna;
    char perpaduan;

    cout << "---------------------------------------------------------------------------" << endl;
    cout << "\tNama\t:\tOwen Tobias Sinurat" << endl;
    cout << "\tNIM\t:\t123210054" << endl;
    cout << "---------------------------------------------------------------------------" << endl;

    cout << "Program Menentukan Notasi, Sifat Warna, dan Perpaduan Warna Harmonis\nWarna-warna:" << endl;
    cout << "1. Orange\t\t2. Red-Orange\t\t3. Red" << endl;
    cout << "4. Red-Violet\t\t5. Violet\t\t6. Blue-Violet" << endl;
    cout << "7. Blue\t\t\t8. Blue-Green\t\t9. Green" << endl;
    cout << "10. Yellow-Green\t11. Yellow\t\t12. Yellow-Orange" << endl;

    cout << "\nPilihan warna nomor : ";
    cin >> warna;

    if(warna == 1 || warna == 5){
        cout << "\nNotasi warna : Sekunder" << endl;
        cout << "Sifat warna : Hangat";
    }else if(warna == 2 || warna == 4 || warna == 6){
        cout << "\nNotasi warna : Tersier" << endl;
        cout << "Sifat warna : Hangat";
    }else if(warna == 3){
        cout << "\nNotasi warna : Primer" << endl;
        cout << "Sifat warna : Hangat";
    }else if(warna == 7 || warna == 11){
        cout << "\nNotasi warna : Primer" << endl;
        cout << "Sifat warna : Sejuk";
    }else if(warna == 9){
        cout << "\nNotasi warna : Sekunder" << endl;
        cout << "Sifat warna : Sejuk";
    }else if(warna == 8 || warna == 10 || warna ==12){
        cout << "\nNotasi warna : Tersier" << endl;
        cout << "Sifat warna : Sejuk";
    }else{
        cout << "Tolong masukkan kode warna yang benar!\n";
    }
    
    if(warna > 0 && warna < 13){
    cout << "Perpaduan Warna Harmonis" << endl;
    cout << "a. Perpaduan Warna Analogous" << endl;
    cout << "b. Perpaduan Warna Complementary" << endl;
    cout << "c. Perpaduan Warna Split Complementary" << endl;
    cout << "d. Perpaduan Warna Triadic Complementary" << endl;
    cout << "e. Perpaduan Warna Tetrad Complementary" << endl;
    cout << "Pilihan : ";
    cin >> perpaduan;

    switch(perpaduan){
        case 'a':
        cout << "\nPerpaduan Warna Analogous dengan warna nomor :\n";
        if(warna == 1){
            cout << warna+10 << "," << warna+11 << " atau " << warna+11 << "," << warna+1 << " atau " << warna+1 << "," << warna+2;    
        }else if(warna == 2){
            cout << warna+10 << "," << warna-1 << " atau " << warna-1 << "," << warna+1 << " atau " << warna+1 << "," << warna+2;
        }else if(warna == 11){
            cout << warna-2 << "," << warna-1 << " atau " << warna-1 << "," << warna+1 << " atau " << warna+1 << "," << warna-10;
        }else if(warna == 12){
            cout << warna-2 << "," << warna-1 << " atau " << warna-1 << "," << warna-11 << " atau " << warna-11 << "," << warna-10;
        }else {
        cout << warna-2 << "," << warna-1 << " atau " << warna-1 << "," << warna+1 << " atau " << warna+1 << "," << warna+2;
        }
        break;

        case 'b':
        cout << "\nPerpaduan Warna Complementary dengan warna nomor :\n";
        if(warna < 7){
            cout << warna+6;
        }else{
            cout << warna-6;
        }
        break;

        case 'c':
        cout << "\nPerpaduan Warna Split Complementary dengan warna nomor :\n";
        if(warna == 6 || warna == 7){
            cout << warna-5 << "," << warna+5;
        }else if(warna == 8){
            cout << warna-5 << "," << warna-7;
        }else if(warna < 6){
            cout << warna+5 << "," << warna+7; 
        }else{
            cout << warna-5 << "," << warna-7;
        }
        break;

        case 'd':
        cout << "\nPerpaduan Warna Triadic Complementary dengan warna nomor :\n";
        if(warna > 8){
            cout << warna-4 << "," << warna-8;
        }else if(warna > 4){
            cout << warna+4 << "," << warna-4;
        }else{
            cout << warna+4 << "," << warna+8;
        }
        break;

        case 'e':
        cout << "\nPerpaduan Warna Tetrad Complementary dengan warna nomor :\n";
        if(warna > 9){
            cout << warna-3 << "," << warna-6 << "," << warna-9;
        }else if(warna > 6){
            cout << warna+3 << "," << warna-3 << "," << warna-6;
        }else if(warna > 3){
            cout << warna+6 << "," << warna+3 << "," << warna-3;
        }else{
            cout << warna+9 << "," << warna+6 << "," << warna+3;
        }
        break;

        default:
        cout << "\nTolong masukkan kode perpaduan yang benar!!";
    }
    }
    return 0;
}
