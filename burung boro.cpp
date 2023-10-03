#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Mendeklarasikan variabel
    double S, V;
    const double g = 10; // Konstanta percepatan gravitasi

    // Membaca nilai sudut peluncuran (S) dalam derajat
    cout << "Masukkan sudut peluncuran (0-90 derajat): ";
    cin >> S;

    // Konversi sudut peluncuran dari derajat ke radian
    double S_rad = S * (M_PI / 180);

    // Membaca nilai kecepatan awal (V)
    cout << "Masukkan kecepatan awal: ";
    cin >> V;

    // Menghitung jarak menggunakan rumus
    double Jarak = (V * V * sin(2 * S_rad)) / g;

    // Menampilkan hasil jarak
    cout << "Jarak terjauh yang dapat ditempuh oleh Boro adalah: " << Jarak << endl;

    return 0;
}
