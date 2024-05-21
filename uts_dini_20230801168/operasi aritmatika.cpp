#include <iostream>
using namespace std;

int main() {
    int angka1, angka2;

    cout << "Masukkan Angka Pertama: ";
    cin >> angka1;
    cout << "Masukkan Angka Kedua: ";
    cin >> angka2;

    cout << "\nPenjumlahan: " << (angka1 + angka2) << endl;
    cout << "Pengurangan: " << (angka1 - angka2) << endl;
    cout << "Perkalian: " << (angka1 * angka2) << endl;

    if (angka2 != 0) {
        cout << "Pembagian: " << (static_cast<double>(angka1) / angka2) << endl;
    } else {
        cout << "Pembagian tidak dapat dilakukan. Angka kedua adalah nol." << endl;
    }

    return 0;
}