data = input().split()
angka1 = int(data[0])
angka2 = int(data[1])

if angka1 < angka2:
    for i, j in zip(range(angka1, angka2 + 1), range(angka2, angka1 - 1, -1)):
        print(f"{i} {j}", end=" - ")
else:
    for i, j in zip(range(angka1, angka2 - 1, -1), range(angka2, angka1 + 1)):
        print(f"{i} {j}", end=" - ")