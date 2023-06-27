#include <iostream>
#include <math.h>

using namespace std;

struct hitung{
    float phi = 3.14;

    //Luas Persegi Panjang
    int lp(int p, int l){
        return p * l;
    }

    //Luas Lingkaran
    float ll(int r){
        return phi * r * r;
    }

    //Valume Kerucut
    float vk(int r, int t){
        return 0.3 * phi * pow(r,2) * t;
    }

    //Volume Bola
    double vb(int r){
        return 1.3 * phi * pow(r,3);
    }
};

struct hitung htng;

int main(){
    cout << "Luas Persegi Panjang : " << htng.lp(3,10) << endl;
    cout << "Luas Lingkaran : " << htng.ll(4) << endl;
    cout << "Volume Kerucut : " << htng.vk(4,8) << endl;
    cout << "Volume Bola : " << htng.vb(5) << endl;

    return 0;
}
