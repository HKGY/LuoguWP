income=300
jin=0
mom=0
situ=0
for i in range(12):
    x=int(input())
    jin=jin+income-x
    if jin<0:
        situ=1
        debt=-i-1
        break
    while jin>=100:
        jin=jin-100
        mom=mom+100
if situ==1:
    print(int(debt))
else:
    print(int(jin+mom*1.2))
