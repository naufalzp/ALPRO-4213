#include <iostream>

using namespace std;
void minEven(int arr[], int n);
bool isOdd(int a);

int main() {
    int arr[] = {2,7,6,3,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    minEven(arr, size);
    return 0;
}

bool isOdd(int a){
    return (a % 2 != 0) ? true : false;
}

void minEven(int arr[] , int n) {
    int idx = -1;
    int temp = arr[0];
    // Terkecil
    for (int i = 0; i < n; i++) {
        if (temp>=arr[i] && !isOdd(arr[i])){
            idx = i;
            temp = arr[idx];
        }
    }
    if(idx != -1){
        cout << "Genap Terkecil: " << arr[idx]<< endl;
        cout << "Index : " << idx << endl;
    }
    else{
        cout << "Tidak ada angka genap" << endl;
    }
}


