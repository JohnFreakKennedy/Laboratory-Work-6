import math


def u(a, b):
    if a < b:
        return a
    else:
        return b


def v(a, b):
    if a*b < a+b:
        return a*b
    else:
        return a+b


def w(a, b):
    c = u(a, b)+pow(v(a, b), 2)
    if c < math.pi:
        print(c)
    else:
        print(math.pi)


i = True
while i:
    try:
        a = float(input("Введіть перший символ а:"))
        b = float(input("Введіть другий символ b:"))
        i = 0
    except:
        continue
w(a, b)
