#include <iostream>
using namespace std;

int hitungTotal(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
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

    int total = hitungTotal(arr, n);
    cout << "Jumlah nilai total dari array: " << total << endl;

    return 0;
}

