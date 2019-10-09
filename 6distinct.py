def solution(A):
    N=len(A)
    A.sort()
    cntr=0
    i=0
    temp=A[0]
    while i<N-1 :
        while A[i]==temp:
            i+=1
        temp=A[i]
        cntr+=1
        i+=1
    return cntr+1        
    
A=[2,1,1,10,2,3,1,10,5,5,5,6,6,6,8,8,8]
lysh=solution(A)
print (lysh)
