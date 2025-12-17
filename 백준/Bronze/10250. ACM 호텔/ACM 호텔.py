a = int(input())

for _ in range(a):
    h,w,n = map(int, input().split())

    f = (n-1) % h+1
    r = (n-1) // h+1
    print(f*100 + r)