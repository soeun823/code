memo = [0]*30001
memo[0]=1
memo[1]=2
def s(a) :
    if(memo[a]) :
        return memo[a]
    memo[a]= s(a-1) + a
    return memo[a]

pyung = int(input())
print(s(pyung))