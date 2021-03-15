/*
 Seseorang dinyatakan lulus dalam kuliah Algoritma jika
 nilai akhirnya lebih besar atau sama dengan 60. Nilai
 akhir diperoleh dengan formula UTS (30%), UAS (40%),
 dan Responsi (30%).
 
 Input: nilai UTS, UAS, dan Responsi
 Output: nilai akhir dan keterangan
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama;
    float uts;
    float uas;
    float responsi;
    float nilai;
    
    cout<<"Masukkan nama Anda: ";
    cin>>nama;
    cout<<"Halo "<<nama<<", silakan masukkan nilai dibawah ini"<<endl;
    cout<<"Nilai UTS [1-100]:";
    cin>>uts;
    cout<<"Nilai UAS [1-100]:";
    cin>>uas;
    cout<<"Nilai Responsi [1-100]:";
    cin>>responsi;
    nilai = (((uts*3)/10)+((uas*4)/10)+((responsi*3)/10));
    cout<<endl;
    cout<<endl;
    if (nilai>=60)
    {
        cout<<"Selamat "<<nama<<", Anda dinyatakan lulus dalam perkuliahan Algoritma dengan nilai akhir = "<<nilai<<endl<<endl;
    }
    else
    {
        cout<<"Maaf "<<nama<<", Anda belum bisa dinyatakan lulus dalam perkuliahan Algoritma kali ini."<<endl;
        cout<<"Nilai akhir Anda "<<nilai<<" (syarat kelulusan nilai akhir = 60)"<<endl<<endl;
    }
}
