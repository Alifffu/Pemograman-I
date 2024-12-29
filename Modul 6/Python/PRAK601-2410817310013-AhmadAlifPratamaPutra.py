baris, kolom = map(int, input().split())
elemen = list(map(int, input().split()))
for i in range(baris):
    print(" ".join(map(str, elemen[i * kolom:(i + 1) * kolom])))