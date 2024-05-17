#include <iostream>

using namespace std;

void tampilkanMenuUtama() {
    cout << "Menu Utama:\n";
    cout << "1. Makanan\n";
    cout << "2. Minuman\n";
    cout << "3. Keluar\n";
    cout << "Masukkan pilihan (1-3): ";
}

void tampilkanMenuMakanan() {
    cout << "Menu Makanan:\n";
    cout << "1. Pecel Lele\n";
    cout << "2. Nasi Goreng\n";
    cout << "3. Kembali\n";
    cout << "Masukkan pilihan (1-3): ";
}

void pesanPecelLele() {
    cout << "Anda memesan Pecel Lele.\n";
}

void pesanNasiGoreng() {
    cout << "Anda memesan Nasi Goreng.\n";
}

int main() {
    int pilihan = 0;
    while (pilihan != 3) {
        tampilkanMenuUtama();
        cin >> pilihan;

        if (pilihan == 1) {  // Menu Makanan
            int pilihanMakanan = 0;
            while (pilihanMakanan != 3) {
                tampilkanMenuMakanan();
                cin >> pilihanMakanan;

                if (pilihanMakanan == 1) {
                    pesanPecelLele();
                } else if (pilihanMakanan == 2) {
                    pesanNasiGoreng();
                } else if (pilihanMakanan == 3) {
                    cout << "Kembali ke Menu Utama.\n";
                } else {
                    cout << "Pilihan tidak valid. Silakan coba lagi.\n";
                }
            }
        } else if (pilihan == 2) {  // Menu Minuman
            cout << "Maaf, menu minuman belum tersedia.\n";
        } else if (pilihan == 3) {  // Keluar
            cout << "Keluar dari program.\n";
        } else {
            cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    }

    return 0;
}
