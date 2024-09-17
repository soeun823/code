n = list(map(str, range(1, int(input())+1)))

for i in n:
    if "3" in i or "6" in i or "9" in i:
        n[n.index(i)] = "X"
        
print(" ".join(n))
