#include <iostream> // Library yang dibutuhkan untuk input dan output
using namespace std;

int main() {
    int n, i, s, j; // Deklarasi variabel

    // Meminta pengguna untuk memasukkan jumlah baris
    cout << "Masukan jumlah baris: ";
    cin >> n; // Menyimpan input pengguna ke dalam variabel n

    // Loop untuk setiap baris dari 1 hingga n
    for (i = 1; i <= n; i++) {
        // Loop untuk mencetak spasi
        for (s = i; s < n; s++)
            cout << " "; // Mencetak spasi untuk setiap baris

        // Loop untuk mencetak bintang
        for (j = 1; j <= i; j++)
            cout << "*"; // Mencetak bintang untuk setiap baris

        cout << "\n"; // Pindah ke baris berikutnya setelah mencetak semua spasi dan bintang pada baris ini
    }

    return 0; // Mengembalikan 0 untuk menandakan bahwa program telah selesai dieksekusi dengan sukses
}
