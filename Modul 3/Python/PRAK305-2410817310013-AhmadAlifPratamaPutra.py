detik=int(input())
hari=detik//86400
total=detik%86400

jam=total//3600
total %=3600
menit=total//60
detik=total%60

if hari>0: print(f"{int(hari)} hari {jam:02}:{menit:02}:{detik:02}")
else: print(f"{jam:02}:{menit:02}:{detik:02}")