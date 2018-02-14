def qs(a,l,r):
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
		a[i],a[r]=a[r],a[i]
		qs(a,l,i-1)
		qs(a,i+1,r)
a=[1,12,5,1,5,241,5,3,4,1,2,3,5,7,89,100]			
qs(a,0,len(a)-1)
print(a)
