/*
  Buatlah Program untuk menentukan nilai kelulusan
  mahasiswa dari angka yang dimasukan
      UTS
      UAS
      TUGAS
  Total Nilai = (UTS+UAS+TUGAS)/3
  Jika Jika Total Nilai > 75 lulus
  Jika Total Nilai <75 dan >=50 Remedial
  Jika Total Nilai < 50 tidak lulus
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
        cout<<"Anda dinyatakan tidak lulus"<<endl;
    }
    else
    {
        hitung();
    }
}

float hitung()
{
    float nilai;
    nilai = ((uts+uas+tugas)/3);
    cout<<"Rata-rata nilai anda "<<nilai<<endl;
    cout<<endl;
    
    if (nilai >75)
    {
        cout<<"Selamat! Anda dinyatakan lulus"<<endl;
    }
    else if (nilai >= 50 && nilai < 75)
    {
        cout<<"Anda butuh remedial untuk perbaikkan nilai"<<endl;
    }
    else if (nilai < 50)
    {
        cout<<"Anda dinyatakan tidak lulus"<<endl;
    }
    else
    {
        cout<<"Harap masukkan nilai dengan benar!"<<endl;
    }
    cout<<endl;
    return 0;
}
