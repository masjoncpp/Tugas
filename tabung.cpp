// Menghitung volume tabung (botol minum)
// Menggunakan class
// Jum'at, 2 Maret 2025
// Programmer : A11.2024.16048
#include <iostream>
#include <cmath>
using namespace std;

// Mendefinisikan class Tabung (Botol Minum)
class Tabung {
private:
    float jari, tinggi;

public:
    // constructor
    Tabung(float r, float t) {
        jari = r;
        tinggi = t;
    }

    // Fungsi untuk menghitung volume tabung
    double hitungVolume() {
        return M_PI * jari* jari* tinggi;
    }

    // Fungsi untuk menampilkan hasil perhitungan
    void tampilkanHasil() {
        cout << "Volume Tabung (Botol Minum) : " << hitungVolume() << " cm kubik\n";
    }
};

int main() {
    float jari, tinggi;

    // Memasukkan ukuran tabung (botol minum) dari pengguna
    cout << "Masukkan jari-jari tabung (botol minum): "; cin >> jari;
    cout << "Masukkan tinggi tabung (botol minum): "; cin >> tinggi;

    // Membuat objek Tabung
    Tabung tabung(jari, tinggi);

    // Menampilkan hasil perhitungan tabung
    tabung.tampilkanHasil();

    return 0;
}
