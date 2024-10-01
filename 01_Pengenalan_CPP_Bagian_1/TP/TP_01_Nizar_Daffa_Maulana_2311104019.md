<div align="center">

<b>TUGAS PENDAHULUAN</b>

<b>STRUKTUR DATA</b>

<b>MODUL 01</b>

<img src="/logo-TU.webp" alt="Logo TelU" width="400">

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

- Soal Unguided: [Modul-01.pdf](/Modul%201.pdf)
- Soal TP: [Tugas-Pendahuluan.pdf](/TP%20MODUL%201%20STD%20-%202425.pdf)

# Jawaban

## Unguided

1. Jawaban:

    Source code:

    ```cpp
    #include <iostream>

    using namespace std;

    int main() {
        float num1, num2;

        cout << "Masukkan bilangan pertama: ";
        cin >> num1;

        cout << "Masukkan bilangan kedua: ";
        cin >> num2;

        cout << endl;
        cout << "Hasil penjumlahan " << num1 << " dan " << num2 << ": " << num1 + num2 << endl;
        cout << "Hasil pengurangan " << num1 << " dan " << num2 << ": " << num1 - num2 << endl;
        cout << "Hasil perkalian " << num1 << " dan " << num2 << ": " << num1 * num2 << endl;
        cout << "Hasil pembagian " << num1 << " dan " << num2 << ": " << num1 / num2 << endl;

        return 0;
    }
    ```

    Output:

    ```
    Masukkan bilangan pertama: 8
    Masukkan bilangan kedua: 4

    Hasil penjumlahan 8 dan 4: 12
    Hasil pengurangan 8 dan 4: 4
    Hasil perkalian 8 dan 4: 32
    Hasil pembagian 8 dan 4: 2
    ```

    Penjelasan:

    Kode program diatas akan meminta user untuk memasukkan 2 bilangan bulat dan kemudian program akan menjumlah, mengkurangi, mengkali, dan membagi kedua bilangan tersebut. Lalu menampilkannya di console.

2. Jawaban:

    Source code:

    ```cpp
    #include <iostream>

    using namespace std;

    int main() {
        string angka[] = {"Nol", "Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan"};

        int num;
        string numStr;

        cout << "Masukkan bilangan bulat 0-100 : ";
        cin >> num;

        if (num == 10) {
            numStr = "Sepuluh";
        } else if (num == 11) {
            numStr = "Sebelas";
        } else if (num == 100) {
            numStr = "Seratus";
        }

        if (numStr == "") {
            if (num < 10) {
                numStr = angka[num];
            } else if ((num > 10) && (num < 20)) {
                numStr = angka[num % 10].append(" Belas");
            } else if ((num > 19) && ((num % 10) == 0)) {
                numStr = angka[num / 10].append(" Puluh ");
            } else if ((num > 19) && ((num % 10) != 0)) {
                numStr = angka[num / 10].append(" Puluh ");
                numStr = numStr.append(angka[num - (num / 10 * 10)]);
            }
        }

        cout << num << " : " << numStr << endl;
    }
    ```

    Output:

    ```
    Masukkan bilangan bulat 0-100 : 24
    24 : Dua Puluh Empat
    ```

    Penjelasan:

    Kode program tersebut akan meminta user untuk memasukkan bilangan bulat antara 0 sampai 100 lalu program akan menampilkan cara baca/ejaan bilangan tersebut.

3. Jawaban:

    Source code:

    ```cpp
    #include <iostream>

    using namespace std;

    int main() {
        int num;

        cout << "Masukkan sebuah angka: ";
        cin >> num;

        int l = 0;
        for (int i = num; i >= 0; i--) {
            for (int k = 0; k < l; k++) {
                cout << " ";
            }

            for (int j = i; j >= 1; j--) {
                cout << j;
            }

            cout << "*";

            for (int j = 1; j <= i; j++) {
                cout << j;
            }
            
            cout << endl;
            l++;
        }

        return 0;
    }
    ```

    Output:

    ```
    Masukkan sebuah angka: 5
    54321*12345
     4321*1234
      321*123
       21*12
        1*1
         *
    ```

    Penjelasan:

    Kode program tersebut akan meminta user untuk memasukkan sebuah angka untuk membuat piramida terbalik dengan susunan angka mulai dari angka yang diinputkan user. Angka yang diinputkan user merupakan jumlah tingkatan dari piramida yang akan dibuat.

## Tugas Pendahuluan

1. Jawaban:

    Source code:

    ```cpp
    #include <iostream>

    using namespace std;

    int main() {
        string nama, nim;

        cout << "Siapa nama anda? ";
        cin >> nama;

        cout << "Berapa nim anda? ";
        cin >> nim;

        cout << "Nama saya: " << nama << endl;
        cout << "NIM saya: " << nim << endl;

        return 0;
    }
    ```

    Output:

    ```
    Siapa nama anda? Nizar Daffa Maulana
    Berapa nim anda? Nama saya: Nizar
    NIM saya: Daffa
    ```

    > Sepertinya `cin` tidak bisa menampung inputan berupa spasi.

    Output 2:

    ```
    Siapa nama anda? Nizar
    Berapa nim anda? 2311104019
    Nama saya: Nizar
    NIM saya: 2311104019
    ```

    Penjelasan:

    Program akan meminta user untuk menginputkan nama dan nim. Kemudian program akan menampilkan hasil inputan tersebut di console. Dan sepertinya perintah `cin` tidak bisa menerima inputan berupa spasi.

2. Jawaban:

    Source code:

    ```cpp
    #include <iostream>

    using namespace std;

    int main() {
        int bil1 = 3, bil2 = 4, hasil1;
        float bil3 = 3.0, bil4 = 4.0, hasil2;

        hasil1 = bil1 + bil2;
        cout << hasil1 << endl;

        hasil1 = bil1 - bil2;
        cout << hasil1 << endl;

        hasil1 = bil1 * bil2;
        cout << hasil1 << endl;

        hasil1 = bil1 / bil2;
        cout << hasil1 << endl;

        hasil1 = bil2 / bil1;
        cout << hasil1 << endl;

        hasil1 = bil1 % bil2;
        cout << hasil1 << endl;

        hasil1 = bil2 % bil1;
        cout << hasil1 << endl;

        hasil2 = bil3 / bil4;
        cout << hasil2 << endl;

        return 0;
    }
    ```

    Output:

    ```
    7
    -1
    12
    0
    1
    3
    1
    0.75
    ```

    Penjelasan:

    Kode program di atas akan melakukan operasi aritmatika seperti penjumlahan, pengurangan, perkalian, pembagian, dan modulus pada variabel integer dan float yang sudah disiapkan. Kemudian menampilkan hasilnya di console.

3. Jawaban:

    Source code:

    ```cpp
    #include <iostream>

    using namespace std;

    int main() {
        int bil1 = 2, bil2 = 3, hasil;

        hasil = bil1 > bil2;
        cout << hasil << endl;

        hasil = bil1 >= bil2;
        cout << hasil << endl;

        hasil = bil1 < bil2;
        cout << hasil << endl;

        hasil = bil1 <= bil2;
        cout << hasil << endl;

        hasil = bil1 == bil2;
        cout << hasil << endl;

        hasil = bil1 != bil2;
        cout << hasil << endl;

        return 0;
    }
    ```

    Output:

    ```
    0
    0
    1
    1
    0
    1
    ```

    Penjelasan:

    Kode program di atas akan melakukan operasi perbandingan pada variabel integer yang sudah disiapkan. Kemudian menampilkan hasilnya di console.

4. Jawaban:

    Source code:

    ```cpp
    #include <iostream>

    using namespace std;

    int main() {
        int bil1 = 2, bil2 = 3 , hasil;

        hasil = bil1 <= bil2 and bil1 < bil2;
        cout << hasil << endl;

        hasil = bil1 >= bil2 or bil1 < bil2;
        cout << hasil << endl;

        hasil = not(bil1 >= bil2) or bil1 < bil2;
        cout << hasil << endl;

        return 0;
    }
    ```

    Output:

    ```
    1
    1
    1
    ```

    Penjelasan:

    Kode program di atas akan melakukan operasi logika pada variabel integer yang sudah disiapkan. Kemudian menampilkan hasilnya di console.

5. Jawaban:

    Source code:

    ```cpp
    #include <iostream>

    using namespace std;

    int main() {
        int nilai;
        cin >> nilai;

        if (nilai > 80) {
            cout << "A" << endl;
        } else {
            cout << "Bukan A" << endl;
        }

        return 0;
    }
    ```

    Output jika nilai = 80:

    ```
    80
    Bukan A
    ```

    Output jika nilai = 81:

    ```
    81
    A
    ```

    Output jika nilai = 79:

    ```
    79
    Bukan A
    ```

    Penjelasan:

    Pertama, kode program di atas akan meminta user untuk menginputkan sebuah nilai integer dan kemudian melakukan pengecekan yang mana jika nilai lebih dari 80 maka program akan menampilkan outputan berupa string "A" dan jika tidak nilai lebih dari 80 maka program akan menampilkan outputan berupa string "Bukan A".

6. Jawaban:

    Source code:

    ```cpp
    #include <iostream>

    using namespace std;

    int main() {
        int a, b, bilangan;

        cout << "Masukkan batas bawah: ";
        cin >> a;

        cout << "Masukkan batas atas: ";
        cin >> b;

        for (bilangan = a; bilangan <= b; bilangan++) {
            cout << "Bilangan " << bilangan << endl;
        }

        return 0;
    }
    ```

    Output:

    ```
    Masukkan batas bawah: 1
    Masukkan batas atas: 10
    Bilangan 1
    Bilangan 2
    Bilangan 3
    Bilangan 4
    Bilangan 5
    Bilangan 6
    Bilangan 7
    Bilangan 8
    Bilangan 9
    Bilangan 10
    ```

    Penjelasan:

    Kode program diatas akan melakukan perulangan. Mulai dari angka batas bawah yang dimasukkan user sampai batas atas yang dimasukkan user.

7. Jawaban:

    Source code:

    ```cpp
    #include <iostream>

    using namespace std;

    int main() {
        int bilangan, asli, jumlah;

        cout << "Masukkan bilangan asli: ";
        cin >> asli;

        bilangan = 1;
        jumlah = 0;

        while (bilangan <= asli)
        {
            if (bilangan % 2 == 0) {
                jumlah += bilangan;
            }
            bilangan++;
        }
        
        cout << "Jumlah bilangan genap: " << jumlah << endl;

        return 0;
    }
    ```

    Output:

    ```
    Masukkan bilangan asli: 10
    Jumlah bilangan genap: 30
    ```

    Penjelasan:

    Kode program tersebut akan meminta user untuk menginputkan bilangan asli lalu program tersebut akan mengitung jumlah bilangan genap dari 1 sampai angka yang diinputkan user. Tapi sepertinya ada yang salah dengan kode tersebut. Seharusnya pada line ke-17 diubah menjadi seperti berikut:

    ```cpp
    ...
        jumlah++;
    ...
    ```
