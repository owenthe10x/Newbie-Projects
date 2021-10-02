#include <iostream>

using namespace std;

//fungsi dapat di prototipe-kan, yaitu fungsi ditaro dibawah program dan prototipenya diatas program
//ini adalah prototipe dari fungsi asli volumebalok dibawah
double volumebalok(double p1=1, double l1=1, double t1=1);
//kenapa =1? itu merupakan default argument yang berarti jika nilai p1/l1/t1 tidak dimasukkan, akan digantikan dengan
//1 karena kalo tidak digantikan akan error. default argument dapat diubah tidak harus 1.

int kuadrat(int x){
    int y;
    y = x*x;

    return y;
}
int tambah(int a, int b){
    int c;
    c = a+b;

    return c;
}
int kubik(int p){
    int q;
    q = p*p*p;

    return q;
}
void show(int input1){
    cout << "Yang ditampilkan void:\n";
    cout << input1 << endl;
}
//void adalah fungsi yg tidak mengembalikan apapun dan hanya mengerjakan sehingga berbeda dengan fungsi yang
//menggunakan 'return'



double luaspp(double p, double l){
    double luas;
    luas = p * l;
    return luas;

}
double kelilingpp(double p,double l){
    double keliling;
    keliling = 2*(p+l);
    return keliling;
}
void showluas(double p, double l){
    cout<< "Shown by Void\n";
    cout <<luaspp(p,l)<<endl;
}
void showkeliling(double p,double l){
    cout<<kelilingpp(p,l)<<endl;
}
int main()
{
    int input, hasil;
    cout << "PROGRAM MENGHITUNG LUAS & KELILING PERSEGI PANJANG\n\n";
    cout << "Masukkan nilai yang ingin dikuadratkan: ";
    cin >>input;

    hasil = kuadrat(input);
    cout << hasil << endl;

    int a,b,hasil1;
    cout << "Program penjumlahan\n"<< endl;
    cout<<"masukkan nilai ke-1: ";
    cin >> a;
    cout << "Masukkan nilai ke-2: ";
    cin>>b;

    hasil1 = tambah(a,b);
    cout <<hasil1<<endl<<endl;

    int p,q;
    cout <<"Masukkan nilai yang ingin dikubikkan: ";
    cin >> p;

    q = kubik(p);
    show(q);

    double panjang, lebar;
    cout <<"Panjang: ";
    cin >> panjang;
    cout << "Lebar: ";
    cin >> lebar;

    luaspp(panjang, lebar);
    kelilingpp(panjang,lebar);

    showluas(panjang,lebar);
    showkeliling(panjang,lebar);


    //penerapan fungsi volumebalok
    cout << "Volumenya: " << volumebalok(3,9,2) << endl;
    cout << "Volumenya: " << volumebalok(3,9) << endl;
    cout << "Volumenya: " << volumebalok(3) << endl;
    cout << "Volumenya: " << volumebalok() << endl;

    return 0;
}

//ini adalah fungsi asli dari prototipe volumebalok diatas
double volumebalok(double p1, double l1, double t1){
    double volume;
    volume = p1*l1*t1;
    return volume;
    }
