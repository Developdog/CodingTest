n = int(input())
x, y = 0, 1
if n == 0 :
    print(0)
if n == 1 :
    print(1)
else :
    for i in range(n):
        x, y = y, x+y
        if n-2 == i :
            print(y)
