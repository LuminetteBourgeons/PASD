/*  
    Buatlah program untuk menentukan huruf, dengan ketentuan sebagai berikut:
    a. Jika karakter >='A' dan karakter <='Z' maka karakter yang Anda masukkan adalah huruf besar.
    b. Jika karakter >='a' dan karakter <='z' maka karakter yang Anda masukkan adalah huruf kecil.
    c. Jika karakter >='0' dan karakter <='9' maka karakter yang Anda masukkan adalah angka.
    d. Jika bukan semuanya berarti karakter yang Anda masukkan bukan alphanumeric
*/

#include <iostream>

using namespace std;


int main()
{
    char x;
    
    cout<<"Masukkan karakter:";
    cin>>x;
    cout<<endl;
    
    if (x >='A' && x<= 'Z')
    {
      cout<<"Karakter yang anda masukkan merupakan huruf besar"<<endl;
    }
    else if(x >='a' && x<= 'z')
    {
      cout<<"Karakter yang anda masukkan merupakan huruf kecil"<<endl;
    }
    else if (x >='0' && x<= '9')
    {
      cout<<"Karakter yang anda masukkan merupakan angka"<<endl;
    }
    else
    {
      cout<<"Karakter yang anda masukkan bukan merupakan alphanumeric"<,endl;
    }
    cout<<endl;
}
