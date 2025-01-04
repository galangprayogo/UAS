#include <iostream>
#include <string>
using namespace std;

int main() {
    double saldo_awal, saldo, total_pengeluaran = 0;
    int pilihan;

    cout << "Masukkan saldo awal: ";
    cin >> saldo_awal;
    saldo = saldo_awal;

    do {
        cout << "\nMenu Utama:" << endl;
        cout << "1. Tambah Pengeluaran" << endl;
        cout << "2. Tampilkan Total Pengeluaran" << endl;
        cout << "3. Tampilkan Sisa Saldo" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu (1-4): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                string kategori;
                double jumlah;
                cout << "Masukkan kategori pengeluaran: ";
                cin >> kategori;
                cout << "Masukkan jumlah pengeluaran untuk " << kategori << ": ";
                cin >> jumlah;
                if (jumlah <= saldo) {
                    saldo -= jumlah;
                    total_pengeluaran += jumlah;
                    cout << "Pengeluaran " << kategori << " sebesar " << jumlah << " telah ditambahkan." << endl;
                } else {
                    cout << "Saldo tidak mencukupi!" << endl;
                }
                break;
            }
            case 2:
                cout << "Total pengeluaran sejauh ini: " << total_pengeluaran << endl;
                break;
            case 3:
                cout << "Sisa saldo saat ini: " << saldo << endl;
                break;
            case 4:
                cout << "Terima kasih telah menggunakan KeuanganHarian. Sampai jumpa!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid, silakan pilih lagi." << endl;
        }
    } while (pilihan != 4);

    return 0;
}
