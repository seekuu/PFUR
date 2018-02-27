def qs(a,l,r):
	if l>=r:
		return
	el=a[(l+r)//2]
	#опорным берем элемент из центра списка
	i=l
	j=r
	while i<=j:
		while a[i]<el:
			i+=1
		while a[j]>el:
			j-=1
		if i<=j:
			a[i],a[j]=a[j],a[i]
			print(a)
			i=i+1
			j=j-1
		#проходим по списку , находим эл-ты , стоящие "не на своих местах", меняем их местами
	qs(a,l,j)
	qs(a,i,r)
a=input().split()
for k in range(len(a)):
	a[k]=int(a[k])	
	#переводим эл-ты списка в тип int
qs(a,0,len(a)-1)
print('Отсортированный массив :',a)

