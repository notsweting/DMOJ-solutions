pairs = {}

topair = [[],[]]

n = int(input())

for j in range(2):
    k = input()
    ks = k.split(" ")
    for l in ks:
        topair[j].append(l)

for i in range(n):
    pairs[topair[0][i]] = topair[1][i]

valid = True
for i in range(n):
    a = topair[0][i]
    b = topair[1][i]
    ap = pairs[topair[0][i]]
    bp = pairs[topair[1][i]]

    if(a == ap or a != bp or b != ap or b == bp):
        valid = False


if valid:
    print("good")
else:
    print("bad")