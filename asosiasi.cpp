#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien { //asosiasi
public :
    string nama;
    vector<dokter*> daftar_dokter;
    pasien(string pNama) :nama(pNama) {
        cout << "pasien \"" << nama <<  "\" tidak ada\n";
    }
    void tambahDokter(dokter*);
    void cetakDokter();    
};

class dokter {
public :
    string nama;
    vector<pasien*> daftar_pasien;

    dokter(string pNama) :nama(pNama) {
        cout << "Dokter \"" << nama << "\" ada\n";
    }
    ~dokter() {
        cout << "Dokter \"" << nama << "\" tidak ada\n";
    }

        int jumlah(int a, int b) {
            return a + b;
        }
};


    pelajar(string pNama, string pSekolah) : orang(pNama), sekolah(pSekolah) {
        cout << "Pelajar dibuat\n" << endl;
    }
    ~pelajar() {
        cout << "Pelajar dihapus\n" << endl;
    }
    string perkenalan() {
        return "Hallo, nama saya " + nama + "dari sekolah " + sekolah + "\n\n";
    }
};

int main() {
    pelajar siswa1("andi laksono", "SMAN 1 Bantul");
    cout << siswa1.perkenalan();
    cout << "Hasil = " << siswa1.jumlah(10, 90) << endl;

    return 0;
}