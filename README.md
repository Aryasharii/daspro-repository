# Daftar Isi

- [BAB I - CARA KERJA PROGRAM](#bab-i---cara-kerja-program)
  - [Input Pemasukkan](#input-pemasukkan)
  - [Input Pengeluaran](#input-pengeluaran)
  - [Fungsi Laporan](#fungsi-laporan)
  - [Cari Data](#cari-data)
  - [Exit](#exit)
  - [Diagram Alur (flowchart)](#diagram-alur-flowchart)
- [BAB II - HASIL DAN PEMBAHASAN](#bab-ii---hasil-dan-pembahasan)
  - [2.1 Menu Input Pemasukan](#21-menu-input-pemasukan)
  - [Input Pengeluaran](#input-pengeluaran-1)
  - [Laporan Keuangan](#laporan-keuangan)
  - [Cari data](#cari-data-1)
  - [Exit](#exit-1)
- [BAB III - SIMPULAN DAN SARAN](#bab-iii---simpulan-dan-saran)
  - [3.1 Simpulan](#31-simpulan)
  - [3.2 Saran](#32-saran)

# BAB I - CARA KERJA PROGRAM

## Input Pemasukkan
Program dimulai dengan menampilkan pilihan menu yang tersedia. Menu terdiri dari:
- [1] Input pemasukkan
- [2] Input pengeluaran
- [3] Laporan keuangan
- [4] Cari data
- [0] Keluar

Saya akan diminta untuk memilih salah satu menu di atas. Jika saya memasukkan angka 1, maka program akan berlanjut ke menu input pemasukkan. Setelah masuk ke menu input pemasukkan, saya akan diminta untuk memasukkan nama saya. Setelah memasukkan nama, program kemudian akan menuliskan kembali inputan nama saya menjadi kata cetak (huruf kapital). Saya akan diminta untuk memasukkan bulan berapa data tersebut dimasukkan. Setelah memasukkan semua data yang diminta, program akan menampilkan kembali hasil inputan saya. Data yang ditampilkan program adalah:
- Nama User (yang telah diubah ke dalam bentuk cetak).
- Jumlah uang yang dimasukkan/disetor.
- Bulan penginputan data.

Program kemudian akan kembali ke menu pilihan utama.

## Input Pengeluaran
Ketika program meminta untuk memasukkan menu dan saya memasukkan angka 2, maka program akan berlanjut ke menu input pengeluaran. Program akan menampilkan jenis pengeluaran beserta dengan jumlah pengeluarannya setiap bulan. Jenis pengeluarannya adalah:
- [1] WiFi = Rp. 500.000
- [2] Listrik = Rp. 200.000
- [3] Gas = Rp. 20.000
- [4] Air PDAM = Rp. 250.000
- [5] Galon = Rp. 900.000
- [6] Kebersihan = Rp. 50.000

Selanjutnya, program akan meminta saya memasukkan bulan berapa pengeluaran tersebut dilakukan. Pilihan bulan mulai dari 1-12 (Januari - Desember). Setelah memilih salah satu bulan, saya akan diminta untuk memasukkan jumlah pengeluaran pada bulan tersebut, dimulai dari WiFi, Listrik, Gas, Air PDAM, Galon, dan terakhir Kebersihan. Setelah memasukkan seluruh pengeluaran, program akan menampilkan jumlah total pengeluaran pada bulan tersebut. Program kemudian akan kembali ke menu pilihan utama.

## Fungsi Laporan
Ketika program meminta untuk memasukkan menu dan saya memasukkan angka 3, maka program akan berlanjut ke menu laporan keuangan. Saya akan diminta untuk memasukkan nomor bulan laporan yang ingin ditampilkan. Setelah memasukkan nomor bulan, laporan akan dimuat ke dalam file `Report.txt`. Program kemudian akan kembali ke menu pilihan utama.

## Cari Data
Ketika program meminta untuk memasukkan menu dan saya memasukkan angka 4, maka program akan berlanjut ke menu cari data. Saya diminta memasukkan nama yang ingin dicari (nama user). Apabila nama yang dicari ada pada program, maka program akan menampilkan pada indeks berapa nama tersebut berada. Jika nama yang dicari tidak ditemukan, program akan langsung kembali ke menu pilihan utama.

## Exit
Ketika program meminta untuk memasukkan menu dan saya memasukkan angka 0, maka program akan berhenti. Semua inputan yang dilakukan sebelum program dihentikan akan diolah datanya oleh program. Jika program dihentikan tanpa menggunakan menu yang ada, maka data-data yang dimasukkan sebelumnya tidak akan diolah.

## Diagram Alur (flowchart)

![Flowchart](https://github.com/Aryasharii/daspro-repository/blob/tubes/image/image19.png)

![Flowchart](https://github.com/Aryasharii/daspro-repository/blob/tubes/image/image1.png)

![Flowchart](https://github.com/Aryasharii/daspro-repository/blob/tubes/image/image24.png)

![Flowchart](https://github.com/Aryasharii/daspro-repository/blob/tubes/image/image14.png)

![Flowchart](https://github.com/Aryasharii/daspro-repository/blob/tubes/image/image9.png)

# BAB II - HASIL DAN PEMBAHASAN

## 2.1 Menu Input Pemasukan
Tampilan awal program ketika dijalankan akan menampilkan menu yang ada. Saya akan diminta untuk memasukkan pilihan menu yang diinginkan. Jika saya memasukkan angka 1, maka program akan masuk ke menu input pemasukkan. Saya akan diminta untuk memasukkan nama saya. Setelah memasukkan nama, program akan mengubah nama saya menjadi huruf cetak (kapital). Selanjutnya, saya akan diminta untuk memasukkan jumlah uang yang ingin disetor. Setelah memasukkan jumlah uang yang disetor, program akan meminta saya untuk memasukkan bulan data tersebut diinput. Setelah memasukkan bulan, program akan menampilkan semua input yang ada, baik yang baru dimasukkan maupun yang telah tersimpan sebelumnya. Karena ada fungsi pause, saya diminta untuk menekan sembarang tombol (key). Setelah menekan tombol, program akan menampilkan menu awal lagi dan meminta saya untuk memilih menu yang tersedia. Data yang saya masukkan akan tersimpan dalam `fileName.txt` (nama user

), `fileCash.txt` (jumlah setoran), dan `fileMonth.txt` (bulan inputan).

![Flowchart](https://github.com/Aryasharii/daspro-repository/blob/tubes/image/image3.png)

![Flowchart](https://github.com/Aryasharii/daspro-repository/blob/tubes/image/image8.png)

![Flowchart](https://github.com/Aryasharii/daspro-repository/blob/tubes/image/image11.png)

![Flowchart](https://github.com/Aryasharii/daspro-repository/blob/tubes/image/image18.png)

![Flowchart](https://github.com/Aryasharii/daspro-repository/blob/tubes/image/image2.png)

![Flowchart](https://github.com/Aryasharii/daspro-repository/blob/tubes/image/image22.png)

![Flowchart](https://github.com/Aryasharii/daspro-repository/blob/tubes/image/image3.png)

![Flowchart](https://github.com/Aryasharii/daspro-repository/blob/tubes/image/image13.png)

![Flowchart](https://github.com/Aryasharii/daspro-repository/blob/tubes/image/image16.png)

![Flowchart](https://github.com/Aryasharii/daspro-repository/blob/tubes/image/image12.png)

## Input Pengeluaran
Jika saya memasukkan angka 2 pada pilihan menu, program akan masuk ke menu input pengeluaran. Program akan menampilkan variabel pengeluaran di tiap bulannya. Selanjutnya, saya akan diminta memasukkan bulan pengeluaran tersebut dilakukan, dengan pilihan 1-12. Setelah memasukkan bulan pengeluaran, misalnya 1, program akan meminta saya untuk memasukkan pengeluaran yang ada. Jika pengeluaran dilakukan, saya bisa mengisi sesuai dengan daftar di atas (sebagai parameter). Jika tidak dilakukan pengeluaran pada variabel tertentu, saya bisa mengisi dengan 0. Jika sudah mengisi semua variabel, program akan menampilkan total pengeluaran yang dilakukan. Karena ada fungsi pause, saya diminta untuk menekan sembarang tombol (key). Setelah menekan tombol, program akan menampilkan menu awal lagi dan meminta saya untuk memilih menu yang tersedia.

![Flowchart](https://github.com/Aryasharii/daspro-repository/blob/tubes/image/image21.png)

![Flowchart](https://github.com/Aryasharii/daspro-repository/blob/tubes/image/image10.png)

![Flowchart](https://github.com/Aryasharii/daspro-repository/blob/tubes/image/image3.png)

## Laporan Keuangan
Jika saya memasukkan angka 3 pada pilihan menu, program akan masuk ke menu laporan keuangan. Program akan meminta saya untuk memasukkan bulan laporan yang ingin dibuat. Setelah saya memasukkan bulan laporan, misalnya 1, program akan membuat laporan pada `fileReport.txt`. Karena ada fungsi pause, saya diminta untuk menekan sembarang tombol (key). Setelah menekan tombol, program akan menampilkan menu awal lagi dan meminta saya untuk memilih menu yang tersedia.

![Flowchart](https://github.com/Aryasharii/daspro-repository/blob/tubes/image/image15.png)

![Flowchart](https://github.com/Aryasharii/daspro-repository/blob/tubes/image/image4.png)

![Flowchart](https://github.com/Aryasharii/daspro-repository/blob/tubes/image/image20.png)

![Flowchart](https://github.com/Aryasharii/daspro-repository/blob/tubes/image/image3.png)

## Cari Data
Jika saya memasukkan angka 4 pada pilihan menu, program akan masuk ke menu cari data. Program akan meminta saya untuk memasukkan nama (user) yang ingin dicari dalam program. Setelah memasukkan nama, program akan mencari nama tersebut dalam program. Apabila nama yang dicari ada, program akan menampilkan indeks dari nama tersebut beserta data dari nama (user) tersebut. Apabila nama yang dicari tidak ada, program akan kembali ke fungsi pause tanpa menampilkan data apapun. Karena ada fungsi pause, saya diminta untuk menekan sembarang tombol (key). Setelah menekan tombol, program akan menampilkan menu awal lagi dan meminta saya untuk memilih menu yang tersedia.

![Flowchart](https://github.com/Aryasharii/daspro-repository/blob/tubes/image/image17.png)

![Flowchart](https://github.com/Aryasharii/daspro-repository/blob/tubes/image/image23.png)

![Flowchart](https://github.com/Aryasharii/daspro-repository/blob/tubes/image/image5.png)

![Flowchart](https://github.com/Aryasharii/daspro-repository/blob/tubes/image/image3.png)

## Exit
Jika saya memasukkan angka 0 pada pilihan menu, program akan berhenti berjalan. Data-data input masukan yang sebelumnya telah saya tambahkan akan tersimpan dalam program dan bisa diolah kembali ketika program dijalankan lagi.

![Flowchart](https://github.com/Aryasharii/daspro-repository/blob/tubes/image/image6.png)

# BAB III - SIMPULAN DAN SARAN

## 3.1 Simpulan
Untuk menyimpulkan hasil dari program yang saya buat, saya merangkumnya dalam beberapa pertanyaan solusi di bawah ini:
- Apakah program ini bisa dioperasikan dengan mudah?
  - Ya, aplikasi dapat dioperasikan dengan mudah. Dengan menu-menu serta fitur yang ada yang dibuat dengan tidak terlalu rumit dapat membantu pengguna untuk bisa mengoperasikannya dengan mudah.
- Apakah program ini dapat membantu dalam manajemen keuangan?
  - Ya, dengan fitur-fitur yang tersedia, aplikasi dapat membantu pengguna dalam manajemen keuangan. Mulai dari pemasukan, pengeluaran, dan pembuatan laporan, semuanya dapat dilakukan pada aplikasi ini.
- Apakah solusi yang diberikan akan berdampak pada pengguna?
  - Ya, aplikasi ini memberikan dampak yang baik terhadap pengguna. Pengguna dapat memanfaatkan fitur-fitur yang ada untuk membantu manajemen pemasukan dan pengeluaran uang yang dilakukan.

## 3.2 Saran
Saya berharap ke depannya bisa dilakukan penambahan fitur-fitur pada program yang sekiranya dapat membantu pengguna dalam pengolahan manajemen keuangan. Saya juga berharap mendapatkan masukan dari pengguna jika menemukan kekurangan dari penggunaan program ini, agar ke depannya bisa dilakukan perbaikan terhadap program
