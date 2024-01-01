#include <iostream>
#include <cmath>

#define PI 3.14159265358979323846

// Struktur untuk merepresentasikan titik dalam ruang 3D
struct Point3D {
    float x, y, z;

    // Konstruktor
    Point3D(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
};

// Fungsi untuk menampilkan titik dalam format (x, y, z)
void displayPoint(const Point3D& point) {
    std::cout << "(" << point.x << ", " << point.y << ", " << point.z << ")";
}

// Fungsi untuk melakukan translasi pada titik dalam ruang 3D
Point3D translate(const Point3D& point, float tx, float ty, float tz) {
    return Point3D(point.x + tx, point.y + ty, point.z + tz);
}

// Fungsi untuk melakukan rotasi pada titik dalam ruang 3D (sumbu rotasi: x, y, atau z)
Point3D rotate(const Point3D& point, char axis, float angle) {
    float radianAngle = angle * (PI / 180.0); // Mengkonversi sudut ke radian
    Point3D result = point;

    switch (axis) {
        case 'x':
            result.y = point.y * cos(radianAngle) - point.z * sin(radianAngle);
            result.z = point.y * sin(radianAngle) + point.z * cos(radianAngle);
            break;
        case 'y':
            result.x = point.x * cos(radianAngle) + point.z * sin(radianAngle);
            result.z = -point.x * sin(radianAngle) + point.z * cos(radianAngle);
            break;
        case 'z':
            result.x = point.x * cos(radianAngle) - point.y * sin(radianAngle);
            result.y = point.x * sin(radianAngle) + point.y * cos(radianAngle);
            break;
        default:
            std::cout << "Axis not valid!\n";
            break;
    }

    return result;
}

// Fungsi untuk melakukan penskalaan pada titik dalam ruang 3D
Point3D scale(const Point3D& point, float sx, float sy, float sz) {
    return Point3D(point.x * sx, point.y * sy, point.z * sz);
}

int main() {
    float x, y, z;
    char choice;
    Point3D originalPoint(0.0, 0.0, 0.0);

    std::cout << "Masukkan koordinat titik dalam ruang 3D (x y z): ";
    std::cin >> x >> y >> z;
    originalPoint = Point3D(x, y, z);

    std::cout << "Pilih transformasi (t: translasi, r: rotasi, s: skala): ";
    std::cin >> choice;

    switch (choice) {
        case 't':
            float tx, ty, tz;
            std::cout << "Masukkan nilai translasi (tx ty tz): ";
            std::cin >> tx >> ty >> tz;
            originalPoint = translate(originalPoint, tx, ty, tz);
            break;
        case 'r':
            char axis;
            float angle;
            std::cout << "Masukkan sumbu rotasi (x, y, z): ";
            std::cin >> axis;
            std::cout << "Masukkan sudut rotasi (derajat): ";
            std::cin >> angle;
            originalPoint = rotate(originalPoint, axis, angle);
            break;
        case 's':
            float sx, sy, sz;
            std::cout << "Masukkan nilai penskalaan (sx sy sz): ";
            std::cin >> sx >> sy >> sz;
            originalPoint = scale(originalPoint, sx, sy, sz);
            break;
        default:
            std::cout << "Pilihan tidak valid!\n";
            return 1;
    }

    std::cout << "Titik setelah transformasi: ";
    displayPoint(originalPoint);
    std::cout << std::endl;

    return 0;
}

