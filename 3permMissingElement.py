def solution(A):
    for i in range(1,len(A)+2):
        if i not in A:
            return i

A=[2,3,1,5]
lysh=solution(A)
print(lysh)
        
