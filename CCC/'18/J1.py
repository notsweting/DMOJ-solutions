num1 = int(input())
num2 = int(input())
num3 = int(input())
num4 = int(input())

condition1 = num1 == 8 or num1 == 9
condition2 = num4 == 8 or num4 == 9 
condition3 = num2 == num3

if(condition1 and condition2 and condition3):
  print('ignore')
else:
  print('answer')