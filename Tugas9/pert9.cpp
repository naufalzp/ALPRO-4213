#include <iostream>

using namespace std;

// Penjumlahan
int penjumlahan (int a, int b){
    if (a <= 0 && b <= 0)
        return 0;
    else if (a > 0)
        return 1 + penjumlahan (a - 1, b);
    else if (b > 0)
        return 1 + penjumlahan (a, b - 1);
}

// Pengurangan
int pengurangan(int a, int b) {
    if (a <= 0 && b <= 0)
        return 0;
    else if (a > 0)
        return 1 + pengurangan (a - 1, b);
    else if (b > 0)
        return -1 + pengurangan (a, b - 1);
}

// Perkalian
int perkalian (int a, int b) {
    if (a == 0 || b == 0)
        return 0;
    else if (a > 0)
        return b + perkalian (a - 1, b);
    else if (b > 0)
        return a + perkalian (a, b - 1);
}


// Pembagian
int pembagian(int a, int b) {
    if (a < b)
        return 0;
    else if (a == b)
        return 1;
    else
        return 1 + pembagian(a - b, b);
}

// Pangkat
int pangkat(int a, int b) {
    if (b == 0)
        return 1;
    else
        return a * pangkat(a, b - 1);
}

int main() {
    int a, b;

    cout << "Masukkan nilai a: ";
    cin >> a;

    cout << "Masukkan nilai b: ";
    cin >> b;

    cout << "Penjumlahan: " << penjumlahan(a, b) << endl;
    cout << "Pengurangan: " << pengurangan(a, b) << endl;
    cout << "Perkalian: " << perkalian(a, b) << endl;
    cout << "Pembagian: " << pembagian(a, b) << endl;
    cout << "Pangkat: " << pangkat(a, b) << endl;

    return 0;
}

