n,m,x=[int(i) for i in input().split()]
arr=[[int(i) for i in input().split()]for j in range(n)]

def bin(x,a):#бинарный поиск
    l=0
    r=len(a)-1
    cnt=0
    while l<=r:
        mid=(l+r)//2
        if x==a[mid]:
            break
        if x>a[mid]:
            l=(l+r)//2
        else:
            r=(l+r)//2
        if r-l==1:break
    return mid

for i in range(n):#бинарный поиск на матрицу(nlogn)
    fff=bin(x,arr[i])
    if x==arr[i][fff]:
        index='Index:'+'['+str(i)+']'+'['+str(fff)+']'
        print(index)
        break
