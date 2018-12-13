a=[int(i) for i in input().split()]
a.sort
if a[0]*a[1]*a[-1]>a[-1]*a[-2]*a[-3]:
    print('3 max el-ta:',a[0]*a[1]*a[-1])
else:
    print('3 max el-ta:',a[-1]*a[-2]*a[-3])
