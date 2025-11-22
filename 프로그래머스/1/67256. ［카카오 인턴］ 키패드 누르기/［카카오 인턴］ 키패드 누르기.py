'''
상하좌우만 움직이기 가능(대각선X)
1, 4, 7은 왼손, 369는 오른손, 가운데 열은 더 가까운 손가락(거리 같으면 잡이손)

return : 왼손인지 오른손인지 문자열
매개변수 : 누를 번호 배열 numbers, 어떤 손잡이인지 hand

1. 키패드 2중 배열 만들기?
2. 맨해튼 거리 사용해서 거리구하고 좌표 저장?

꺠달은 것
빈 배열에는 append만 가능한 줄 알았는데 그건 걍 내가 인덱스 점근을 잘못해서 그런거고;;
left = [3, 4] 이렇게 재할당 해주면 문제 안된다는 걸 꺠달음
else 부분에서 오류가 있었는데 이유가 좌표 안바꿔줘서...ㅠㅠ 변해야 하는걸 할상 기억하자
자꾸 인덱스 오류가 있었는데 키패드 배열은 4*3 이라 외부루프를 4번 돌려야했음(3번돌림)
'''
def man(x, y):
    return abs(x[0] - y[0]) + abs(x[1] - y[1])



def solution(numbers, hand):
    answer = ''
    kpd = [
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9],
        ['*', 0, '#']
    ]
    left = [3, 0]
    right = [3, 2]
    for i in numbers:
        target = []
        #좌표 어케 노가다를 하지 않지
        for j in range(0, 4):
            boo = True
            for k in range(0, 3):
                if i == kpd[j][k]:
                    target = [j, k]
                    break
            if target:
                break
                
        if i == 1 or i == 4 or i == 7:
            left[0], left[1] = target[0], target[1]
            answer += 'L'
        elif i == 3 or i == 6 or i == 9:
            right[0], right[1] = target[0], target[1]
            answer += 'R'
        else:
            R = man(right, target)
            L = man(left, target)
            if R > L:
                left = target
                answer += 'L'
            elif R == L:
                if hand == "right":
                    right = target
                    answer += 'R'
                else:
                    left = target
                    answer += 'L'
            else:
                    right = target
                    answer += 'R' 
    return answer