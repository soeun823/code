n = int(input())
numbers = list(map(int, input().split()))
numbers.reverse()

for number in numbers:
    print(number, end=' ')