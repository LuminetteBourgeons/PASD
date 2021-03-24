//Buatlah algoritma dan program untuk membaca input password dari user.
//Jika password tidak sesuai user masih diperbolehkan menginputkan password. Kesempatan input password sampai benar dibatasi 5 kali input.

//FOR version

#include <iostream>

using namespace std;

int main()
{
    long password;
    long pass = 41520010072;
    int x;
    int batas;
    cout<<"Halo, selamat datang! "<<endl;
    for (x=1;x<=5;x++)
    {
        cout<<"Masukkan password Anda untuk melanjutkan:";
        cin>>password;
        if(password==pass)
        {
            cout<<"Selamat datang kembali, Aisha! :)"<<endl<<endl;
            break;
        }
        else
        {
            batas=5-x;
            cout<<"Maaf, password Anda tidak dapat dikenali :("<<endl;
            cout<<"Batas mencoba password:"<<batas<<endl<<endl;
            if (batas==0)
            {
            cout<<"Anda menginput password yang salah selama 5 kali berturut-turut!"<<endl;
            cout<<"Maaf, kami tidak bisa mengenali username Anda :("<<endl<<endl;
            }
        }
    }
}
