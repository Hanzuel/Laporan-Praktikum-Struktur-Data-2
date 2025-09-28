#include <iostream>
using namespace std;

// Fungsi untuk menampilkan status array pada setiap langkah
void cetakArray(int arr[], int n, int iterasi) {
    cout << "Iterasi ke-" << iterasi << ": ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    int arr[1005];

    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "\n--- Proses Pengurutan ---\n";
    
    // Loop pengurutan Insertion Sort
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
        
        // Panggil fungsi cetakArray untuk melihat hasil iterasi
        cetakArray(arr, n, i); 
    }

    cout << "\nArray setelah diurutkan (Insertion Sort): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}