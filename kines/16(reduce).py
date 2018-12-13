a=[int(i) for i in input().split()]
def red(k,arr,s):
    for h,i in enumerate(arr):
        if h!=s: k*=i
    return int(k)
b=[red(1,a,i) for i in range(len(a))]
print(b)
