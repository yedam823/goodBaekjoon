def solution(board, moves):
    top = -1
    box = []
    cnt = 0
    length = len(moves)
    for i in range(0, length):
        idx = moves[i]
        ins = 0
        j = 0
        while ins == 0 and j < len(board):
            ins = board[j][idx-1]
            j += 1
        if ins == 0:
            continue
        board[j-1][idx-1] = 0
        if top >= 0 and box[top] == ins: 
            top -= 1
            cnt += 2
            box.pop()
        else:
            top+=1
            box.append(ins)
            
    answer = cnt
    return answer