n = int(input())
ranN = list(map(int, input().split()))

answer = [0 for _ in range(23)]

for k in ranN:
    answer[k-1] += 1

print(" ".join(list(map(str, answer))))
