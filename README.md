# 🔌 Source Code Arduino: control led

Halaman ini khusus memuat kode program utama (*Source Code*) untuk mengontrol 3 buah lampu LED (Merah, Kuning, Hijau) pada mikrokontroler Arduino menggunakan komunikasi data Serial.

---

## 🛠️ Skema Rangkaian Elektronika (Hardware)

Sebelum mengunggah kode program, pastikan komponen elektronik pada papan Arduino Anda sudah dirangkai dengan konfigurasi pin berikut:

* **LED Merah:** Hubungkan kaki Positif (Anoda) ke **Pin Digital 5** Arduino.
* **LED Kuning:** Hubungkan kaki Positif (Anoda) ke **Pin Digital 4** Arduino.
* **LED Hijau:** Hubungkan kaki Positif (Anoda) ke **Pin Digital 3** Arduino.
* **GND (Ground):** Hubungkan semua kaki Negatif (Katoda) LED ke pin **GND** Arduino (Disarankan menggunakan resistor 220 Ohm pada setiap LED sebagai pengaman arus).
