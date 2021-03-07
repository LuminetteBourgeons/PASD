/*
    Buat Program Hitung luas permukaan serta isi bola yang diketahui jari-jarinya
    
    RUMUS
    L = 4 π R
    V = ( 4 π R^3 ) / 3

    Dimana :
    L = Luas permukaan bola
    V = Volume bola
    R = Jari-jari bola
    π = 3.14
*/

#include <iostream>
#define phi 3.14

using namespace std;

float rluas_permukaan();
float rvolume();
float r;

int main()
{
    float luas_permukaan;
    float volume;
    
    cout<<"Program untuk menghitung luas permukaan dan volume bola"<<endl;
    cout<<"Masukkan jari-jari bola [r]:"<<endl;
    cin>>r;
    cout<<endl;
    
    luas_permukaan=rluas_permukaan();
    volume=rvolume();
    
    cout<<"Luas permukaan bola dengan jari-jari r: "<<r<<" adalah "<<luas_permukaan<<endl;
    cout<<"Volume bola dengan jari-jari r: "<<r<<" adalah "<<volume<<endl;
}

float rluas_permukaan()
{
    float luas_permukaan;
    luas_permukaan = 4*phi*r*r;
    return(luas_permukaan);
}

float rvolume()
{
    float volume;
    volume = (4*phi*r*r*r)/3;
    return(volume);
}
