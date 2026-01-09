a, b, c = map(int, input().split())
s = a%b

if a%b:
    for i in range(1, c):
        s *= 10
        s %= b
    print(s*10//b)
else:
    print(0)