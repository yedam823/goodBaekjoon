def solution(friends, gifts):
    friend_give = {}
    friend_get = {}
    friend_gift = {}
    friend_max = {}
    
    friend_map = {f: {g: 0 for g in friends} for f in friends}
    
    for i in friends: # 이름 새기기
        friend_give[i] = 0
        friend_get[i] = 0
        friend_gift[i] = 0
        friend_max[i] = 0
    for i in gifts: # 준거랑 받은거
        per, gift = i.split()
        friend_give[per] += 1
        friend_get[gift] += 1
        friend_map[per][gift] += 1
    for i in friends: # 선물 지수
        friend_gift[i] = friend_give[i] - friend_get[i]
        
    for i in range(len(friends)):
        for j in range(i+1, len(friends)):
            per = friends[i]
            gift = friends[j]
            
            cnt1 = friend_map[per][gift]
            cnt2 = friend_map[gift][per]
            
            if cnt1 > cnt2:
                friend_max[per] += 1
            elif cnt2 > cnt1:
                friend_max[gift] += 1
            else:
                if friend_gift[per] > friend_gift[gift]:
                    friend_max[per] += 1
                elif friend_gift[per] < friend_gift[gift]:
                    friend_max[gift] += 1
                
    return max(friend_max.values())