//Buatlah program untuk mengecek password

#include <iostream>
#include <string>


using namespace std;

int main()
{
    string password;
    cout<<"Masukkan password Anda: "<<endl;
    cin>>password;
    if (password == "41520010072")
    {
        cout<<"Selamat datang, Aisha"<<endl<<endl;
    }
    else
    {
        cout<<"Password Anda salah!"<<endl<<endl;
    }
}
