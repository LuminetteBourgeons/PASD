/*
Buatlah program untuk membaca sekumpulan bilangan bulat (integer) yang diakhiri -999 (-999 tidak termasuk), dan mencetak banyaknya bilangan genap, ganjil, positif, dan negatif.
Bilangan 0 adalah bilangan genap, tetapi tidak positif atau pun negatif
*/

//WHILE version

#include <iostream>

using namespace std;

int main ()
{
    int N;
    int genap;
    int ganjil;
    int positif;
    int negatif;
    genap=0;
    ganjil=0;
    positif=0;
    negatif=0;
    cin >> N;
    while(N!=-999)
    {
        if (N%2==0)
        {
            genap++;
        }
        else if (N%2==1)
        {
            ganjil++;
        }
        if (N>0)
        {
            positif++;
        }
        else if (N<0)
        {
            negatif++;
        }
        cin >> N;
    }
    //N==-999
    cout<<"Bilangan genap ada   = "<<genap<<endl;
    cout<<"Bilangan ganjil ada  = "<<ganjil<<endl;
    cout<<"Bilangan positif ada = "<<positif<<endl;
    cout<<"Bilangan negatif ada = "<<negatif<<endl;
    return 0;
}
