'''
각 유저는 한번에 한명만 신고 가능
신고 횟수 제한은 없음
동일한 유저에 대한 신고는 1회로 처리
신고한 아이디 중 정지된 아이디 개수 세기

return : 처리결과 메일 받은 횟수
매개변수 : 이용자 ID, ID 정보, 정지기준 신고 횟수

알고리즘
0. 딕셔너리로 횟수 세기
1. report는 신고자, 신고당한사람 split으로 분리
1-1. 신고자가 같은 사람 신고했으면 무효처리(set으로?)
2. 신고당한 개수를 세준다
2-1. 횟수가 k 이상이면 계정 정지 시킴
3. 정지 후에 메일 보내는 횟수 세기
3. value를 추출한다
'''

def solution(id_list, report, k):
    id_dict = {}
    mail_dict = {}
    stop_id = []
    
    for t in id_list:
        id_dict[t] = 0
        mail_dict[t] = 0
        
    report = set(report)
    
    for i in report: #신고 당한 개수 카운트
        a, sa = i.split()
        id_dict[sa] += 1

    for user, cnt in id_dict.items(): #정지 받을 사람 추출 
        if cnt >= k:
            stop_id.append(user)
        
    for i in report: # 정지받은 사람을 신고한 사람 mail에 카운트
        a, sa = i.split()
        if sa in stop_id:
            mail_dict[a] +=1
            
    answer = [v for k,v in mail_dict.items()]
    return answer