'''
아이디는 -, _, ., 문자만 사용가능
.는 처음과 끝X
1. 모든 대문자 소문자로
2. 마침표 2번 연속시 하나로 치환
3. 비었다면 a 대입
4. 15 이상X
5. 길이가 3 미만이라면 3이 될때까지 마지막 붙여넣기

return 7단계 거친 후 아이디 문자열
매개변수 : 입력 아이디
'''


def solution(new_id):
    answer = ''
    i = 0
    answer = list(new_id.lower()) # 1단계
    while i < len(answer): # 23단계
        if answer[i] != '-' and answer[i] != '_' and answer[i] != '.' and not answer[i].isalpha() and not answer[i].isdigit():
            del answer[i]
            continue
        i += 1
    i = 0
    while i < len(answer):
        if answer[i] == '.' and answer[i-1] == answer[i]: # 3단계
            del answer[i]
            continue
        i += 1
    if answer and answer[0] == '.': # 4단계
        del answer[0]
    if answer and answer[-1] == '.':
        del answer[-1]
    if not answer: # 5단계
        answer += 'a'
    if len(answer) > 15: # 6단계
        answer = answer[0:15]
    if answer and answer[-1] == '.':
        del answer[-1]
    while len(answer) < 3: # 7단계
        answer += answer[len(answer)-1]
    return ''.join(answer)