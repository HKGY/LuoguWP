n,x=map(int,input().split())
sum=0
for i in range(1,n+1):
    char=str(i)
    for j in range(len(char)):
        if char[j]==str(x):
            sum=sum+1
print(sum)
