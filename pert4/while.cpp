# include <iostream>

using namespace std;

// Array adalah penampungan atau wadah dalam variabel.
// Ini berarti array memungkinkan kita untuk menyimpan beberapa nilai dalam satu variabel.

// Contoh:
// int angka[5]; // Ini adalah deklarasi array dengan nama 'angka' yang dapat menampung 5 bilangan bulat.

void dowhile(){
    cout << "Penggunaan DO WHILE" << endl;
    int a = 1;
    int b = 2;
    do {
        cout << a << endl;
        a = a + 1;
    } while (a <= b);
}

void penggunaanwhile(){  
    cout << "Penggunaan WHILE" << endl;
    int a = 6;
    int b = 2;
    while(a <= b){
        cout << a << endl;
        a = a + 1;
    }
}

void penggunaanwhilebreak(){ 
    cout << "Penggunaan WHILE BREAK" << endl;
    int a = 0;
    while(a <= 5){
        a = a + 1;
        if(a == 2){
            cout << a << endl;
            break;
        }
        cout << "Looping while berhenti" << endl;
    }
    cout << "Looping di luar while berhenti" << endl;
}

int main() {
    dowhile();
    penggunaanwhile();
    penggunaanwhilebreak();
    return 0;
}
