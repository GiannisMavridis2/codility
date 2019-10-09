s="racecar"
N=len(s)
left=s[0:int((N-1)/2)]
leftReversed=''.join(reversed(left))
right=s[int((N+1)/2):N]
if right==leftReversed:
    print ((N-1)/2)
else:
    print ("no")
