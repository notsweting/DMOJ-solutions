string = input()
count = 0
for char in string:
    count += ord(char)-96
print(count)