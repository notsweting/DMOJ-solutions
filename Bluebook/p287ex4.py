n=int(input())
for i in range(n):
    m = input()
    if " " in m:
        print(m.find(" ")+1)
    else:
        print(0)