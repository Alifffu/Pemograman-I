n1, n2 = map(int, input().split())
if n1 != n2:
    print("Jumlah tidak sama")
else:
    baris1 = list(map(int, input().split()))
    baris2 = list(map(int, input().split()))
    print(" ".join(map(str, [baris1[i] * baris2[i] for i in range(n1)])))