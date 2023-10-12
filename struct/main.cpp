#include <iostream>
using namespace std;

int main(){
    /*
        struct biasanya digunakan untuk mengelompokkan variabel yang berhubungan dalam satu tempat

        struct {                // deklarasi struktur
            int myNum;          // member (variabel integer)
            string myString;    // member (variabel string)
        } myStructure;          // variabel struct
    */

   struct
   {
    string brand;
    string model;
    int tahun;
   } mobil;

   struct
   {
    string nama;
    string pekerjaan;
    int umur;
   } orang;
   
    mobil.brand = "BMW";
    mobil.model = "M3";
    mobil.tahun = 2018;

    orang.nama = "John";
    orang.pekerjaan = "Programmer";
    orang.umur = 20;

    cout << mobil.brand + " " + mobil.model + " Tahun " << mobil.tahun << endl;
    cout << orang.nama + " " + orang.pekerjaan + " Umur " << orang.umur << " Tahun" << endl;

}