#include <iostream>
using namespace std;

// Fungsi untuk melakukan translasi pada matriks
void translasiMatriks(int matriks[][3], int baris, int kolom, int deltaX, int deltaY) {
    // Melakukan translasi pada setiap titik matriks
    for (int i = 0; i < baris; ++i) {
        for (int j = 0; j < kolom; ++j) {
            matriks[i][j] += (j == 0) ? deltaX : deltaY;  // Hanya translasi kolom pertama (X) dan kolom kedua (Y)
        }
    }
}

// Fungsi untuk menampilkan matriks
void tampilkanMatriks(int matriks[][3], int baris, int kolom) {
    cout << "Matriks setelah translasi:\n";
    for (int i = 0; i < baris; ++i) {
        for (int j = 0; j < kolom; ++j) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int baris, kolom;

    // Meminta input dari pengguna untuk ukuran matriks
    cout << "Masukkan jumlah baris matriks: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom matriks: ";
    cin >> kolom;

    // Inisialisasi matriks
    int matriks[baris][3];

    // Meminta input nilai matriks dari pengguna
    cout << "Masukkan nilai matriks:\n";
    for (int i = 0; i < baris; ++i) {
        for (int j = 0; j < kolom; ++j) {
            cout << "Matriks[" << i << "][" << j << "]: ";
            cin >> matriks[i][j];
        }
    }

    int deltaX, deltaY;

    // Meminta input translasi dari pengguna
    cout << "Masukkan nilai translasi deltaX: ";
    cin >> deltaX;
    cout << "Masukkan nilai translasi deltaY: ";
    cin >> deltaY;

    // Menampilkan matriks sebelum translasi
    cout << "\nMatriks sebelum translasi:\n";
    for (int i = 0; i < baris; ++i) {
        for (int j = 0; j < kolom; ++j) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    // Memanggil fungsi untuk melakukan translasi
    translasiMatriks(matriks, baris, kolom, deltaX, deltaY);

    // Menampilkan matriks setelah translasi
    tampilkanMatriks(matriks, baris, kolom);

    return 0;
}

