answer = []
for _ in range(19):
    arr = input().split()
    answer.append(arr)

n = int(input())

for _ in range(n):
    x, y = map(int, input().split())
    for k in range(19):
        answer[k][y-1] = str(int(not int(answer[k][y-1])))
        answer[x-1][k] = str(int(not int(answer[x-1][k])))
        
for k in answer:
    print(" ".join(k))
