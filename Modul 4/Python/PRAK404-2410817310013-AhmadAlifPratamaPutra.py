while True:
    print("Pilih program :")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    pilihan = int(input("Masukkan Pilihan : "))

    if pilihan == 5:
        print("Terimakasih, telah menggunakan kalkulator Ahmad Alif Pratama Putra")
        break

    if 1 <= pilihan <= 4:
        print("Masukkan nilai pertama : ", end="")
        nilai1 = float(input())
        print("Masukkan nilai kedua : ", end="")
        nilai2 = float(input())

        if pilihan == 1:
            print(f"Hasil Penjumlahan antara {nilai1:.2f} dengan {nilai2:.2f} adalah {nilai1 + nilai2:.2f}")
        elif pilihan == 2:
            print(f"Hasil Pengurangan antara {nilai1:.2f} dengan {nilai2:.2f} adalah {nilai1 - nilai2:.2f}")
        elif pilihan == 3:
            print(f"Hasil Perkalian antara {nilai1:.2f} dengan {nilai2:.2f} adalah {nilai1 * nilai2:.2f}")
        elif pilihan == 4:
            if nilai2 != 0:
                print(f"Hasil Pembagian antara {nilai1:.2f} dengan {nilai2:.2f} adalah {nilai1 / nilai2:.2f}")
            else:
                print("Pembagian dengan nol tidak diperbolehkan")
    else:
        print("Input anda salah, silahkan coba lagi")