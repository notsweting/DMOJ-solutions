import sys
input = sys.stdin.readline
def read(stack):
    k = ''
    for i in stack:
        if type(i) == list:
            k += proc(i)
        else:
            k += i
            k += ' '
    print(k.strip())

def proc(stack):
    k = ''
    for i in stack:
        if type(i) == list:
            k += proc(i)
        else:
            k += i + ' '
    return k

while True:
    stack = input().strip().split(' ')
    if stack == ['0']:
        break
    count = 0
    while len(stack) != 1:
        for i in range(len(stack)):
            if stack[i] != '+' and stack[i] != '-':
                count+=1
            else:
                count = 0
            if count==2:
                eq = [stack[i-1], stack[i], stack[i-2]]
                stack.pop(i)
                stack.pop(i-1)
                stack.pop(i-2)
                stack.insert(i-2, eq)
                count = 0
                break
    read(stack)