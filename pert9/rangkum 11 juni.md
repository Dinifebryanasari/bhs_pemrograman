# Definisi 
Array adalah struktur yang dapat menyimpan dan mengatur kumpulan data, struktur data membahas tentang cara menyimpan, mengatur, mengelompokan, merepresentasikan data. Memahami struktur data sangatlah penting bagi seorang programmer karena banyak masalah pemrograman yang dapat diselesaikan dengan pengetahuan ini.

# Materi Lanjutan: Himpunan dan Kamus
Himpunan (Set) dalam Python: Himpunan adalah tipe data kelompok yang digunakan untuk menyimpan banyak nilai dalam satu variabel dengan karakteristik sebagai berikut:
* Nilai Anggota Unik: Setiap nilai yang disimpan dalam himpunan harus unik, artinya tidak boleh ada duplikat.
* Nilai Tidak Dapat Diubah: Setelah dimasukkan ke dalam himpunan, nilai-nilai tersebut tidak bisa diubah.
* Tidak Berurutan: Himpunan tidak memiliki urutan tertentu, sehingga tidak bisa diakses berdasarkan indeks.

# Himpunan (Set) dalam Python

* A. Tidak Terurut (Set)
Himpunan adalah tipe kumpulan data yang tidak berurutan. Artinya, kita tidak bisa menggunakan indeks untuk mengakses nilai dalam himpunan. Jika kita mencoba mengakses elemen menggunakan indeks, akan terjadi error.

* B. Tidak Dapat Diubah (Set)
Himpunan bersifat tidak dapat diubah, artinya nilai yang telah dimasukkan ke dalam himpunan tidak dapat diubah lagi. Namun, kita masih dapat menambah dan menghapus anggota dari himpunan tersebut. Karena sifat tidak dapat diubah, himpunan hanya dapat menerima anggota yang juga bertipe data tidak dapat diubah (immutable).

* C. Tidak Ada Nilai Duplikat (Set)
Himpunan (set) dalam Python tidak dapat menerima nilai duplikat. Jika kita memasukkan suatu nilai yang sudah ada pada suatu himpunan, maka nilai tersebut hanya akan muncul satu kali saja.

* D. Tambahkan/Perbarui Elemen Set
Meskipun nilai yang ada dalam himpunan (set) tidak dapat diubah, kita tetap dapat menambah dan menghapus anggota himpunan. Kita dapat menambahkan anggota baru ke himpunan dengan menggunakan fungsi add() dan update().

* E. Hapus Elemen dari Set
Untuk menghapus anggota dari suatu himpunan, ada beberapa fungsi yang dapat kita gunakan:
  - remove(nilai): Menghapus nilai yang dicari. Jika nilai yang dicari tidak ada maka akan terjadi error.
  - discard(nilai): Menghapus nilai yang dicari. Jika nilai yang dicari tidak ada maka tidak akan terjadi error.
  - pop(): Mengambil dan menghapus elemen acak dari himpunan.
  - clear(): Menghapus semua anggota dari himpunan.

* F. Fungsi (Set)
Berikut ringkasan fungsi bawaan tipe data set yang bisa kita gunakan:

| Fungsi | Kegunaan |
| --- | --- |
| add() | Menambahkan satu anggota ke set |
| clear() | Menghapus seluruh rangkaian |
| copy() | Membuat salinan himpunan |
| difference() | Menghasilkan perbedaan antara dua himpunan |
| difference_update() | Menghapus anggota himpunan lain yang ada di himpunan saat ini |
| discard() | Menghapus satu anggota dari himpunan |
| intersection() | Menghasilkan irisan antara dua himpunan |
| intersection_update() | Memperbarui himpunan dengan irisan dari dua himpunan |
| isdisjoint() | Mengecek apakah dua himpunan tidak memiliki irisan |
| issubset() | Mengecek apakah himpunan lain memiliki anggota dari himpunan saat ini |
| issuperset() | Mengecek apakah himpunan saat ini memiliki anggota dari himpunan lain |
| pop() | Menghapus dan mengembalikan nilai dari himpunan |
| remove() | Menghapus nilai dari himpunan, akan error jika nilai tidak ada |
| symmetric_difference() | Menghasilkan himpunan yang berisi elemen yang ada di salah satu himpunan, tetapi tidak di kedua himpunan |
| symmetric_difference_update() | Memperbarui himpunan saat ini dengan hasil komplemen antara dua himpunan |
| union() | Menghasilkan himpunan yang merupakan gabungan dari dua atau lebih himpunan |
| update() | Memperbarui himpunan saat ini dengan menambahkan nilai-nilai yang ditentukan |

# Kamus dalam Python

Kamus dalam Python adalah tipe data yang menyimpan pasangan key-value (kunci-nilai). Berikut adalah poin-poin penting tentang kamus dalam Python serta beberapa contoh penggunaannya.

### Sifat-Sifat Kamus
1. *Tidak Berurutan (Unordered)*: Kamus tidak menyimpan elemen dalam urutan tertentu, sehingga elemen pertama yang ditambahkan tidak selalu berada di urutan pertama.
2. *Dapat Diubah (Changeable)*: Nilai dalam kamus dapat diubah setelah kamus dibuat.
3. *Unik (Unique)*: Setiap kunci dalam kamus harus unik. Jika ada dua kunci yang sama, kunci yang terakhir akan menggantikan nilai dari kunci sebelumnya.

### Membuat Kamus
Ada dua cara untuk membuat kamus di Python:
1. Menggunakan kurung kurawal {}.
2. Menggunakan fungsi dict().

### Menambahkan/Memperbarui Elemen Kamus
Untuk menambahkan atau memperbarui elemen dalam kamus, cukup tetapkan nilai baru pada kunci tertentu.

### Menghapus Elemen Kamus
Ada dua cara untuk menghapus elemen dalam kamus:
1. Menggunakan pernyataan del.
2. Menggunakan fungsi pop().

### Operator Keanggotaan
Operator keanggotaan (in dan not in) digunakan untuk memeriksa apakah suatu kunci ada dalam kamus.

### Fungsi Bawaan Kamus
Beberapa fungsi bawaan yang bisa digunakan dengan kamus adalah:
- all(): Mengembalikan True jika semua kunci dalam kamus bernilai True (atau jika kamus kosong).
- any(): Mengembalikan True jika salah satu kunci dalam kamus bernilai True. Jika kamus kosong, mengembalikan False.
- len(): Mengembalikan panjang (jumlah item) dalam kamus.
- sorted(): Mengembalikan daftar kunci yang diurutkan dalam kamus.