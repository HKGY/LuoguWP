s=float(input())
sum=0
step=2
n=0
while sum<s:
    sum=sum+step
    step=step*0.98
    n=n+1
print(n)

