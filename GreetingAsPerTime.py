import time
name = input('Enter your name: ')
recenttime = time.strftime('%H:%M:%S')
Recenttime = int(time.strftime('%H'))
c= name.capitalize()
if(4<=Recenttime<12):
    print('GOOD MORNING',c,'its',recenttime)
elif(12<=Recenttime<=15):
    print('GOOD AFTERNOON',c,'its',recenttime)
elif(15<Recenttime<=18):
    print('GOOD EVENING',c,'its',recenttime)
else:
    print('GOOD NIGHT',c,'its',recenttime)
