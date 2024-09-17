n = int(input())

answer = [["0" for _ in range(19)] for _ in range(19)]

for i in range(n):
    x, y = map(int, input().split())
    answer[x-1][y-1] = "1"
    
for k in answer:
    print(" ".join(k))
