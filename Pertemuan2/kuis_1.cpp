/*
 Buat program dengan output sebagai berikut :
    Input UTS   = <diinput>
    Input UAS   = <diinput>
    Input TUGAS = <diinput>
 Buat program dengan logika bila salah satu inputan
 nilai = 0 maka semua nilai bernilai E.
 Setelah program tersebut jadi kemudian rubah sedikit,
 hanya nilai TUGAS saja yang boleh bernilai 0.
*/

#include <iostream>

using namespace std;

float hitung();
int uts;
int uas;
int tugas;

int main()
{
    cout<<"Masukkan nilai Mahasiswa: "<<endl;
    cout<<"Nilai UTS    = ";
    cin>>uts;
    cout<<endl;
    cout<<"Nilai UAS    = ";
    cin>>uas;
    cout<<endl;
    cout<<"Nilai TUGAS  = ";
    cin>>tugas;
    cout<<endl;
    
    if ((uts == 0) || (uas == 0) || (tugas == 0))
    {
        cout<<"Nilai Anda E!"<<endl;
    }
    else
    {
        hitung();
    }
 
     // Setelah diubah,
/*
 if ((uts == 0) || (uas == 0) || (tugas == 0))
 {
     cout<<"Nilai Anda E!"<<endl;
 }
 else
 {
     hitung();
 }
 */
    // Akan menjadi,
/*
 if (tugas == 0)
 {
     cout<<"Nilai Anda E!"<<endl;
 }
 else if ((uas == 0) || (uts == 0))
 {
     cout<<"Harap masukkan nilai dengan benar!"<<endl;
 }
 else
 {
     hitung();
 }
 */

}

float hitung()
{
    float nilai;
    nilai = ((uts+uas+tugas)/3);
    cout<<"Rata-rata nilai anda "<<nilai<<endl;
    cout<<endl;
    
    if (nilai >= 80 && nilai <= 100)
    {
        cout<<"Selamat! Nilai Anda A!"<<endl;
    }
    else if (nilai >= 69 && nilai <= 79)
    {
        cout<<"Nilai Anda B!"<<endl;
    }
    else if (nilai >= 57 && nilai <= 68)
    {
        cout<<"Nilai Anda C!"<<endl;
    }
    else if (nilai >= 46 && nilai <= 56)
    {
        cout<<"Nilai Anda D!"<<endl;
    }
    else if (nilai >= 1 && nilai <= 45)
    {
        cout<<"Nilai Anda E!"<<endl;
    }
    cout<<endl;
    return 0;
}
