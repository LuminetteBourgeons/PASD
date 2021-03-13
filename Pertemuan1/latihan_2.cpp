/*
  Let’s Explore Program menghitung:
    Luas Persegi
    Keliling Persegi
    Luas + Keliling Persegi

    Luas Jajar Genjang
    Keliling Jajar Genjang
    Luas + Keliling JG

    Luas Segitiga
    Keliling Segitiga
    Luas + Keliling Segitiga

    Luas Lingkaran
    Keliling Lingkaran
    Luas + Keliling Lingkaran
*/

#include <iostream>
#define phi 3.14

using namespace std;

float persegi();
float jajar_genjang();
float segitiga();
float lingkaran();
float luas, keliling, lk;

int main()
{
    int pilihan;
    
    cout<<"Pilihan bangun datar:"<<endl;
    cout<<"1. Persegi"<<endl;
    cout<<"2. Jajar genjang"<<endl;
    cout<<"3. Segitiga"<<endl;
    cout<<"4. Lingkaran"<<endl;
    cout<<endl;
    
    cout<<"Masukan Pilihan : ";
    cin>>pilihan;
    if (pilihan > 4 || pilihan < 1)     
    {
        cout<<"Kode yang Anda masukkan tidak tersedia, silahkan masukkan ulang kode :";
        return main();
    }
    else
    {
    cout<<endl;
    cout<<endl;
    switch(pilihan)
    {
            case 1 : persegi();
                    break;
            case 2 : jajar_genjang();
                    break;
            case 3 : segitiga();
                    break;
            case 4 : lingkaran();
                    break;
    }
    }
}

float persegi()
{
    float sisi;
    cout<<"Masukkan panjang sisi: ";
    cin>>sisi;
    luas = (sisi*sisi);
    keliling = (4*sisi);
    lk=(luas+keliling);
    cout<<endl;
    cout<<"Luas persegi dengan sisi "<<sisi<<" adalah "<<luas<<endl;
    cout<<"Keliling persegi dengan sisi "<<sisi<<" adalah "<<keliling<<endl;
    cout<<"Luas + keliling persegi = "<<lk<<endl;
    return 0;
}

float jajar_genjang()
{
    float alas, tinggi, sisi_miring;
    cout<<"Masukkan panjang alas: ";
    cin>>alas;
    cout<<"Masukkan panjang tinggi: ";
    cin>>tinggi;
    cout<<"Masukkan panjang sisi miring: ";
    cin>>sisi_miring;
    luas = (alas*tinggi);
    keliling = (2*(alas+sisi_miring));
    lk=(luas+keliling);
    cout<<endl;
    cout<<"Luas jajar genjang dengan alas "<<alas<<" dan tinggi "<<tinggi<<" adalah "<<luas<<endl;
    cout<<"Keliling jajar genjang dengan alas "<<alas<<" dan sisi miring "<<sisi_miring<<" adalah "<<keliling<<endl;
    cout<<"Luas + keliling jajar genjang = "<<lk<<endl;
    return 0;
}

float segitiga()
{
    float alas, tinggi, a, b, c;
    cout<<"Masukkan panjang alas: ";
    cin>>alas;
    cout<<"Masukkan panjang tinggi: ";
    cin>>tinggi;
    cout<<"Masukkan panjang sisi a: ";
    cin>>a;
    cout<<"Masukkan panjang sisi b: ";
    cin>>b;
    cout<<"Masukkan panjang sisi c: ";
    cin>>c;
    luas = (alas*tinggi)/2;
    keliling = (a+b+c);
    lk=(luas+keliling);
    cout<<"Luas segitiga dengan alas "<<alas<<" dan tinggi "<<tinggi<<" adalah "<<luas<<endl;
    cout<<"Keliling segitiga dengan sisi a "<<a<<", sisi b "<<b<<", dan sisi c "<<c<<" adalah "<<keliling<<endl;
    cout<<"Luas + keliling segitiga = "<<lk<<endl;
    return 0;
}

float lingkaran()
{
    float r;
    cout<<"Masukkan panjang jari-jari [r]: ";
    cin>>r;
    luas = (phi*r*r);
    keliling = (2*phi*r);
    lk=(luas+keliling);
    cout<<"Luas lingkaran dengan jari-jari "<<r<<" adalah "<<luas<<endl;
    cout<<"Keliling lingkaran dengan jari-jari "<<r<<" adalah "<<keliling<<endl;
    cout<<"Luas + keliling lingkaran = "<<lk<<endl;
    return 0;
}

