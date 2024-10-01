<div align="center">

<b>TUGAS PENDAHULUAN</b>

<b>STRUKTUR DATA</b>

<b>MODUL 02</b>

<img src="../../logo-TU.webp" alt="Logo TelU" width="400">

<br><br>

Nama: 

Nizar Daffa Maulana (2311104019)

Dosen: 

Yudha Islami Sulistya, S.Kom., M.Kom.

<br><br>

**PROGRAM STUDI S1 REKAYASA PERANGKAT LUNAK**

**FAKULTAS INFORMATIKA**

**TELKOM UNIVERSITY PURWOKERTO**

**2024**

</div>

# Soal

- Soal TP: [Tugas-Pendahuluan-02.pdf](/TP%20MODUL%202%20STD%20-%202425.pdf)

# Jawaban

1. Jawaban:

    Source code:

    ```cpp
    #include <iostream>

    using namespace std;

    int kendaraan(int kapasitas_kendaraan, int jumlah_penumpang) {
        int jumlah;

        jumlah = jumlah_penumpang / kapasitas_kendaraan;

        if (jumlah_penumpang % kapasitas_kendaraan > 0) {
            jumlah++;
        }

        return jumlah;
    }

    int main() {
        int kapasitas_kendaraan, jumlah_kendaraan, banyak_kendaraan;

        cout << "Masukkan kapasitas kendaraan: ";
        cin >> kapasitas_kendaraan;

        cout << "Masukkan jumlah penumpang: ";
        cin >> jumlah_kendaraan;

        banyak_kendaraan = kendaraan(kapasitas_kendaraan, jumlah_kendaraan);

        cout << "Banyak kendaraan yang disewa: " << banyak_kendaraan << endl;

        return 0;
    }
    ```

    Output jika dimasukkan angka 45 dan 40:

    ```
    Masukkan kapasitas kendaraan: 45
    Masukkan jumlah penumpang: 40
    Banyak kendaraan yang disewa: 1
    ```

    Output jika dimasukkan angka 45 dan 50:

    ```
    Masukkan kapasitas kendaraan: 45
    Masukkan jumlah penumpang: 50
    Banyak kendaraan yang disewa: 2
    ```

    Penjelasan:

    Program akan meminta user untuk memasukkan kapasitas suatu kendaraan dan jumlah penumpangnya. Lalu program akan menjalankan fungsi `kendaraan()` untuk mengecek jumlah kendaraan yang dibutuhkan. Lalu menampilkannya di console.

2. Jawaban:

    Source code:

    ```cpp
    #include <iostream>

    using namespace std;

    void tukar(int *a, int *b) {
        int temp;

        temp = *a;
        *a = *b;
        *b = temp;
    }

    int main() {
        int bil1, bil2;

        cout << "Masukkan bilangan pertama: ";
        cin >> bil1;

        cout << "Masukkan bilangan kedua: ";
        cin >> bil2;

        cout << "Sebelum pertukaran: " << endl;
        cout << "Bil 1 = " << bil1 << " | Bil 2 = " << bil2 << endl;

        tukar(&bil1, &bil2);
        
        cout << "Setelah pertukaran: " << endl;
        cout << "Bil 1 = " << bil1 << " | Bil 2 = " << bil2 << endl;

        return 0;
    }
    ```

    Output jika dimasukkan angka 1 dan 2:

    ```
    Masukkan bilangan pertama: 1
    Masukkan bilangan kedua: 2
    Sebelum pertukaran:
    Bil 1 = 1 | Bil 2 = 2
    Setelah pertukaran:
    Bil 1 = 2 | Bil 2 = 1
    ```

    Penjelasan:

    Kode program di atas akan meminta user untuk memasukkan 2 bilangan. Bilangan pertama akan dimasukkan ke variabel `bil1` dan bilangan kedua akan dimasukkan ke variabel `bil2`. Lalu program akan menukar isi variabel tersebut sehingga variabel `bil1` berisi bilangan kedua dan variabel `bil2` berisi bilangan pertama.

3. Jawaban:

    Source code:

    ```cpp
    #include <iostream>

    using namespace std;

    int main() {
        int bil[10];

        bil[0] = 1;
        bil[1] = 4;
        bil[2] = 5;

        cout << bil[0] << endl;
        cout << bil[1] << endl;
        cout << bil[2] << endl;

        cout << bil[0] + bil[1] + bil[2] << endl;

        return 0;
    }
    ```

    Output:

    ```
    1
    4
    5
    10
    ```

    Penjelasan:

    Pertama, kode program diatas akan menampilkan isi array. Lalu, program akan menjumahkan semua bilangan arraynya dan kemudian menampilkan hasilnya.
