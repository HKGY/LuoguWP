import math
s,v = input().split()
s=int(s)
v=int(v)
t=math.ceil(s/v)
x=t//60
y=t-60*x
x=int(7-x)
y=int(50-y)
if(y<0):
    y=y+60
    x=x-1
elif(y>=60):
    y=y-60
    x=x+1
if(x<0):
    x=24+x
x=str(x)
y=str(y)
if(int(y)<10):
    y="0"+y
if(int(x)<10):
    x="0"+x
print(x+":"+y)

