a, b = map(int, input().split())
matrix = [["0" for _ in range(b)] for _ in range(a)]

for _ in range(int(input())):
    l, d, x, y = map(int, input().split())
    if d == 0:
        for i in range(y-1, y+l-1):
            matrix[x-1][i] = "1"
    else:
        for i in range(x-1, x+l-1):
            matrix[i][y-1] = "1"

for k in matrix:
    print(" ".join(k))
