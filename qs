def qs(a,l,r):
	print(a)
	if r>l:
		el=a[r]
		i=l-1
		j=r
		while 1:
			i+=1
			j-=1
			while a[i]<el:
				i+=1
			while a[j]>el:
				j-=1
			if i>=j:
				break
			a[i],a[j]=a[j],a[i]
			print(a)
		a[i],a[r]=a[r],a[i]
		qs(a,l,i-1)
		qs(a,i+1,r)
a = input().split()
for k in range(len(a)):
    a[k] = int(a[k])
qs(a,0,len(a)-1)
print(a)
