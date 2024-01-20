n,k= map(int, input().split()  )
s1=s2=0
n1=n2=0
for i in range(1,n+1):
    if i%k==0:
        s1=s1+i
        n1=n1+1
    else:
        s2=s2+i
        n2=n2+1
x1=s1/n1
x2=s2/n2
print("%.1f" % x1,"%.1f" % x2)
