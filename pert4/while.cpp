#include <iostream>

using namespace std;

void penggunaanDoWhile() {
    cout << "Penggunaan DO WHILE" << endl;
    int a = 1; // Perbaikan: Tambahkan titik koma
    int b = 2; // Perbaikan: Tambahkan titik koma
    do {
        cout << a << endl;
        a = a + 1;
    } while (a <= b); // Perbaikan: Gunakan titik koma, tambahkan tanda kurung kurawal

}

void penggunaanWhile() {
    cout << "Penggunaan WHILE" << endl;
    int a = 6;
    int b = 2;
    while (a <= b) {
        cout << a << endl;
        a = a + 1;
    }
}

void penggunaanWhileBreak() {
    cout << "Penggunaan WHILE BREAK" << endl;
    int a = 0;
    while (a <= 5) {
        a = a + 1;
        if (a == 2) {
            cout << a << endl;
            break;
        }
    }
    cout << "Looping di luar while berhenti" << endl;
}

int main() { // Perbaikan: Ubah "int()" menjadi "int main()"
    penggunaanDoWhile(); // Panggil fungsi penggunaanDoWhile()
    penggunaanWhile();   // Panggil fungsi penggunaanWhile()
    penggunaanWhileBreak(); // Panggil fungsi penggunaanWhileBreak()
    return 0;
}
