'''
개인정보 n개가 있음
약관 종류 여러가지, 각 약관마다 유효기간 존재
개인정보는 유효기간 까지만 ㄱㄴ, 지나면 파기시키기
모든 달은 28일 까지만 존재
와~~나 시간 계산 수ㅏㅎㄱ 잘 몬하는데

return : 파기해야할 개인정보 번호
매개변수 :  오늘 날짜 문자열, 유효기간 담은 문자열 배열, 개인정보 문자열 배열

알고리즘
1. 날짜 계산은 일+28/28하고, 월+달/12 하면 될것같음
-> 4 2 2씩 슬라이스 하고 총 일수 계산
2. 오늘 날짜 총 일수와 비교해서 지났는지 아닌지 확인
3. 지나면 배열 인덱스+1를 저장
'''

def solution(today, terms, privacies):
    answer = []
    cnt = 0
    term_dict = {}
    
    ctimeY, ctimeM, ctimeD = map(int, today.split('.'))
    total2 = (ctimeM*28)+(ctimeY * 12 *28)+ ctimeD
    for i in terms:
        name, month = i.split()
        term_dict[name] = int(month)
    
    for i, p in enumerate(privacies):
        date, code = p.split()
        timeY, timeM, timeD = map(int, date.split('.'))
        total1 = (timeM*28)+(timeY * 12 *28)+ timeD
        total1 += term_dict[code]*28
        if total1 <= total2:
            answer.append(i+1)
    return answer