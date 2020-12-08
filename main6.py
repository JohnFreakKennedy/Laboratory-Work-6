import math
print("Даньков Артем,27 В, ІС-01")
i = True
while i:
    try:
        a = float(input("Введіть перший символ а:"))
        b = float(input("Введіть другий символ b:"))
        i = 0
    except:
        continue


def min(a, b):
    if a < b:
        return a
    else:
        return b


u = min(a, b)
v = min(a*b, a+b)
w = min(u+v*v, math.pi)
print("U= "+str(u))
print("V= "+str(v))
print("W= "+str(w))
