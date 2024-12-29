data = input().split()
n = int(data[0])
kelipatan = int(data[1])

total = 0
for i in range(1, n + 1):
    baris = sum(j * kelipatan for j in range(1, i + 1))
    total += baris
    print(f"({' + '.join([f'{j} * {kelipatan}' for j in range(1, i + 1)])}) = {baris}")

print(total)