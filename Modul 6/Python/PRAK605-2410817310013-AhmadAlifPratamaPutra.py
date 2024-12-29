def a(ordo):
    matriks = []
    for i in range(ordo):
        row = list(map(int, input().split()))
        matriks.append(row)
    return matriks

def b(matriks, ordo):
    for i in range(ordo):
        for j in range(ordo):
            print(matriks[i][j], end=" ")
        print()

def x(matriks1, matriks2, ordo):
    hasil = [[0 for _ in range(ordo)] for _ in range(ordo)]  
    for i in range(ordo):
        for j in range(ordo):
            for k in range(ordo):
                hasil[i][j] += matriks1[i][k] * matriks2[k][j]
    return hasil

ordo = int(input())

print("Matriks A")
matriks1 = a(ordo)

print("Matriks B")
matriks2 = a(ordo)

hasil = x(matriks1, matriks2, ordo)

print("Matriks AXB")
b(hasil, ordo)