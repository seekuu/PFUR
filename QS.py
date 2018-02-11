def qs(ar):
	if len(a)>1:
		op=a[0]
		l=[]
		r=[]
		for i in a[1:]:
			if i<op:
				l.append(i)
			else:
				r.append(i)
		return qs(l)+[op]+qs(r)
	else:
		return a
ar=[10,-1,8,5,6,12,-3,-2,15,-5]
print(qs(a))