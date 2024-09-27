a,b = map(float, input().split())
L = [a+b,b+a,a-b,b-a,a*b,b*a,a//b,b//a,a**b,b**a]
print(L)
print('%.6f'%(max(L)))