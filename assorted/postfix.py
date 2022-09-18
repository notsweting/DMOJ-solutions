import sys
input = sys.stdin.readline
stack = input().strip().split(' ')
while len(stack)!=1:
    for i in range(len(stack)):
        if stack[i] in ['*','/','+','-','%','^']:
            a = float(stack[i-1]) if type(stack[i-1]) == float or type(stack[i-1] == int) or '.' in stack[i-1] else int(stack[i-1])
            b = float(stack[i-2]) if type(stack[i-2]) == float or type(stack[i-2] == int) or '.' in stack[i-2] else int(stack[i-2])
            c = stack[i]
            stack.pop(i)
            stack.pop(i-1)
            stack.pop(i-2)
            if c=='*':
                stack.insert(i-2, b*a)
            elif c=='/':
                stack.insert(i-2, b/a)
            elif c=='+':
                stack.insert(i-2, b+a)
            elif c=='-':
                stack.insert(i-2, b-a)
            elif c=='%':
                stack.insert(i-2, b%a)
            elif c=='^':
                stack.insert(i-2, b**a)
            break

print('%.1f'%stack[0])