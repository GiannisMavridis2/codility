def solution(A):
    N=len(A)
    exist=[]
    for i in range(N):
        if A[i] not in exist:
            if (A[i] in A[i+1:N])or(A[i] in A[0:i]):
                exist.append(A[i])
            else:
                return A[i]



A=[9,3,9,3,9,7,9]
lysh=solution(A)
print(lysh)
