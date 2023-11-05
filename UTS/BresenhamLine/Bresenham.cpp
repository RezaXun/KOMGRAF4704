#include <iostream>
using namespace std;

// Fungsi membuat garis dengan algoritma Bresenham
void GarisBresenham(int x1, int y1, int x2, int y2) {
    int step, x, y, pk;

    // Step 1 menentukan deltaX dan deltaY
    int deltaX = abs(x2 - x1);
    int deltaY = abs(y2 - y1);

    int deltaX2 = deltaX * 2;
    int deltaY2 = deltaY * 2;

    int deltaX2MinDeltaY2 = deltaX2 - deltaY2;
    int p0 = deltaX2 - deltaY;
    step = deltaY;

    if (x1 > x2) {
        x = x2;
        y = y2;
        x2 = x1;
        y2 = y1;
    } else {
        x = x1;
        y = y1;
    }

    cout << "(" << x << "," << y << ")\n"; // Output titik awal (x1, y1)

    while (x < x2) {
        x++;

        if (pk < 0) {
            pk += deltaX2;
        } else {
            if ((x2 - x1) == 0) {
                y++;
                pk += deltaY2;
            } else {
                y += step;
                pk += deltaX2MinDeltaY2;
            }
        }

        cout << "(" << x << "," << y << ")\n"; // Output titik saat iterasi
    }
}

int main() {
    char repeat;
    do {
        int x1, y1, x2, y2;

        cout << "Masukkan nilai x1: ";
        cin >> x1;

        cout << "Masukkan nilai y1: ";
        cin >> y1;

        cout << "Masukkan nilai x2: ";
        cin >> x2;

        cout << "Masukkan nilai y2: ";
        cin >> y2;

        GarisBresenham(x1, y1, x2, y2);

        cout << "Ingin memasukkan garis lain? (y/n): ";
        cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}

