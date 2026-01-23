N, M = map(int, input().split())
min6_cost = 1000
min1_cost = 1000
for i in range(M):
    a, b = map(int, input().split())
    if min6_cost > a:
        min6_cost = a
    if min1_cost > b:
        min1_cost = b

string_cnt = N
res_cost = 0
while string_cnt > 0:
    if string_cnt >= 6:
        if min6_cost > (min1_cost*6):
            res_cost += min1_cost*6
            string_cnt -= 6
        else:
            res_cost += min6_cost
            string_cnt -= 6
    else:
        if min6_cost > (min1_cost*string_cnt):
            res_cost += min1_cost*string_cnt
            break
        else:
            res_cost += min6_cost
            break

print(res_cost)