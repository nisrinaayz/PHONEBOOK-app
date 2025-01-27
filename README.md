# Aplikasi PhoneBook

Proyek ini adalah aplikasi PhoneBook sederhana berbasis command-line yang memungkinkan pengguna untuk mengelola kontak mereka. Pengguna dapat menambahkan kontak baru, mencari kontak yang sudah ada, dan keluar dari aplikasi.

## Struktur Proyek
```
phonebook-app
├── src
│   ├── main.cpp        # Berisi fungsi utama dan logika interaksi pengguna
│   ├── PhoneBook.cpp   # Mengimplementasikan metode PhoneBook class
│   ├── PhoneBook.h     # Mendefinisikan PhoneBook class
│   ├── Contact.cpp      # Mengimplementasikan metode Contact class
│   ├── Contact.h        # Mendefinisikan Contact class
└── README.md           # Dokumentasi untuk proyek
```

## Kompilasi dan Eksekusi

Untuk mengompilasi proyek, navigasikan ke direktori `src` dan gunakan perintah berikut:


```
g++ -o phonebook main.cpp PhoneBook.cpp Contact.cpp
```

Untuk menjalankan aplikasi, eksekusi perintah berikut:


```
./phonebook
```

## Fungsionalitas

### Perintah

- **ADD**: Memungkinkan pengguna untuk menambahkan kontak baru dengan memberikan nama, lokasi, alamat, dan kekuatan.
- **SEARCH**: Memungkinkan pengguna untuk mencari kontak berdasarkan nama dan menampilkan detailnya.
- **EXIT**: Keluar dari aplikasi.

### Kelas

- **Contact**: Mewakili sebuah kontak dengan properti seperti nama, tempat tinggal, alamat, dan kekuatan. Termasuk metode untuk menampilkan informasi kontak dan mengakses nama.

- **PhoneBook**: Mengelola daftar kontak. Memungkinkan penambahan kontak baru (hingga maksimum 8) dan pencarian kontak yang sudah ada berdasarkan nama.

## Penggunaan

1. Mulai aplikasi.
2. Gunakan perintah `ADD` untuk menyimpan informasi kontak baru.
3. Gunakan perintah `SEARCH` untuk display kontak yang spesifik -- mencari kontak berdasarkan nama.
4. Gunakan perintah `EXIT` untuk menutup aplikasi.

Aplikasi PhoneBook ini adalah demonstrasi sederhana dari prinsip-prinsip pemrograman berorientasi objek dalam C++.