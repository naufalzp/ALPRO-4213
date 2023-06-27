#include <iostream>

using namespace std;

struct sepeda{
    string merk, type, harga;
    int tahun;
};
struct sepeda spd;

int main(){
    spd.merk = "Polygon";
    spd.type = "Sepeda Gunung";
    spd.harga = "2.000.000";
    spd.tahun = 2013;

    cout << "Merk : " << spd.merk << endl;
    cout << "Type : " << spd.type << endl;
    cout << "Tahun : " << spd.tahun << endl;
    cout << "Harga : " << spd.harga << endl;

    return 0;
}