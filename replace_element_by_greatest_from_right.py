l = [17,18,5,4,6,1]
n = len(l)
mx=l[n-1]
l[n-1]=-1
i=n-2
while i>=0:
    tmp=l[i]
    l[i]=mx
    if tmp>mx:
      mx=tmp
    i-=1