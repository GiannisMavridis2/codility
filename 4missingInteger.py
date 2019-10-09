def solution(A):
    i=1
    while True:
        if i not in A:
            return i
        else:
            i+=1

A=[-1,-3]
lysh=solution(A)
print (lysh)
