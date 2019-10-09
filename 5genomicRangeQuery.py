def solution(S,P,Q):
    answer=[]
    for i in range(len(P)):
        s=S[P[i]:Q[i]+1]
        exist=[]
        if 'A' in s:
            exist.append(1)
        if 'C' in s:
            exist.append(2)
        if 'G' in s:
            exist.append(3)            
        if 'T' in s:
            exist.append(4)
        answer.append(min(exist))
    return answer        

S="CAGCCTA"
P=[2,5,0]
Q=[4,5,6]
lysh=solution(S,P,Q)
print(lysh)
