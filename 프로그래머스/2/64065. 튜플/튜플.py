def solution(s):
    answer = []
    temp = []
    set1 = []
    num1 = ""
    for i in s:
        if i.isdigit():
            num1 += i
        else:
            if num1:
                temp.append(int(num1))
                num1 = ""
        if i == '}':
            if temp:
                set1.append(set(temp))
                temp = []
    set1.sort(key=len)
    prev = set()
                            
    for i in set1:
        new = i - prev
        answer.append(new.pop())
        prev = i
    
    return answer