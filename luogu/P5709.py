x=int(input())
if x%2==0:
    a=1
else:
    a=0
if 4<x<=12:
    b=1
else:
    b=0
print(a and b,a or b,int(a and not b or b and not a),int(not a and not b))
