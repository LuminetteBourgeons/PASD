/*
    Buatlah Program dengan menggunakan Nested IF
    mengenai pemesanan tiket wahana bermain, dengan output:
        Nama pemesan:
        Pilihan wahana:
        Pilihan hari kunjungan:
        Harga tiket
        Jumlah tiket
        Total bayar = Harga tiket * Jumlah tiket
        Uang bayar
        Kembali = Uang bayar - Total bayar
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama;
    char wahana;
    char hari;
    int tiket;
    float bayar;
    float uang;
    float kembali;
    
    cout<<"Selamat datang di Dunia Fana :D"<<endl;
    cout<<"Masukkan nama kamu:";
    cin>>nama;
    cout<<"Halo, "<<nama<<" wahana apa yang ingin kamu kunjungi?"<<endl;
    cout<<" 1. Edupark"<<endl;
    cout<<" 2. 5D Generation"<<endl;
    cout<<" 3. WaterPark"<<endl;
    cout<<" 4. FunAdventure"<<endl;
    cout<<"Masukkan wahana pilihanmu:";
    cin>>wahana;
    if (wahana=='1')
    {
        cout<<"Kapan kamu mau mengunjungi wahana Edupark?"<<endl;
        cout<<" 1. Weekday"<<endl;
        cout<<" 2. Weekend"<<endl;
        cout<<" 3. Holiday"<<endl;
        cout<<"Masukkan hari pilihanmu:";
        cin>>hari;
        if (hari=='1')
        {
            cout<<"Harga tiket untuk wahana Edupark di hari Weekday adalah 90000"<<endl;
            cout<<"Berapa tiket yang ingin kamu beli?";
            cin>>tiket;
            bayar = (tiket*90000);
            cout<<"Total yang harus dibayar adalah "<<bayar<<endl;
            cout<<"Silakan masukkan Uang:";
            cin>>uang;
            kembali = (uang-bayar);
            if (kembali==0)
            {
                cout<<"Terimakasih sudah menggunakan jasa kami, "<<nama<<" :D"<<endl<<endl;
            }
            else
            {
                cout<<"Berikut kembalianmu "<<kembali<<endl;
                cout<<"Terimakasih sudah menggunakan jasa kami, "<<nama<<" :D"<<endl<<endl;
            }
        }
        else if (hari=='2')
        {
            cout<<"Harga tiket untuk wahana Edupark di hari Weekend adalah 120000"<<endl;
            cout<<"Berapa tiket yang ingin kamu beli?";
            cin>>tiket;
            bayar = (tiket*120000);
            cout<<"Total yang harus dibayar adalah "<<bayar<<endl;
            cout<<"Silakan masukkan Uang:";
            cin>>uang;
            kembali = (uang-bayar);
            if (kembali==0)
            {
                cout<<"Terimakasih sudah menggunakan jasa kami, "<<nama<<" :D"<<endl<<endl;
            }
            else
            {
                cout<<"Berikut kembalianmu "<<kembali<<endl;
                cout<<"Terimakasih sudah menggunakan jasa kami, "<<nama<<" :D"<<endl<<endl;
            }
        }
        else if (hari=='3')
        {
            cout<<"Harga tiket untuk wahana Edupark di hari Libur adalah 150000"<<endl;
            cout<<"Berapa tiket yang ingin kamu beli?";
            cin>>tiket;
            bayar = (tiket*150000);
            cout<<"Total yang harus dibayar adalah "<<bayar<<endl;
            cout<<"Silakan masukkan Uang:";
            cin>>uang;
            kembali = (uang-bayar);
            if (kembali==0)
            {
                cout<<"Terimakasih sudah menggunakan jasa kami, "<<nama<<" :D"<<endl<<endl;
            }
            else
            {
                cout<<"Berikut kembalianmu "<<kembali<<endl;
                cout<<"Terimakasih sudah menggunakan jasa kami, "<<nama<<" :D"<<endl<<endl;
            }
        }
        else
        {
            cout<<"Kode yang kamu masukkan salah :("<<endl<<endl;
        }
    }
    else if (wahana=='2')
    {
        cout<<"Kapan kamu mau mengunjungi wahana 5D Generation?"<<endl;
        cout<<" 1. Weekday"<<endl;
        cout<<" 2. Weekend"<<endl;
        cout<<" 3. Holiday"<<endl;
        cout<<"Masukkan hari pilihanmu:";
        cin>>hari;
        if (hari=='1')
        {
            cout<<"Harga tiket untuk wahana 5D Generation di hari Weekday adalah 100000"<<endl;
            cout<<"Berapa tiket yang ingin kamu beli?";
            cin>>tiket;
            bayar = (tiket*100000);
            cout<<"Total yang harus dibayar adalah "<<bayar<<endl;
            cout<<"Silakan masukkan Uang:";
            cin>>uang;
            kembali = (uang-bayar);
            if (kembali==0)
            {
                cout<<"Terimakasih sudah menggunakan jasa kami, "<<nama<<" :D"<<endl<<endl;
            }
            else
            {
                cout<<"Berikut kembalianmu "<<kembali<<endl;
                cout<<"Terimakasih sudah menggunakan jasa kami, "<<nama<<" :D"<<endl<<endl;
            }
        }
        else if (hari=='2')
        {
            cout<<"Harga tiket untuk wahana 5D Generation di hari Weekend adalah 150000"<<endl;
            cout<<"Berapa tiket yang ingin kamu beli?";
            cin>>tiket;
            bayar = (tiket*150000);
            cout<<"Total yang harus dibayar adalah "<<bayar<<endl;
            cout<<"Silakan masukkan Uang:";
            cin>>uang;
            kembali = (uang-bayar);
            if (kembali==0)
            {
                cout<<"Terimakasih sudah menggunakan jasa kami, "<<nama<<" :D"<<endl<<endl;
            }
            else
            {
                cout<<"Berikut kembalianmu "<<kembali<<endl;
                cout<<"Terimakasih sudah menggunakan jasa kami, "<<nama<<" :D"<<endl<<endl;
            }
        }
        else if (hari=='3')
        {
            cout<<"Harga tiket untuk wahana 5D Generation di hari Libur adalah 170000"<<endl;
            cout<<"Berapa tiket yang ingin kamu beli?";
            cin>>tiket;
            bayar = (tiket*170000);
            cout<<"Total yang harus dibayar adalah "<<bayar<<endl;
            cout<<"Silakan masukkan Uang:";
            cin>>uang;
            kembali = (uang-bayar);
            if (kembali==0)
            {
                cout<<"Terimakasih sudah menggunakan jasa kami, "<<nama<<" :D"<<endl<<endl;
            }
            else
            {
                cout<<"Berikut kembalianmu "<<kembali<<endl;
                cout<<"Terimakasih sudah menggunakan jasa kami, "<<nama<<" :D"<<endl<<endl;
            }
        }
        else
        {
            cout<<"Kode yang kamu masukkan salah :("<<endl<<endl;
        }
    }
    else if (wahana=='3')
    {
        cout<<"Kapan kamu mau mengunjungi wahana WaterPark?"<<endl;
        cout<<" 1. Weekday"<<endl;
        cout<<" 2. Weekend"<<endl;
        cout<<" 3. Holiday"<<endl;
        cout<<"Masukkan hari pilihanmu:";
        cin>>hari;
        if (hari=='1')
        {
            cout<<"Harga tiket untuk wahana WaterPark di hari Weekday adalah 70000"<<endl;
            cout<<"Berapa tiket yang ingin kamu beli?";
            cin>>tiket;
            bayar = (tiket*70000);
            cout<<"Total yang harus dibayar adalah "<<bayar<<endl;
            cout<<"Silakan masukkan Uang:";
            cin>>uang;
            kembali = (uang-bayar);
            if (kembali==0)
            {
                cout<<"Terimakasih sudah menggunakan jasa kami, "<<nama<<" :D"<<endl<<endl;
            }
            else
            {
            cout<<"Berikut kembalianmu "<<kembali<<endl;
            cout<<"Terimakasih sudah menggunakan jasa kami, "<<nama<<" :D"<<endl<<endl;
            }
        }
        else if (hari=='2')
        {
            cout<<"Harga tiket untuk wahana WaterPark di hari Weekend adalah 90000"<<endl;
            cout<<"Berapa tiket yang ingin kamu beli?";
            cin>>tiket;
            bayar = (tiket*90000);
            cout<<"Total yang harus dibayar adalah "<<bayar<<endl;
            cout<<"Silakan masukkan Uang:";
            cin>>uang;
            kembali = (uang-bayar);
            if (kembali==0)
            {
                cout<<"Terimakasih sudah menggunakan jasa kami, "<<nama<<" :D"<<endl<<endl;
            }
            else
            {
            cout<<"Berikut kembalianmu "<<kembali<<endl;
            cout<<"Terimakasih sudah menggunakan jasa kami, "<<nama<<" :D"<<endl<<endl;
            }
        }
        else if (hari=='3')
        {
            cout<<"Harga tiket untuk wahana WaterPark di hari Libur adalah 100000"<<endl;
            cout<<"Berapa tiket yang ingin kamu beli?";
            cin>>tiket;
            bayar = (tiket*100000);
            cout<<"Total yang harus dibayar adalah "<<bayar<<endl;
            cout<<"Silakan masukkan Uang:";
            cin>>uang;
            kembali = (uang-bayar);
            if (kembali==0)
            {
                cout<<"Terimakasih sudah menggunakan jasa kami, "<<nama<<" :D"<<endl<<endl;
            }
            else
            {
                cout<<"Berikut kembalianmu "<<kembali<<endl;
                cout<<"Terimakasih sudah menggunakan jasa kami, "<<nama<<" :D"<<endl<<endl;
            }
        }
        else
        {
            cout<<"Kode yang kamu masukkan salah :("<<endl<<endl;
        }
    }
    else if (wahana=='4')
    {
        cout<<"Kapan kamu mau mengunjungi wahana FunAdventure?"<<endl;
        cout<<" 1. Weekday"<<endl;
        cout<<" 2. Weekend"<<endl;
        cout<<" 3. Holiday"<<endl;
        cout<<"Masukkan hari pilihanmu:";
        cin>>hari;
        if (hari=='1')
        {
            cout<<"Harga tiket untuk wahana FunAdventure di hari Weekday adalah 130000"<<endl;
            cout<<"Berapa tiket yang ingin kamu beli?";
            cin>>tiket;
            bayar = (tiket*130000);
            cout<<"Total yang harus dibayar adalah "<<bayar<<endl;
            cout<<"Silakan masukkan Uang:";
            cin>>uang;
            kembali = (uang-bayar);
            if (kembali==0)
            {
                cout<<"Terimakasih sudah menggunakan jasa kami, "<<nama<<" :D"<<endl<<endl;
            }
            else
            {
                cout<<"Berikut kembalianmu "<<kembali<<endl;
                cout<<"Terimakasih sudah menggunakan jasa kami, "<<nama<<" :D"<<endl<<endl;
            }
        }
        else if (hari=='2')
        {
            cout<<"Harga tiket untuk wahana FunAdventure di hari Weekend adalah 180000"<<endl;
            cout<<"Berapa tiket yang ingin kamu beli?";
            cin>>tiket;
            bayar = (tiket*180000);
            cout<<"Total yang harus dibayar adalah "<<bayar<<endl;
            cout<<"Silakan masukkan Uang:";
            cin>>uang;
            kembali = (uang-bayar);
            if (kembali==0)
            {
                cout<<"Terimakasih sudah menggunakan jasa kami, "<<nama<<" :D"<<endl<<endl;
            }
            else
            {
                cout<<"Berikut kembalianmu "<<kembali<<endl;
                cout<<"Terimakasih sudah menggunakan jasa kami, "<<nama<<" :D"<<endl<<endl;
            }
        }
        else if (hari=='3')
        {
            cout<<"Harga tiket untuk wahana FunAdventure di hari Libur adalah 200000"<<endl;
            cout<<"Berapa tiket yang ingin kamu beli?";
            cin>>tiket;
            bayar = (tiket*200000);
            cout<<"Total yang harus dibayar adalah "<<bayar<<endl;
            cout<<"Silakan masukkan Uang:";
            cin>>uang;
            kembali = (uang-bayar);
            if (kembali==0)
            {
                cout<<"Terimakasih sudah menggunakan jasa kami, "<<nama<<" :D"<<endl<<endl;
            }
            else
            {
                cout<<"Berikut kembalianmu "<<kembali<<endl;
                cout<<"Terimakasih sudah menggunakan jasa kami, "<<nama<<" :D"<<endl<<endl;
            }
        }
        else
        {
            cout<<"Kode yang kamu masukkan salah :("<<endl<<endl;
        }
    }
    else
    {
        cout<<"Kode yang kamu masukkan salah :("<<endl<<endl;
    }
}
