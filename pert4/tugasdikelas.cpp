# include <iostream>
using namespace std;

class Calculator {
    double angka1, angka2;

public:
    void input() {
        cout << "Masukkan angka pertama: ";
        cin >> angka1;
        cout << "Masukkan angka kedua: ";
        cin >> angka2;
    }

    void calculate(int pilihan) {
        switch(pilihan) {
            case 1:
                cout << "Hasil penjumlahan: " << angka1 + angka2 << endl;
                break;
            case 2:
                cout << "Hasil pengurangan: " << angka1 - angka2 << endl;
                break;
            case 3:
                cout << "Hasil perkalian: " << angka1 * angka2 << endl;
                break;
            case 4:
                if(angka2 != 0) {
                    cout << "Hasil pembagian: " << angka1 / angka2 << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Invalid option selected." << endl;
                break;
        }
    }
};

int main() {
    int pilihan;
    Calculator calc;
    do {
        cout << "MENU" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Keluar" << endl;

        cout << "Masukkan pilihan (1-5): ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 4) {
            calc.input();
            calc.calculate(pilihan);
        } else if (pilihan == 5) {
            cout << "Terima kasih telah menggunakan program ini." << endl;
        } else {
            cout << "Pilihan tidak valid. Silakan pilih antara 1-5." << endl;
        }
    } while (pilihan != 5);

    return 0;
}
