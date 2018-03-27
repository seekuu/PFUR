n=int(input())
a=[]
for i in range(n):
	a.append([int(j) for j in input().split()])
print(a)
maxel=a[0][0]
for i in range(len(a)):
    for j in range(len(a[i])):
         if a[i][j]>maxel:
               maxel=a[i][j]
print(maxel)
