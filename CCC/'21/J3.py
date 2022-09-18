instructions = []
while True:
    instruction = input()
    if instruction == '99999':
        break
    instructions.append(instruction)

prevdir = ''
for i in instructions:
    direction = int(i[:1]) + int(i[1:2])
    if direction == 0:
        direct = prevdir
    elif direction%2 == 0:
        direct = 'right'
    else:
        direct = 'left'
    prevdir = direct


    print(f'{prevdir} {i[2:]}')