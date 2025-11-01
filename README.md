# Tugas Pemrograman Dasar (C++)

Repositori ini berisi kumpulan tugas mata kuliah **Pemrograman Dasar**.  
Seluruh kode ditulis menggunakan **bahasa C++** dan dapat dijalankan menggunakan **MinGW** di Windows.

<br><br>

## Persiapan enviroment

### 1️⃣ Install MinGW (Compiler C++)

1. Unduh **MinGW (winlibs)** versi terbaru dari situs resmi:  
   🔗 [https://winlibs.com/](https://winlibs.com/)
2. Pilih versi **64-bit** (x86_64-posix-seh) seperti:
```

winlibs-x86_64-posix-seh-gcc-15.2.0-mingw-w64msvcrt-13.0.0-r1.zip

```
3. Extract file ZIP ke folder yang mudah diakses, misalnya:
```

C:\mingw64

```
<br>

### 2️⃣ Tambahkan MinGW ke PATH

1. Buka **System Properties**:
- Tekan tombol **Windows + R**
- Ketik `sysdm.cpl` → Enter  
2. Pilih tab **Advanced → Environment Variables**
3. Di bagian **System variables**, pilih **Path** → klik **Edit**
4. Klik **New**, lalu tambahkan path ke folder `bin`, misalnya:
```

C:\mingw64\bin

````
5. Klik **OK**.

<br>

### 3️⃣ Verifikasi Instalasi

Buka **Command Prompt (CMD)** atau **PowerShell**, lalu ketik:
```bash
g++ --version
````

Jika instalasi berhasil, akan muncul versi GCC seperti ini:

```
g++.exe (MinGW-W64 x86_64-msvcrt-posix-seh) 15.2.0
```

<br><br>

## Cara Menjalankan Program C++

1. Buka **VS Code**
2. Tekan `Ctrl + ~` untuk membuka terminal
3. Arahkan ke folder tempat file `.cpp` kamu berada:

   ```bash
   cd C:\Users\user\Desktop\github\progdas
   ```
4. Kompilasi program:

   ```bash
   g++ namafile.cpp -o namafile
   ```

   Contoh:

   ```bash
   g++ latihanno3.cpp -o latihanno3
   ```
5. Jalankan program:

   ```bash
   ./latihanno3
   ```
<br><br>

## 💡 Tips Tambahan: Alternatif Menambahkan PATH untuk MinGW

Jika kamu kesulitan memasukkan path MinGW:
<br><br>

### **Opsi 1 — Tambahkan PATH sementara di terminal VS Code**

**PowerShell terminal:**

```powershell
$env:PATH = "<path_kamu>
g++ --version
```

**CMD terminal:**

```cmd
set PATH=<path_kamu>
g++ --version
```

> Cara ini langsung bekerja, tapi hanya berlaku **selama terminal terbuka**.

<br>

### **Opsi 2 — Atur PATH permanen hanya untuk VS Code**

1. Buka **VS Code → Settings (Ctrl + ,)**
2. Cari `terminal.integrated.env`
3. Klik **Edit in settings.json**
4. Tambahkan ini:

```json
"terminal.integrated.env.windows": {
    "PATH": "<path_kamu>"
}
```

5. Simpan, lalu buka ulang terminal VS Code
6. Jalankan:

   ```powershell
   g++ --version
   ```

Sekarang `g++` selalu dikenali **setiap kali membuka VS Code**, tanpa mengubah sistem PATH.

<br>

### **Opsi 3 — Tambahkan ke System PATH (permanen di semua terminal)**

1. Tekan **Win + S** → cari **“Environment Variables”**
2. Pilih **Edit the system environment variables**
3. Klik **Environment Variables → System variables → Path → Edit → New**
4. Masukkan path misalnya:

   ```
   C:\mingw64\bin
   ```
5. Klik OK → OK → OK
6. Restart VS Code
   Sekarang `g++` bisa dijalankan di **CMD, PowerShell, dan VS Code** tanpa setup tambahan.

<br><br>

## Kontributor

Nama: **Danella Zefanya Siahaan**<br>
Kelas: **Teknologi Informasi 2022**<br>
Mata Kuliah: **Pemrograman Dasar**
