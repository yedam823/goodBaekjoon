def change(n, k):
    sum1 = ''
    while n > 0:
        sum1 += str(n % k)
        n //= k
    sum1 = ''.join(reversed(sum1))
    return sum1

def check(n):
    if n < 2:
        return 0
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            return 0
        
    return 1

def solution(n, k):
    s = []
    st = ''
    p = str(change(n, k))
    for i in range(len(p)):
        if p[i] != '0':
            st += p[i]
            print(st)
        else:
            if st != '' and st != '1':
                if check(int(st)):
                    s.append(st)
                    st = ''
            elif st == '1' or st != '' and check(int(st)) == 0:
                st = ''
        if i == len(p)-1:
            if check(int(st)):
                s.append(st)
    return len(s)