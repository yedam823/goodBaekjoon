import re

T = int(input())
pattern = re.compile(r'^(100+1+|01)+$')

for _ in range(T):
    s = input().strip()
    if pattern.fullmatch(s):
        print("YES")
    else:
        print("NO")