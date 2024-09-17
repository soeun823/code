matrix = []
for _ in range(10):
    matrix.append(input().split())
    
x, y = 1, 1
while x <= 8 and y <= 8:
    if matrix[x][y] == "2":
        matrix[x][y] = "9"
        break
    matrix[x][y] = "9"
    if matrix[x][y+1] == "1" and matrix[x+1][y] == "1":
        break
    elif matrix[x][y+1] == "1":
        x += 1
    else:
        y += 1

for k in matrix:
    print(" ".join(k))
