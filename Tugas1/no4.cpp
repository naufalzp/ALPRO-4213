#include <iostream>
using namespace std;

int hitungTotal(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}

float hitungRata(int arr[], int n) {
    int total = hitungTotal(arr, n);
    float rata = (float)total / n;
    return rata;
}

int main() {
    int n;
    cout << "Masukkan jumlah angka yang akan dimasukan ke dalam array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Masukkan angka : ";
        cin >> arr[i];
    }

    float rata = hitungRata(arr, n);
    cout << "Rata-rata nilai dari array: " << rata << endl;

    return 0;
}

