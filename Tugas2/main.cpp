#include<iostream>
using namespace std;

bool isEven(int x){
    if(x % 2 == 0)
        return true;
    else
        return false;
}

bool isOdd(int x){
    if(x % 2 != 0)
        return true;
    else
        return false;
}

bool isFactor(int x,int f){
    return x % f == 0;
}

int maxArray(int arr[],int n){
    int result;
    for(int i = 0; i < n; i++) {
        if(result < arr[i]) {
            result = arr[i];
        }
    }
    return result;
}

int minArray(int arr[],int n){
    int result = arr[0];
    for(int i = 1; i < n; i++) {
        if(result > arr[i]) {
            result = arr[i];
        }
    }
    return result;
}

int maxx(int a,int b){
    if (a>b)
        return a;
    else
        return b;
}

int minn(int a,int b){
    if (a<b)
        return a;
    else
        return b;
}

int sumEven(int arr[],int n){

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int sumOdd(int arr[],int n){

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}

void swapp(int a,int b){
    int temp;
    temp = b;
    b = a;
    a = temp;
    cout << "Nilai A: " << a << " dan " << "Nilai B: " << b;
}

bool isFound(int a[],int x,int n){
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return true;
        }
    }
    return false;
}
int main(){

    int n;
    //isEven
    cout << "(GENAP) Masukan Angka: ";
    cin >> n;
    string even = (isEven(n)==1) ? " termasuk angka GENAP" : " tidak angka GENAP";
    cout << n << even << endl;

    //isOdd
    cout << "(GANJIL)Masukan Angka: ";
    cin >> n;
    string odd = (isOdd(n)==1) ? " termasuk angka GANJIL" : " tidak angka GANJIL";
    cout << n << odd << endl;

    int x,f;
    //isFactor
    cout << "Masukan Nilai x: ";
    cin >> x;
    cout << "Masukan Nilai f: ";
    cin >> f;
    string faktor = (isFactor(x,f)==1) ? "FAKTOR" : "TIDAK FAKTOR";
    cout << x << " dan " << f << " termasuk " << faktor << endl;

    //sumEven Odd
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen array: ";
        cin >> arr[i];
    }
    int maxArr = maxArray(arr,n);
    int minArr = minArray(arr,n);
    int sumGenap = sumEven(arr,n);
    int sumGanjil = sumOdd(arr,n);
    cout << "Nilai Terbesar dari arr[]: " << maxArr << endl;
    cout << "Nilai Terkecil dari arr[]: " << minArr << endl;
    cout << "Jumlah Nilai Genap: " << sumGenap << endl;
    cout << "Jumlah Nilai Ganjil: " << sumGanjil << endl;

    //isFound
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++) {
        cout << "Masukkan angka: ";
        cin >> ar[i];
    }
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> x;
    string cari = (isFound(ar,x,n)==1) ? "Angka ditemukan" : "Angka tidak ditemukan";
    cout << cari << endl;

    //swap
    int a,b;
    cout << "Masukan Nilai A: ";
    cin >> a;
    cout << "Masukan Nilai B: ";
    cin >> b;
    swapp(a,b);
return 0;
}
