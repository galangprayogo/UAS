

# README

## Manajemen Data
Program ini adalah aplikasi manajemen data mahasiswa sederhana yang menggunakan bahasa pemrograman C++. Program ini memungkinkan pengguna untuk:
1. Menambah data mahasiswa.
2. Menampilkan semua data mahasiswa.
3. Mencari mahasiswa berdasarkan NIM.
4. Mengurutkan data mahasiswa berdasarkan nilai akhir (descending).
5. Menyimpan data mahasiswa ke dalam berkas.
6. Membaca data mahasiswa dari berkas.

Program ini memanfaatkan fitur **struct**, **vector**, dan **file I/O** di C++ untuk mengelola data secara efisien.

---

## Fitur Program
1. **Tambah Data Mahasiswa**  
   Pengguna dapat menambahkan data mahasiswa, termasuk NIM, nama, dan nilai akhir.

2. **Tampilkan Semua Data**  
   Menampilkan seluruh data mahasiswa yang telah dimasukkan.

3. **Cari Mahasiswa**  
   Mencari data mahasiswa berdasarkan NIM dan menampilkan informasi terkait jika ditemukan.

4. **Urutkan Data**  
   Mengurutkan data mahasiswa berdasarkan nilai akhir secara menurun (descending).

5. **Simpan Data ke Berkas**  
   Menyimpan data mahasiswa ke dalam file `data_mahasiswa.txt` agar dapat digunakan kembali.

6. **Baca Data dari Berkas**  
   Membaca data mahasiswa dari file `data_mahasiswa.txt` untuk melanjutkan pekerjaan sebelumnya.

7. **Keluar**  
   Menutup program.

---

## Struktur Data
Program ini menggunakan struct `Mahasiswa` dengan atribut berikut:
- `NIM` (string): Nomor Induk Mahasiswa.
- `Nama` (string): Nama mahasiswa.
- `NilaiAkhir` (double): Nilai akhir mahasiswa.

Data mahasiswa disimpan dalam **vector** bernama `dataMahasiswa`.




## Manajement Keuangan
Program ini adalah aplikasi sederhana untuk manajemen keuangan pribadi yang memungkinkan pengguna mencatat pengeluaran, memantau total pengeluaran, dan melihat sisa saldo. Program ini menggunakan bahasa pemrograman C++ dan berfungsi untuk membantu pengguna mengelola keuangan harian dengan lebih baik.

---

## Fitur Program
1. **Tambah Pengeluaran**  
   Pengguna dapat mencatat pengeluaran berdasarkan kategori dan jumlah. Program akan secara otomatis mengurangi saldo jika jumlah pengeluaran mencukupi.

2. **Tampilkan Total Pengeluaran**  
   Menampilkan jumlah total pengeluaran yang telah dicatat.

3. **Tampilkan Sisa Saldo**  
   Menunjukkan saldo yang tersisa setelah dikurangi dengan total pengeluaran.

4. **Keluar**  
   Menutup program.

---

## Cara Menggunakan Program
1. Kompilasi program menggunakan compiler C++ (contoh: `g++`).
   ```bash
   g++ -o keuangan_harian keuangan_harian.cpp
   ```
2. Jalankan program:
   ```bash
   ./keuangan_harian
   ```
3. Masukkan saldo awal yang tersedia saat diminta.
4. Pilih menu sesuai kebutuhan:
   - Masukkan angka yang sesuai dengan menu untuk menjalankan fitur tertentu.
   - Ikuti instruksi yang ditampilkan pada layar.

---

## Contoh Alur Program
1. **Masukkan Saldo Awal**  
   - Input: `100000`  
   - Program menetapkan saldo awal sebesar 100,000.

2. **Tambah Pengeluaran**  
   - Input:  
     - Kategori: `Makan`  
     - Jumlah: `25000`  
   - Output:  
     - "Pengeluaran Makan sebesar 25000 telah ditambahkan."  
     - Sisa saldo: `75000`.

3. **Tampilkan Total Pengeluaran**  
   - Output:  
     - "Total pengeluaran sejauh ini: 25000".

4. **Tampilkan Sisa Saldo**  
   - Output:  
     - "Sisa saldo saat ini: 75000".

5. **Keluar Program**  
   - Output:  
     - "Terima kasih telah menggunakan KeuanganHarian. Sampai jumpa!"

---

## Validasi Program
- Program akan menolak pengeluaran yang melebihi saldo yang tersedia dengan pesan "Saldo tidak mencukupi!"
- Menu yang tidak valid akan menghasilkan pesan: "Pilihan tidak valid, silakan pilih lagi."

---

## Pengembangan Selanjutnya
- Tambahkan fitur untuk menyimpan data pengeluaran ke dalam file untuk pelacakan historis.
- Implementasikan laporan pengeluaran berdasarkan kategori.
- Tambahkan opsi untuk mengedit atau menghapus pengeluaran yang telah dicatat.
- Buat antarmuka berbasis GUI untuk meningkatkan pengalaman pengguna.
