a=[int(i) for i in input().split()]
max_otr=[0 for i in range(2)]
max_pol=[0 for i in range(3)]
mx1,mx2=0,0
l1,l2=0,0
for i in a:
    if i>mx1:
        mx1=i
        max_pol[l1%3]=i
        l1+=1
    elif i<mx2:
        mx2=i
        max_otr[l2%2]=i
        l2+=1
def red(arr):
    k=1
    for i in arr:
        k*=i
    return k
r_otr=red(max_otr)
max_pol.sort
r_pol=red(max_pol[1:])
if r_otr>r_pol:
    print(r_otr*max_pol[0])
else:
    print(r_pol*max_pol[0])
