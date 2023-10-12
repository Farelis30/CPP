#include <iostream>
using namespace std;

int main(){
    int nilai;

    cout << "masukkan nilai : ";
    cin >> nilai;

    /*
        if digunakan untuk mengembalikan nilai yang kita inginkan selama kondisi yang terdapat didalamnya terpenuhi
        else if digunakan untuk mengembalikan nilai yang kita inginkan jika pada kondisi if tidak terpenuhi
        else digunakan untuk mengembalikan nilai yang kita inginkan jika semua kondisi if dan else if tidak terpenuhi
    */

    if(nilai >= 80){
        cout << "Anda mendapatkan nilai A" << endl;
    }else if(nilai >= 70){
        cout << "Anda mendapatkan nilai B" << endl;
    }else if(nilai >= 60){
        cout << "Anda mendapatkan nilai C" << endl;
    }else if(nilai >= 50){
        cout << "Anda mendapatkan nilai D" << endl;
    }else {
        cout << "Anda mendapatkan nilai E" << endl;
    }

    cout << endl; 

    // short hand conditions
    char jenisKelamin;
    cout << "Masukkan jenis kelamin anda (l,p)? : ";
    cin >> jenisKelamin;
    string hasil = (jenisKelamin == 'l') ? "Jenis kelamin anda laki laki" : "Jenis kelamin anda perempuan";
    cout << hasil;
    
}