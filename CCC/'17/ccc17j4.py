# imo this solution is sloppy but it acs so whatever
n = int(input())

k = n%720
j = (n-k)/720

hours = 12
minutes = -1
count = 0
for i in range(k+1):
    minutes+=1
    if minutes == 60:
        minutes = 0
        hours += 1
    if hours == 13:
        hours = 1
    shour = str(hours)
    sminutes = str(minutes)
    if(len(sminutes) == 1):
        sminutes = '0'+str(sminutes)
    
    total = shour+sminutes
    if(len(total) == 4):
        if(int(total[0]) - int(total[1]) == int(total[1]) - int(total[2]) == int(total[2]) - int(total[3])):
            count+=1
    else:
        if(int(total[0]) - int(total[1]) == int(total[1]) - int(total[2])):
            count+=1

print(int(count+(j*31)))
