a,b,c = input( ).split()
a=float(a)
b=float(b)
c=float(c)
p=0.5*(a+b+c)
s=(p*(p-a)*(p-b)*(p-c))**0.5
print('%.1f' % s)