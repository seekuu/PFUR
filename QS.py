def qs(a):
	if len(a)>1:
		op=a[0]
		#Опорный элемент
		l=[]
		r=[]
		#Создаем два масива : в "l" элементы меньшие опорного , в "r" - большие и равные опорному
		for i in a[1:]:
			if i<op:
				l.append(i)
			else:
				r.append(i)
		return qs(l)+[op]+qs(r)
		#Рекурсивная функция 
	else:
		return a
a=[10,-1,8,5,6,12,-3,-2,15,-5]
print(qs(a))
