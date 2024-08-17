N = int(input())
s = list(map(int, input().split()))
M = int(input())
k = list(map(int, input().split()))
dict = {}
cnt = 1
for i in s:
    dict[i] = cnt
    cnt += 1
for i in k:
    if i in dict: print(dict[i], end=' ')
    else: print(-1, end=' ')
