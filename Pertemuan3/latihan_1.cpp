/*
    Sebuah website memberikan komisi kepada setiap afilaternya untuk setiap penjualan produknya.
        > jika mampu menjual barang hingga 300.000, maka akan mendapatkan bonus 10.000, dan komisi 10% dari pendapatannya hari itu.
        > jika mampu menjual barang lebih dari 300.000 s/d 500.000, maka akan mendapatkan bonus 50.000, dan komisi 20% dari pendapatannya hari itu.
        > jika mampu menjual barang lebih dari 500.000 s/d 1.000.000, maka akan mendapatkan bonus 100.000, dan komisi 30% dari pendapatannya hari itu.
        > jika mampu menjual barang lebih dari 1.000.000, maka akan mendapatkan bonus 150.000, dan komisi 50% dari pendapatannya hari itu.
*/

#include <iostream>

using namespace std;

int main ()
{
    int pendapatan;
    float total_pendapatan;
    
    cout<<"Masukkan pendapatan Anda hari ini: ";
    cin>>pendapatan;
    
    if (pendapatan==300000)
    {
        total_pendapatan=((pendapatan+10000)+(pendapatan)/10);
        cout<<"Total pendapatan Anda adalah "<<total_pendapatan<<endl<<endl;
    }
    else if ((pendapatan>300000)&&(pendapatan<=500000))
    {
        total_pendapatan=((pendapatan+50000)+(pendapatan)/5);
        cout<<"Total pendapatan Anda adalah "<<total_pendapatan<<endl<<endl;
    }
    else if ((pendapatan>500000)&&(pendapatan<=1000000))
    {
        total_pendapatan=((pendapatan+100000)+(pendapatan*3)/10);
        cout<<"Total pendapatan Anda adalah "<<total_pendapatan<<endl<<endl;
    }
    else if (pendapatan>1000000)
    {
        total_pendapatan=((pendapatan+150000)+(pendapatan)/2);
        cout<<"Total pendapatan Anda adalah "<<total_pendapatan<<endl<<endl;
    }
    else
    {
        cout<<"Total pendapatan Anda adalah "<<pendapatan<<endl<<endl;
    }
}
