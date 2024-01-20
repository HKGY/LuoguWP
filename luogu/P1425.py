a,b,c,d= map(int, input().split()  )
x=int(c-a)
y=int(d-b)
if(y<0):
    y=y+60
    x=x-1
elif(y>=60):
    y=y-60
    x=x+1
print(x,y)