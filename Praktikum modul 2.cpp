#include <iostream>
#include <stdlib.h>
#include <conio.h>
const float phi=3.14;
using namespace std;
 
int main()
{
    int iter=0, pil, a, b, c, d;
    float volum, luas;
    bool loop=true;
    while(loop)
    {
        system("cls");
        cout << endl;
        cout << ">> Pilihan Menu Arian Belajar Menghitung: "<< endl;
        cout << "1) Kubus "<< endl;
        cout << "2) Balok"<< endl;
        cout << "3) Limas segi empat"<< endl;
        cout << "4) Tabung"<< endl;
        cout << "0) Keluar dari program"<< endl;
        cout << endl;
        cout << "Silahkan masukkan angka pilihan anda: ";
        cin >> pil;  
switch(pil)
    {
    case 1:
        cout << "Perhitungan Volume dan Luas Permukaan Kubus" << endl;
        cout << "Panjang rusuk kubus = ";
        cin >> a;
        volum = a*a*a;
        luas = a*a*6;
        cout << "Volume Kubus = " << volum << endl;
        cout << "Luas permukaan Kubus = " << luas << endl;
        break;
    case 2:
        cout << "Perhitungan Volume dan Luas Permukaan Balok" << endl;
        cout << "Panjang balok = ";
        cin >> a;
        cout << "Lebar balok = ";
        cin >> b;
        cout << "Tinggi balok = ";
        cin >> c;
        volum = a*b*c;
        luas = ((a * b) + (b * c) + (c * a)) * 2;
        cout << "Volume Balok= " << volum << endl;
        cout << "Luas permukaan Balok= " << luas << endl;
        break;
    
    case 3:
        cout << "Perhitungan Volume dan Luas Permukaan Limas Segi Empat" << endl;
        cout << "Panjang alas limas = ";
        cin >> a;
        cout << "Lebar alas limas = ";
        cin >> b;
        cout << "Tinggi limas = ";
        cin >> c;
        volum = (a * b * c * 1/3);
        luas = ((a + b) * c) + (a * b);
        cout << "Volume Limas Segi empat= " << volum << endl;
        cout << "Luas permukaan segi empat= " << luas << endl;
        break;
    case 4:
        cout << "Perhitungan Volume dan Luas Permukaan Tabung" << endl;
        cout << "Panjang jari-jari alas tabung = ";
        cin >> a;
        cout << "Tinggi tabung = ";
        cin >> b;
        volum = phi * a * a * b;
        luas = (phi * a * 2) * (b * a);
        cout << "Volume Tabung = " << volum << endl;
        cout << "Luas permukaan Tabung = " << luas << endl;
        break;
    case 0:
        loop = false;
        break;
    }
 
    cout << endl << "Tekan enter untuk kembali ke menu awal" << endl;
    return 0;
 
    getch(); }
}