import math
st = int(input("Masukkan Sisi Tinggi="))
print, st
sm = int(input("Masukkan Sisi Miring="))
print, sm

als = math.sqrt(pow((sm), 2)- pow((st), 2))
Kel = st+sm+als
l = st*als/2
print("Alas =", round(als), "Cm")
print("Tinggi =", round(st), "Cm")
print("Keliling =", round(Kel), "Cm")
print("Luas =", round(l), "Cm^2")