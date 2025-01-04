#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

struct Mahasiswa {
    string NIM;
    string Nama;
    double NilaiAkhir;
};

vector<Mahasiswa> dataMahasiswa;

void tambahMahasiswa() {
    int jumlah;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlah;
    for (int i = 0; i < jumlah; i++) {
        Mahasiswa m;
        cout << "NIM: ";
        cin >> m.NIM;
        cout << "Nama: ";
        cin.ignore();
        getline(cin, m.Nama);
        cout << "Nilai Akhir: ";
        cin >> m.NilaiAkhir;
        dataMahasiswa.push_back(m);
    }
}

void tampilkanSemua() {
    cout << "\nData Mahasiswa:\n";
    for (const auto& m : dataMahasiswa) {
        cout << "NIM: " << m.NIM << ", Nama: " << m.Nama << ", Nilai Akhir: " << m.NilaiAkhir << endl;
    }
}

void cariMahasiswa() {
    string nim;
    cout << "Masukkan NIM yang dicari: ";
    cin >> nim;
    for (const auto& m : dataMahasiswa) {
        if (m.NIM == nim) {
            cout << "NIM: " << m.NIM << ", Nama: " << m.Nama << ", Nilai Akhir: " << m.NilaiAkhir << endl;
            return;
        }
    }
    cout << "Mahasiswa dengan NIM " << nim << " tidak ditemukan." << endl;
}

void urutkanMahasiswa() {
    sort(dataMahasiswa.begin(), dataMahasiswa.end(), [](Mahasiswa a, Mahasiswa b) {
        return a.NilaiAkhir > b.NilaiAkhir;
    });
    cout << "Data telah diurutkan berdasarkan Nilai Akhir (descending)." << endl;
}

void simpanKeBerkas() {
    ofstream file("data_mahasiswa.txt");
    for (const auto& m : dataMahasiswa) {
        file << m.NIM << "," << m.Nama << "," << m.NilaiAkhir << endl;
    }
    file.close();
    cout << "Data berhasil disimpan ke dalam berkas." << endl;
}

void bacaDariBerkas() {
    ifstream file("data_mahasiswa.txt");
    string nim, nama;
    double nilai;
    dataMahasiswa.clear();
    while (file >> nim) {
        file.ignore();
        getline(file, nama, ',');
        file >> nilai;
        Mahasiswa m = {nim, nama, nilai};
        dataMahasiswa.push_back(m);
    }
    file.close();
    cout << "Data berhasil dibaca dari berkas." << endl;
}

int main() {
    int pilihan;
    do {
        cout << "\nMenu Utama:" << endl;
        cout << "1. Tambah Data Mahasiswa" << endl;
        cout << "2. Tampilkan Semua Data" << endl;
        cout << "3. Cari Data Mahasiswa" << endl;
        cout << "4. Urutkan Data" << endl;
        cout << "5. Simpan Data ke Berkas" << endl;
        cout << "6. Baca Data dari Berkas" << endl;
        cout << "7. Keluar" << endl;
        cout << "Pilih menu (1-7): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tambahMahasiswa();
                break;
            case 2:
                tampilkanSemua();
                break;
            case 3:
                cariMahasiswa();
                break;
            case 4:
                urutkanMahasiswa();
                break;
            case 5:
                simpanKeBerkas();
                break;
            case 6:
                bacaDariBerkas();
                break;
            case 7:
                cout << "Terima kasih telah menggunakan program ini." << endl;
                break;
            default:
                cout << "Pilihan tidak valid, silakan pilih lagi." << endl;
        }
    } while (pilihan != 7);
    return 0;
}
