ang,simb=input().split()
ang=int(ang)
for n in range(1,51):
    if n%ang==0:
        print(simb, end=" ")
    else :
        print(n, end=" ")