'''
알고리즘
1. 반지름과 점과 원의 중심이 떨어진 거리를 구함(루트x2-x1 + 루트y2-y1)
2. 만약 출발점과 원이 떨어진 거리보다 반지름이 크면 안에 있는것, 도착점 거리가 반지름보다 크면 이탈+1
3. 출발점과 원이 떨어진 거리가 반지름 보다 크면 거치지 않음. 근데 만약 도착점 거리가 반지름보다 작으면 진입+1
'''
def dis(x1,x2, y1, y2):
    return (((x2-x1)**2) + ((y2-y1)**2))**0.5

n = int(input())
cnt = 0

for i in range(n):
    start1, start2, end1, end2 = map(int, input().split())
    m = int(input())
    for j in range(m):
        x, y, r = map(int, input().split())
        if dis(start1, x, start2, y) <= r:
            if dis(end1, x, end2, y) > r:
                cnt += 1
        else:
            if dis(end1, x, end2, y) <= r:
                cnt += 1

    print(cnt)
    cnt = 0