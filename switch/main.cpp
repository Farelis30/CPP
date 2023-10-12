#include <iostream>
using namespace std;

int main() {
    int pilihan;

    cout << "Operasi matematika: " << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "Pilih operasi yang anda inginkan: ";
    cin >> pilihan;

    /*
        switch digunakan untuk mengembalikan satu nilai dari blok kode tergantung pilihan ekspresi
        case digunakan untuk menentukan kasus kasus yang bisa dipilih pada ekspresi
        break digunakan untuk untuk menghentikan kasus agar kasus lainnya tidak dieksekusi
        default digunakan untuk mengembalikkan nilai jika semua kasus tidak tereksekusi
    */
    switch (pilihan) {
        case 1:  // Jika pilihan sama dengan 1
            cout << "Anda memilih Penjumlahan." << endl;
            break;            
        case 2:  // Jika pilihan sama dengan 2
            cout << "Anda memilih Pengurangan." << endl;
            break;
        case 3:  // Jika pilihan sama dengan 3
            cout << "Anda memilih Perkalian." << endl;
            break;
        case 4:  // Jika pilihan sama dengan 4
            cout << "Anda memilih Pembagian." << endl;
            break;
        default:  // Jika pilihan tidak sesuai dengan kasus di atas
            cout << "Pilihan tidak valid." << endl;
    }
    
}