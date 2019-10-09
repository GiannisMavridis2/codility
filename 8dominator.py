def solution(A):
    N=len(A)
    eida=[]
    for i in range(N):
        if A[i] not in eida:
            cntr=0
            for j in range(N):
                if A[i]==A[j]:
                    cntr+=1
                    index=i
            if cntr>N/2:
                return index
            else:
                eida.append(A[i])
    return -1                                





A=[3,4,8,8,4,5,5,6,6,6,4,5,3,2,3,-1,3,3]
lysh=solution(A)
print(lysh)
    
