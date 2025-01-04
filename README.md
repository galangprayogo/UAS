

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


