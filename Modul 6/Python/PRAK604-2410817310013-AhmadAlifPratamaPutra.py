def bandingkan_array(a, b):
    hash_count = 0
    star_count = 0
    
    for i in range(len(a)):
        if a[i] == ' ' and b[i] == ' ':
            print(" ", end="")
        elif a[i] == b[i]:
            print("*", end="")
            star_count += 1
        else:
            print("#", end="")
            hash_count += 1

    print()
    print(f"* = {star_count}")
    print(f"# = {hash_count}")

    if hash_count > star_count:
        print("Pesan Palsu")
    elif star_count > hash_count:
        print("Pesan Asli")

a = input().rstrip()
b = input().rstrip()

if len(a) != len(b):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    bandingkan_array(a, b)