n,m,x=[int(i) for i in input().split()]
arr=[[int(i) for i in input().split()]for j in range(n)]
def array(n,m):
    arr=[[0]*n for j in range(m)]
    cnt=0
    for i in range(n):
        for j in range(m):
            arr[i][j]=cnt
            cnt+=1
    return arr
def bin(x,a):
    l=0
    r=len(a)-1
    cnt=0
    while l<=r:
        mid=(l+r)//2
        if x>a[mid]:
            l=mid+1
        elif x<a[mid]:
            r=mid-1
        else:
            return mid
    return mid
    

def column(matrix, i):
    return [row[i] for row in matrix]

for i in range(n):
    if arr[i][bin(x,arr[i])]==x:
        print('Index:',i,bin(x,arr[i]))
        break
