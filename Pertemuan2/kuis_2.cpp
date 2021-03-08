/*
    Buatlah program C++ untuk menghitung upah
    mingguan karyawan. Masukan yang dibaca adalah nama
    karyawan, golongan, dan jumlah jam kerja. Keluaran
    program adalah nama karyawan dan upahnya.
        Ketentuan :
    jam kerja normal = 48 jam
    upah per jam :
    Golongan A : Rp. 4000
    Golongan B : Rp. 5000
    Golongan C : Rp. 6000
    Golongan D : Rp. 7000
    upah lembur : Rp.3000/jam
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama;
    int gol;
    int jam;
    int upah;
    int lembur;
    
    cout<<"Masukkan nama Anda : ";
    cin>>nama;
    cout<<endl;
    cout<<"Daftar golongan : "<<endl;
    cout<<"1. Golongan A"<<endl;
    cout<<"2. Golongan B"<<endl;
    cout<<"3. Golongan C"<<endl;
    cout<<"4. Golongan D"<<endl;
    cout<<"Masukkan golongan Anda: "<<endl;
    cin>>gol;
    cout<<endl;
    if(gol < 1 || gol > 4)          
        {
            cout<<"Golongan tidak tersedia.";
        }
    else
    {
    switch(gol)
    {
        case 1 :
                cout<<"Masukkan jam kerja Anda :"<<endl;
                cin>>jam;
                if (jam < 48)
                {
                    cout<<"Jam kerja Anda kurang"<<endl;
                }
                else
                {
                    lembur = jam-48;
                    upah = (48*4000)+(lembur*3000);
                    cout<<"Upah Anda adalah sebanyak "<<upah<<endl;
                    return 0;
                }
            break;
        case 2 :
                cout<<"Masukkan jam kerja Anda :"<<endl;
                cin>>jam;
                if (jam < 48)
                {
                    cout<<"Jam kerja Anda kurang"<<endl;
                }
                else
                {
                    lembur = jam-48;
                    upah = (48*5000)+(lembur*3000);
                    cout<<"Upah Anda adalah sebanyak "<<upah<<endl;
                    return 0;
                }
            break;
        case 3 :
                cout<<"Masukkan jam kerja Anda :"<<endl;
                cin>>jam;
                if (jam < 48)
                {
                    cout<<"Jam kerja Anda kurang"<<endl;
                }
                else
                {
                    lembur = jam-48;
                    upah = (48*6000)+(lembur*3000);
                    cout<<"Upah Anda adalah sebanyak "<<upah<<endl;
                    return 0;
                }
            break;
        case 4 :
                cout<<"Masukkan jam kerja Anda :"<<endl;
                cin>>jam;
                if (jam < 48)
                {
                    cout<<"Jam kerja Anda kurang"<<endl;
                }
                else
                {
                    lembur = jam-48;
                    upah = (48*7000)+(lembur*3000);
                    cout<<"Upah Anda adalah sebanyak "<<upah<<endl;
                    return 0;
                }
            break;
    }
    }
}
