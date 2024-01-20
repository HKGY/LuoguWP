n=int(input())
a=list(map(int,input().split()))
min=1000
for i in range(n):
    if a[i]<min:
        min=a[i]
print(min)