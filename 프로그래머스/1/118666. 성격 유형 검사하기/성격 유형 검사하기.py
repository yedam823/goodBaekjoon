def solution(survey, choices):
    answer = ''
    personal = {'A':0, 'C':0, 'F':0, 'J':0, 'N':0, 'M':0, 'R':0, 'T':0}
    
    for i in range(0, len(survey)):
        agree = survey[i][1]
        disagree = survey[i][0]
        
        score = choices[i];
        
        if choices[i] > 4:
            personal[agree] += score - 4
        else:
            personal[disagree] += 4 - score
    if personal['R'] >= personal['T']:
        answer += 'R'
    elif personal['R'] < personal['T']:
        answer += 'T'
    if personal['C'] >= personal['F']:
        answer += 'C'
    elif personal['C'] < personal['F']:
        answer += 'F'
    if personal['J'] >= personal['M']:
        answer += 'J'
    elif personal['M'] > personal['J']:
        answer += 'M'
    if personal['A'] >= personal['N']:
        answer += 'A'
    elif personal['N'] > personal['A']:
        answer += 'N'
    return answer