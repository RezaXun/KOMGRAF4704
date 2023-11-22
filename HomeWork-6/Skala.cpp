#include <iostream>
using namespace std;

// Fungsi untuk melakukan transformasi skala pada matriks
void skalaMatriks(int matriks[][2], int baris, int skalaX, int skalaY, int titikX, int titikY) {
    // Melakukan skala pada setiap titik matriks
    for (int i = 0; i < baris; ++i) {
        // Rumus transformasi skala pada titik (x, y)
        matriks[i][0] = titikX + skalaX * (matriks[i][0] - titikX);
        matriks[i][1] = titikY + skalaY * (matriks[i][1] - titikY);
    }
}

// Fungsi untuk menampilkan matriks
void tampilkanMatriks(int matriks[][2], int baris) {
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

    int skalaX, skalaY, titikX, titikY;

    // Meminta input transformasi skala dari pengguna
    cout << "Masukkan nilai skala X: ";
    cin >> skalaX;
    cout << "Masukkan nilai skala Y: ";
    cin >> skalaY;
    cout << "Masukkan titik pusat X: ";
    cin >> titikX;
    cout << "Masukkan titik pusat Y: ";
    cin >> titikY;

    // Menampilkan matriks sebelum skala
    cout << "\nMatriks sebelum skala:\n";
    tampilkanMatriks(matriks, baris);

    // Memanggil fungsi untuk melakukan skala
    skalaMatriks(matriks, baris, skalaX, skalaY, titikX, titikY);

    // Menampilkan matriks setelah skala
    cout << "\nMatriks setelah skala:\n";
    tampilkanMatriks(matriks, baris);

    return 0;
}

