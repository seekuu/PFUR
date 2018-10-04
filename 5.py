f = open('input.txt', 'r')
d = open('output.txt', 'w')
l = [line.strip() for line in f]
i=1
while i<=(int(l[0])):
    x=int(l[i])
    if x!=1 and x!=-1:
        if x>0:
            a=1*x**2
            b=-(x*(x-1))
            c=-(a+b)
            d.write(str(1)+' '+str(-(x-1))+' '+str(c) + '\n') 
        else:
            a=-1*x**2
            b=(x*(x+1))
            c=-(a+b) 
            d.write(str(-1)+' '+str((x+1))+' '+str(c) + '\n') 
    elif x==-1:
        d.write(str(1)+' '+str(2)+' '+str(1) + '\n') 
    else:
        d.write(str(2)+' '+str(-3)+' '+str(1) + '\n')
    i+=1
f.close()
d.close()
