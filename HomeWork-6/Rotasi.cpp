#include <iostream>
#include <cmath>
using namespace std;

// Fungsi untuk melakukan rotasi pada matriks
void rotasiMatriks(int matriks[][2], int baris, double sudut, int titikX, int titikY) {
    // Menghitung nilai sinus dan kosinus sudut rotasi
    double radian = sudut * acos(-1) / 180.0;
    double cosinus = cos(radian);
    double sinus = sin(radian);

    // Melakukan rotasi pada setiap titik matriks
    for (int i = 0; i < baris; ++i) {
        int x = matriks[i][0] - titikX;
        int y = matriks[i][1] - titikY;

        // Rumus transformasi rotasi pada titik (x, y)
        matriks[i][0] = round(x * cosinus - y * sinus) + titikX;
        matriks[i][1] = round(x * sinus + y * cosinus) + titikY;
    }
}

// Fungsi untuk menampilkan matriks
void tampilkanMatriks(int matriks[][2], int baris) {
    cout << "Matriks setelah rotasi:\n";
    for (int i = 0; i < baris; ++i) {
        cout << matriks[i][0] << " " << matriks[i][1] << endl;
    }
}

int main() {
    int baris;

    // Meminta input dari pengguna untuk jumlah titik pada matriks
    cout << "Masukkan jumlah titik matriks: ";
    cin >> baris;

    // Inisialisasi matriks
    int matriks[baris][2];

    // Meminta input nilai titik dari pengguna
    cout << "Masukkan nilai titik matriks:\n";
    for (int i = 0; i < baris; ++i) {
        cout << "Titik[" << i << "][0] (x): ";
        cin >> matriks[i][0];
        cout << "Titik[" << i << "][1] (y): ";
        cin >> matriks[i][1];
    }

    double sudut;
    int titikX, titikY;

    // Meminta input transformasi rotasi dari pengguna
    cout << "Masukkan nilai sudut rotasi (derajat): ";
    cin >> sudut;
    cout << "Masukkan titik pusat X: ";
    cin >> titikX;
    cout << "Masukkan titik pusat Y: ";
    cin >> titikY;

    // Menampilkan matriks sebelum rotasi
    cout << "\nMatriks sebelum rotasi:\n";
    tampilkanMatriks(matriks, baris);

    // Memanggil fungsi untuk melakukan rotasi
    rotasiMatriks(matriks, baris, sudut, titikX, titikY);

    // Menampilkan matriks setelah rotasi
    tampilkanMatriks(matriks, baris);

    return 0;
}

