N, P = map(int, input().split())
res = []
n = [input().strip() for _ in range(N)]

dn = {name: i+1 for i, name in enumerate(n)}
for _ in range(P):
    p = input().strip()
    if p.isdigit():
        idx = int(p)
        res.append(n[idx-1])
    else:
        res.append(dn[p])
for i in range(P):
    print(res[i])
        
    