def solution(cacheSize, cities):
    cnt = 0
    city_dict = {}
    
    for i in cities:
        city_dict[i] = 0

    Queue = []
    for i in cities:
        i = i.lower()
        # 큐에 시티 존재하면 hit 실행, 없으면 miss 실행, 인덱스 size-1 부분은 지워주기
        if i in Queue:
            #hit(Queue), 여기서 중복된 값은 지워줘야함
            cnt+=1
            Queue.pop(Queue.index(i))
            Queue.append(i)
        else:
            #miss(Queue)
            cnt+=5
            Queue.append(i)
        if len(Queue) > cacheSize:
            Queue.pop(0)
    answer = cnt
    return answer