// Bubble sort  C++
#include <iostream>
using namespace std;

// Tukar
void swapN(int &a,int &b){
  int temp = a;
  a = b;
  b = temp;
}
// Print array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << "[" << array[i] << "] ";
  }
  cout << "\n";
}
// Selection
void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {

      if (array[i] > array[min_idx])
        min_idx = i;
    }


    swapN(array[min_idx], array[step]);
    printArray(array,size);
  }
}
// Bubble sort
void bubbleSort(int array[], int size) {
  for (int step = 0; step < size; step++) {
    for (int i = 0; i < size - 1; i++) {
      if (array[i] < array[i + 1]) {
        swapN(array[i],array[i + 1]);
      }
    }
    printArray(array,size);
  }
}


int main() {
    int n;
    int pilih;
// Menentukan banyaknya jumlah data
    cout << "Masukan Jumlah Data = ";
    cin >> n;

    cout << endl;

    int data[n];
    // Input data
    for (int i = 0; i < n; i++)
    {
        cout << "Masukan Data Ke-" << i + 1 << " = ";
        cin >> data[i];
    }
    cout << "1. Bubble"<<endl;
    cout << "2. Selection"<<endl;
    cout << "Pilih metode:";
    cin >> pilih;
    if(pilih==1){
        bubbleSort(data,n);
    }
    else if(pilih==2){
        selectionSort(data,n);
    }
    else{
        cout << "Pilih yang benar!!" <<endl;
    }
    return 0;
}
