import math
nilaiA= float(input("Nilai A="))
print, nilaiA
nilaiB= float(input("Nilai B="))
print, nilaiB
nilaiI= float(input("Nilai I="))
print, nilaiI
nilaiJ= float(input("Nilai J="))
print, nilaiJ
nilaiX= float(input("Nilai X="))
print, nilaiX
nilaiY= float(input("Nilai Y="))
print, nilaiY

hasil = (nilaiA-nilaiB)*(nilaiI/nilaiJ)-(nilaiX+nilaiY)
print("Hasil dari A kurang B dikali dengan I di agi J dikurang dengan X ditambah Y adalah {:.3f}".format(hasil))