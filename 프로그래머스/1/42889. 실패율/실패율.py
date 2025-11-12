def solution(N, stages):
    answer = []
    totalUser = len(stages)
    for i in range(1, N+1):
        failUser = stages.count(i);
        if failUser == 0:
            ans = 0
        else:
            ans = failUser / totalUser
        answer.append((i, ans))
        totalUser -= failUser
    answer.sort(key = lambda x: (-x[1], x[0]))
    ans = [i for i, j in answer]
    return ans

