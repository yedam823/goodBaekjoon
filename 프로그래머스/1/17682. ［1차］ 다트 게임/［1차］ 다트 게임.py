def solution(dartResult):
    answer = 0  
    totalScore = []
    i = 0
    while(i < len(dartResult)):
        score = 0
        ch = dartResult[i]
        if dartResult[i] == '1' and i+1 < len(dartResult) and dartResult[i+1] == '0':
            score = 10
            i += 2
        else:
            score = int(dartResult[i])
            i+=1
        
        bonus = dartResult[i]
        if bonus == 'D':
            score = pow(score, 2)
        elif bonus == 'S':
            score = pow(score, 1) 
        elif bonus == 'T':
            score = pow(score, 3)
        i+=1
            
        if i < len(dartResult) and dartResult[i] in ['*', '#']:
            if dartResult[i] == '*':
                score *= 2
                if totalScore:
                    totalScore[-1] *= 2
                    
            else:
                score *= -1
            i+=1

        totalScore.append(score)
    return sum(totalScore)