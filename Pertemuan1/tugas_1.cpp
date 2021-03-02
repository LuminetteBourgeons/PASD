/*
    Buatlah suatu program yang mengandung:
    variabel lokal,
    variabel global,
    operator, Operator yang diminta operator operasional/aritmatika
    operasi,
    tipe data terserah, kecuali tipe data bentukan.
*/

#include <iostream>

using namespace std;

float penjumlahan();    //variabel global
float pengurangan();    //variabel global
float perkalian();      //variabel global
float pembagian();      //variabel global
float Modulus();        //variabel global
int x,y;                //variabel global

int main()
{
    int pilihan;        //variabel lokal
    
    cout<<"Pilihan Operator Aritmatika"<<endl;
    cout<<"1. Penjumlahan"<<endl;
    cout<<"2. Pengurangan"<<endl;
    cout<<"3. Perkalian"<<endl;
    cout<<"4. Pembagian"<<endl;
    cout<<"5. Modulus"<<endl;
    cout<<endl;
    
    cout<<"Masukan Pilihan : ";
    cin>>pilihan;
    if (pilihan > 5 || pilihan < 1)     //operator logika dan relasional
    {
        cout << "Kode yang Anda masukkan tidak tersedia, silahkan masukkan ulang kode :";
    }
    else
    {
        cout<<"Masukan Bilangan pertama : ";
        cin>>x;
        cout<<"Masukan Bilangan kedua : ";
        cin>>y;
        cout<<endl;
        cout<<endl;
    }
    switch(pilihan)
    {
            case 1 : penjumlahan();
                    break;
            case 2 : pengurangan();
                    break;
            case 3 : perkalian();
                    break;
            case 4 : pembagian();
                    break;
            case 5 : Modulus();
                    break;
    }
}

float penjumlahan()
{
    float jumlah;   //variabel lokal
    jumlah = x+y;   //operasi dan operator aritmatika
    cout<<jumlah<<endl;
    cout<<endl;
    return(jumlah);
}

float pengurangan()
{
    float kurang;   //variabel lokal
    kurang = x-y;   //operasi dan operator aritmatika
    cout<<kurang<<endl;
    cout<<endl;
    return(kurang);
}

float perkalian()
{
    float kali;     //variabel lokal
    kali = x*y;     //operasi dan operator aritmatika
    cout<<kali<<endl;
    cout<<endl;
    return(kali);
}

float pembagian()
{
    float bagi;     //variabel lokal
    bagi = x/y;     //operasi dan operator aritmatika
    cout<<bagi<<endl;
    cout<<endl;
    return(bagi);
}

float Modulus()
{
    float modulus;  //variabel lokal
    modulus = x%y;  //operasi dan operator aritmatika
    cout<<modulus<<endl;
    cout<<endl;
    return(modulus);
}
