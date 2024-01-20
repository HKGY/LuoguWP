x=int(input())
if x%4==0:
    if x%100==0:
        if x%400==0:
            y=1
        else:
            y=0
    else:
        y=1
else:
    y=0
print(y)