// Buatlah sebuah program dari sebuah contoh kasus bebas, yang menggambarkan tipe data, variabel dan operasi yang digunakan.

#include <iostream>
#include <string>

using namespace std;

float calc();           //variabel global, tipe data float
int karakter();         //variabel global, tipe data integer
int luas();             //variabel global, tipe data integer

int main()
{
    int pilihan;        //variabel lokal, tipe data integer
    
    cout<<"Pilihan command bot:"<<endl;
    cout<<"1. Kalkulator"<<endl;
    cout<<"2. Pengecekan jumlah karakter"<<endl;
    cout<<"3. Penghitung luas bangun datar"<<endl;
    cout<<endl;
    
    cout<<"Masukan Pilihan : ";
    cin>>pilihan;
    cout<<endl;
    cout<<endl;
    if (pilihan > 3 || pilihan < 1)     //operator logika dan relasional
    {
        cout << "Kode yang Anda masukkan tidak tersedia, silahkan masukkan ulang kode :";
    }
    else
    {}
    switch(pilihan)
    {
            case 1 : calc();
                    break;
            case 2 : karakter();
                    break;
            case 3 : luas();
                    break;
    }
}

float calc()
{
    float a,b;               //variabel lokal, tipe data float
    int pil;                 //variabel lokal, tipe data integer
    float jumlah;            //variabel lokal, tipe data float
    cout<<"Pilihan operasi aritmatika: "<<endl;
    cout<<"1. Penjumlahan"<<endl;
    cout<<"2. Pengurangan"<<endl;
    cout<<"3. Perkalian"<<endl;
    cout<<"4. Pembagian"<<endl;
    cout<<endl;
    
    cout<<"Masukan Pilihan : ";
    cin>>pil;
    cout<<endl;
    cout<<endl;
    if(pil < 1 || pil > 4)          //operator logika dan relasional
    {
        cout<<"Command tidak tersedia.";
    }
    else
    {}
    switch(pil)
    {
        case 1 :
                cout<<"Masukkan angka pertama: "<<endl;
                cin>>a;
                cout<<"Masukkan angka kedua  : "<<endl;
                cin>>b;
                jumlah = a+b;       //operasi
                cout<<jumlah<<endl;
            break;
        case 2 :
                cout<<"Masukkan angka pertama: "<<endl;
                cin>>a;
                cout<<"Masukkan angka kedua  : "<<endl;
                cin>>b;
                jumlah = a-b;       //operasi
                cout<<jumlah<<endl;
            break;
        case 3 :
                cout<<"Masukkan angka pertama: "<<endl;
                cin>>a;
                cout<<"Masukkan angka kedua  : "<<endl;
                cin>>b;
                jumlah = a*b;       //operasi
                cout<<jumlah<<endl;
            break;
        case 4 :
                cout<<"Masukkan angka pertama: "<<endl;
                cin>>a;
                cout<<"Masukkan angka kedua  : "<<endl;
                cin>>b;
                jumlah = a/b;       //operasi
                cout<<jumlah<<endl;
            break;
    }
    return 0;
}

int karakter()
{
     string a;      //variabel lokal, tipe data string
     int jumlah;    //variabel lokal, tipe data integer
     cout << "Masukkan sebuah string: ";
     cin>>a;
     jumlah = a.length();
     cout << "Jumlah karakter adalah " <<jumlah<< endl;
    return 0;
}

int luas()
{
    float a,b;      //variabel lokal, tipe data float
    int pil;        //variabel lokal, tipe data integer
    float jumlah;   //variabel lokal, tipe data float
    cout<<"Pilihan bidang datar untuk dihitung luasnya: "<<endl;
    cout<<"1. Persegi"<<endl;
    cout<<"2. Persegi panjang"<<endl;
    cout<<"3. Segitiga"<<endl;
    cout<<"4. Lingkaran"<<endl;
    cout<<endl;
    
    cout<<"Masukan Pilihan : ";
    cin>>pil;
    cout<<endl;
    cout<<endl;
    if(pil < 1 || pil > 4)          //operator logika dan relasional
    {
        cout<<"Command tidak tersedia";
    }
    else
    {}
    switch(pil)
    {
        case 1 :
                cout<<"Masukkan panjang : "<<endl;
                cin>>a;
                cout<<"Masukkan lebar   : "<<endl;
                cin>>b;
                jumlah = a*b;         //operator *
                cout<<jumlah<<endl;
            break;
        case 2 :
                cout<<"Masukkan panjang : "<<endl;
                cin>>a;
                cout<<"Masukkan lebar   : "<<endl;
                cin>>b;
                jumlah = a*b;         //operator *
                cout<<jumlah<<endl;
            break;
        case 3 :
                cout<<"Masukkan tinggi      : "<<endl;
                cin>>a;
                cout<<"Masukkan panjang alas: "<<endl;
                cin>>b;
                jumlah = (a*b)/2;       //operator *, dan /
                cout<<jumlah<<endl;
            break;
        case 4 :
                cout<<"Masukan panjang jari-jari: "<<endl;
                cin>>a;
                jumlah = 3.14*(a*a);    //operator *
                cout<<jumlah<<endl;
            break;
    }
    return 0;
}


