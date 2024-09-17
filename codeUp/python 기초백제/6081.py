n = int(input(), 16)

for i in range(1, 16):
    print("%x".upper()%n,"*","%x".upper()%i, "=", "%x".upper()%(n*i), sep="")
