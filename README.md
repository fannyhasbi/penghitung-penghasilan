# Penghitung Penghasilan Bruto
Program penghitung penghasilan berfungsi untuk menghitung jumlah penghasilan bruto setelah dikurangi dengan pajak yang dikenakan per tahunnya. Terdapat 2 tipe pajak yang terdapat di program ini, yaitu:
* Pajak Perorangan
* Pajak Badan Usaha

## Goal
Program ini akan meng-outputkan:
* Penghasilan per tahun
* Jumlah pajak yang dikenakan
* Penghasilan netto

## Input
Program penghitung-penghasilan memiliki 2 input, yaitu:
* Penghasilan bersih
* Tipe pajak
 * Pajak Perorangan
 * Pajak Badan Usaha
 
## Proses
Terdapat 2 fungsi, yaitu
* hitungpajak()
* main()

###hitungpajak()
Fungsi hitungpajak() bertipe data *void* dan memiliki 2 parameter masukan yaitu a (int) dan b (char).
hitungpajak() berfungsi untuk menghitung:
* Pajak
* Penghasilan bruto

###main()
Fungsi utama digunakan untuk memasukkan nilai penghasilan netto dan memilih tipe pajak.

---
## Tabel Tarif Pajak
### Pajak Perorangan

Penghasilan kena pajak (per tahun) | Tarif pajak
--- | --- 
0 - 25,0 juta | 5%
25 - 50,0 juta | 10%
50 - 100,0 juta | 15%
100 - 200,0 juta | 25%
> 200 juta | 35%


### Pajak Badan Usaha
Penghasilan kena pajak (per tahun) | Tarif pajak
--- | ---
0 - 50.0 juta | 10%
50 - 100.0 juta | 15%
100 - 200.0 juta | 30%
> 200 juta | 35%

> Titik menandakan nilai bulat
> Misalkan `25 - 50.0 juta` berarti rentannya adalah antara 20.000.001 sampai dengan 50.000.000
