#include <iostream>
using namespace std;

void menu() {
    cout << "Menu Operasi Aritmatika:" << endl;
    cout << "1. Penambahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
}

void operasi(int pilihan) {
    double angka1, angka2;
    cout << "Masukkan Angka Pertama: ";
    cin >> angka1;
    cout << "Masukkan Angka Kedua: ";
    cin >> angka2;

    switch (pilihan) {
        case 1:
            cout << "Hasil Penambahan: " << (angka1 + angka2) << endl;
            break;
        case 2:
            cout << "Hasil Pengurangan: " << (angka1 - angka2) << endl;
            break;
        case 3:
            cout << "Hasil Perkalian: " << (angka1 * angka2) << endl;
            break;
        case 4:
            if (angka2 != 0) {
                cout << "Hasil Pembagian: " << (angka1 / angka2) << endl;
            } else {
                cout << "Pembagian tidak dapat dilakukan. Angka kedua adalah nol." << endl;
            }
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
    }
}

int main() {
    menu();
    int pilihan;
    cout << "Masukkan pilihan Anda (1-4): ";
    cin >> pilihan;
    operasi(pilihan);

    return 0;
}