a = int(input())
zetsu = list(map(int, input().split()))
for i in range(a):
    print(zetsu[i] * (i + 1), end=" ")