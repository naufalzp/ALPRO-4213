/*
Nama: Naufal Zhafif Pradipta
Nim : A11.2022.14474
Kelas : A11.4213
*/
#include <iostream>
using namespace std;

struct mahasiswa
{
    string nama, nim;
    float score[5];

    void printData()
    {
        cout << "Nama : " << nama << endl;
        cout << "NIM : " << nim << endl;
            for (int i = 0; i < 5; i++) {
                cout<< "Nilai "<< i+1 <<" : "<< score[i] << endl;
            }
    }

    void swapScore(float* score1, float* score2)
    {
        float temp = *score1;
        *score1 = *score2;
        *score2 = temp;
    }

    float sumScore(const float* score, int n)
    {
        if (n == 0)
            return 0;
        return score[n-1] + sumScore(score, n-1);
    }

    void bubbleSort(float *arr, int n) {
        if (n == 1)
            return;

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1])
                swapScore(&arr[i], &arr[i + 1]);
        }

        bubbleSort(arr, n - 1);
    }

};


int main() {
    mahasiswa mhs1 = {"Naufal Zhafif Pradipta", "A11.2022.14474", {85, 90, 78, 93, 87}};

    cout << "Before Swap" << endl;
    mhs1.printData();
    cout << endl;

    cout << "After Swap" << endl;
    mhs1.swapScore(&mhs1.score[0], &mhs1.score[1]);
    mhs1.printData();

    // Average
    int n = sizeof(mhs1.score)/sizeof(mhs1.score[0]);
    cout << "\nNilai Rata-Rata : " << mhs1.sumScore(mhs1.score, n) / n << endl;
    cout << endl;

    //Sort
    cout << "Nilai Setelah disortir (ASC)" <<endl;
    mhs1.bubbleSort(mhs1.score, n);
    mhs1.printData();

    return 0;
}
