#include <conio.h>
#include <iostream>
#include <stdio.h>
using namespace std;
main ()
{
char nama [30], nim[10];
float nilai1, nilai2, nilai3, nilai4, totalnilai;
float rata,jumlah;

cout<<endl;
cout<<"Nama   : ";
gets(nama);
cout<<"NIM    : ";
cin>>nim;
cout<<endl;
cout<<"Masukkan Nilai Pemrograman Dasar Anda : "; cin>>nilai1;
cout<<"Masukkan Nilai Kalkulus Anda   : "; cin>>nilai2;
cout<<"Masukkan Nilai PTI Anda   : "; cin>>nilai3;
cout<<"Masukkan Nilai ORKOM Anda   : "; cin>>nilai4;

/* mekanisme nich */

totalnilai=(nilai1+nilai2+nilai3+nilai4);
cout<<"--------------------------------"<<endl;

rata=totalnilai/4;
        
    cout<<endl;
    cout<<"Nilai Total = "<<totalnilai<<endl;
    cout<<"Nilai Rata-rata = "<<rata<<endl;
    cout<<"-----------------------------"<<endl;
    
if    (rata >=75 && rata <=100)
    cout<<"// Lulus //"<<endl;

    else if (rata >=0 && rata <=75)

    cout<<"// Tidak Lulus //"<<endl;

    
    cout<<"--------------------------------"<<endl;
}