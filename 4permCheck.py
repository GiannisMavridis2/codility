def solution(A):
    N=len(A)
    for i in range(1,N+1):
        if i not in A:
            return 0
    return 1        

A=[4,1,3]
flag=solution(A)
print (flag)
