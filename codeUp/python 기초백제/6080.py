from itertools import product

a, b = map(int, input().split())

array = [list(range(1, a+1)), list(range(1, b+1))]

for k in list(product(*array)):
    print(k[0], k[1])
