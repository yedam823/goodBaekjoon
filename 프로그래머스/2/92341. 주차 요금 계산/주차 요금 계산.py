import math
def fee(in_time, out_time):
    inH , inM = map(int, in_time.split(':'))
    outH , outM = map(int, out_time.split(':'))

    in_total = inH * 60 + inM
    out_total = outH * 60 + outM
    print(out_total - in_total)
    
    return out_total - in_total
def solution(fees, records):
    IN = {}
    CNT = {num: 0 for time, num, state in (i.split(' ') for i in records)}
    answer = []
    cnt = 0
    for i in records:
        time, num, state = i.split(' ')
        if state == 'IN':
            IN[num] = time
        elif state == 'OUT':
            plus = fee(IN[num], time)
            CNT[num] += plus
            IN.pop(num)
        
        
    if IN: #들어왔지만 아직 안나간 상황
        last = '23:59'
        for num in IN:
            plus = fee(IN[num], last)
            CNT[num] += plus
    
    for i in CNT:
        if CNT[i] <= fees[0]:
            CNT[i] = fees[1]
        else:
            CNT[i] = fees[1] + math.ceil((CNT[i]-fees[0])/fees[2])*fees[3]
        
    # 차량번호 순으로 오름차순 후 출력
    CNT = dict(sorted(CNT.items()))
    answer = [num for num in CNT.values()]
    return answer