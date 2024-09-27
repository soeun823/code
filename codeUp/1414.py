c = input()
cL = list(c)
print(c.count("c") + c.count("C"))

count_cc = 0
for i in range(len(c) - 1):
    if c[i:i+2] in ["cc", "cC", "Cc", "CC"]:
        count_cc += 1
print(count_cc)