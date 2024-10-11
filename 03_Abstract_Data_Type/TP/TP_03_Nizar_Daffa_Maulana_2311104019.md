<div align="center">

<b>TUGAS PENDAHULUAN</b>

<b>STRUKTUR DATA</b>

<b>MODUL 03</b>

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

- Soal TP: [Tugas-Pendahuluan-03](/TP%20MODUL%203%20STD%20-%202425.jpeg)

1. Jelaskan apa yang dimaksud dengan pointer!

2. Bagaimana cara menampilkan alamat memori dari suatu variabel dalam program C++? Berikan contoh!

3. Bagaimana cara menggunakan pointer dalam program C++? Berikan contoh cara menampilkan nilai yang tersimpan pada suatu alamat melalui pointer!

4. Jelaskan apa yang dimaksud dengan Abstract Data Type (ADT)!

5. Berikan contoh ilustrasi sederhana di dalam dunia nyata, tetapi di luar konteks pemrograman!

6. Tuliskan ADT dari bangun ruang kerucut dalam bahasa C++!

# Jawaban

1. Pointer adalah sebuah variabel khusus yang berisi alamat memori.

2. Cara menampilkan alamat memori dari suatu variabel dalam program C++ adalah dengan menambahkan simbol (&) di depan nama variabelnya.

    Contoh:
    ```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int angka = 1;

        cout << angka << endl; // output: 1
        cout << &angka << endl; // output: 0x7ffe5c13905c
    }
    ```

3. Cara menggunakan pointer dalam program C++ adalah dengan menambahkan simbol (*) di depan nama variabelnya.

    Contoh:
    ```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int angka = 24;
        int *my_pointer = &angka;

        cout << angka << endl; // output: 24
        cout << &angka << endl; // output: 0x7ffe5c13905c
        cout << my_pointer << endl; // output: 0x7ffe5c13905c
        cout << &my_pointer << endl; // output: 0x7ffe5c139060
        cout << *my_pointer << endl; // output: 24

        *my_pointer = 7;

        cout << angka << endl; // output: 7
        cout << &angka << endl; // output: 0x7ffe5c13905c
        cout << my_pointer << endl; // output: 0x7ffe5c13905c
        cout << &my_pointer << endl; // output: 0x7ffe5c139060
        cout << *my_pointer << endl; // output: 7
    }
    ```

4. Abstract Data Type (ADT) adalah tipe (atau kelas) untuk objek yang perilakunya ditentukan oleh serangkaian nilai dan serangkaian operasi.

5. Ilustrasi sederhana di dalam dunia nyata contohnya adalah mesin kopi otomatis. Dibagian luar mesin kopi, ada beberapa tombol yang bisa kita gunakan. Seperti tombol untuk memilih jenis kopi, tombol untuk mengatur gula, dan tombol untuk memulai proses pembuatan kopi. Sebagai pengguna, kita tidak perlu tahu apa yang terjadi di dalam mesin, bagaimana mesin menggiling kopi, memanaskan air, atau mencampur susu. Kita hanya fokus pada tombol-tombol ini dan hasil akhirnya, yaitu secangkir kopi.

6. Jawaban:
    
    `kerucut.h`
    ```cpp
    struct Kerucut {
        double jariJari;
        double tinggi;
    };
    ```
    
    `kerucut.cpp`
    ```cpp
    #include <cmath>
    #include "kerucut.h"

    double volumeKerucut(Kerucut kerucut) {
        return (1.0 / 3.0) * 3.14 * kerucut.jariJari * kerucut.jariJari * kerucut.tinggi;
    }

    double luasPermukaanKerucut(Kerucut kerucut) {
        double s = sqrt(kerucut.jariJari * kerucut.jariJari + kerucut.tinggi * kerucut.tinggi);
        return 3.14 * kerucut.jariJari * (kerucut.jariJari + s);
    }
    ```
    
    `main.cpp`
    ```cpp
    #include <iostream>
    #include "kerucut.cpp"

    using namespace std;

    int main() {
        Kerucut kerucut;

        kerucut.jariJari = 3;
        kerucut.tinggi = 8;

        cout << "Jari-jari kerucut = " << kerucut.jariJari << endl;
        cout << "Tinggi kerucut = " << kerucut.tinggi << endl;
        cout << "Volume kerucut = " << volumeKerucut(kerucut) << endl;
        cout << "Luas Permukaan kerucut = " << luasPermukaanKerucut(kerucut) << endl;
        
        return 0;
    }
    ```

    Output:
    ```
    Jari-jari kerucut = 3
    Tinggi kerucut = 8
    Volume kerucut = 75.36
    Luas Permukaan kerucut = 108.745
    ```
