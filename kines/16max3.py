a=[int(i) for i in input().split()]
a.sort
if a[0]*a[1]*a[-1]>a[-1]*a[-2]*a[-3]:
    print('3 max composition:',a[0]*a[1]*a[-1])
else:
    print('3 max composition:',a[-1]*a[-2]*a[-3])
'''max composition of 3 values ar array
    example input : 1 2 3 4 5 -1 -2 -3'''
