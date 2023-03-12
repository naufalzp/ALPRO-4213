#include <iostream>
using namespace std;

int tambah(int a, int b) {
    return a + b;
}

int main() {
    int bil1, bil2;

    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;

    int hasil = tambah(bil1, bil2);

    cout << "Hasil penjumlahan: " << hasil << endl;

    return 0;
}

