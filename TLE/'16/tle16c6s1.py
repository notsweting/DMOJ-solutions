t = int(input())
d = {}
for _ in range(t):
    d[input().strip()] = []
n = int(input())
for i in range(n):
    k = input().strip()
    d[k].append(i+1)
for i in d:
    for j in d[i]:
        print(j)