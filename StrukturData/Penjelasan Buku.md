### Deskripsi Program

#### Header dan Namespace:
Program dimulai dengan memasukkan header yang diperlukan (`iostream`, `stack`, `string`) dan menggunakan namespace `std`.

#### Fungsi `push(stack<string>& books)`
- Meminta pengguna untuk memasukkan judul buku yang ingin ditambahkan ke dalam tumpukan.
- Menggunakan `cin.ignore()` untuk membersihkan buffer input agar tidak ada masalah dengan newline (`\n`) yang tertinggal setelah operasi `cin`.
- Menggunakan `getline(cin, book)` untuk membaca seluruh baris input pengguna dan menyimpannya ke dalam variabel `book`.
- Memasukkan judul buku ke dalam tumpukan (`books.push(book)`).
- Menampilkan pesan konfirmasi kepada pengguna bahwa buku telah ditambahkan.

#### Fungsi `pop(stack<string>& books)`
- Menghapus buku teratas dari tumpukan jika tumpukan tidak kosong.
- Memeriksa apakah tumpukan kosong dengan `books.empty()`. Jika kosong, menampilkan pesan kesalahan.
- Jika tumpukan tidak kosong, mengambil dan menampilkan judul buku teratas dengan `books.top()`.
- Menghapus buku tersebut dari tumpukan menggunakan `books.pop()`.

#### Fungsi `peek(const stack<string>& books)`
- Melihat judul buku teratas di dalam tumpukan tanpa menghapusnya.
- Jika tumpukan kosong, menampilkan pesan "Tumpukan buku kosong".
- Jika tidak kosong, menampilkan judul buku teratas dengan `books.top()`.

#### Fungsi `isEmpty(const stack<string>& books)`
- Memeriksa apakah tumpukan kosong.
- Menampilkan "Tumpukan buku kosong" jika tumpukan kosong.
- Menampilkan "Tumpukan buku tidak kosong" jika tumpukan tidak kosong.

#### Fungsi `size(const stack<string>& books)`
- Mengembalikan jumlah buku yang ada di dalam tumpukan dengan `books.size()`.
- Menampilkan jumlah buku tersebut kepada pengguna.

#### Fungsi `main()`
- Tempat dimana program dimulai.
- Mendeklarasikan objek `stack<string>` dengan nama `books` untuk menyimpan judul-judul buku.
- Menggunakan loop `while (true)` untuk terus menunggu input dari pengguna.
- Meminta pengguna untuk memilih operasi yang ingin dilakukan (`push`, `pop`, `peek`, `isEmpty`, `size`) dengan memasukkan angka atau kata kunci yang sesuai.
- Setiap operasi diproses sesuai dengan pilihan pengguna dengan memanggil fungsi yang sesuai (`push()`, `pop()`, `peek()`, `isEmpty()`, `size()`).
- Memberikan pesan kesalahan jika pengguna memasukkan perintah yang tidak dikenal, dan meminta pengguna untuk mencoba lagi.