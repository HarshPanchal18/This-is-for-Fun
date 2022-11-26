import time

print('Press ENTER to begin. Afterwards, press enter to "click" the stopwatch. press ctrl-c to quit')
input()
print('Started counting...')
startTime = time.time()
lastTime = startTime
lapNum = 1

try:
    while True:
        input()
        lapTime = round(time.time()-lastTime, 2)
        totalTime = round(time.time()-startTime, 2)
        print('Lap #%s: %s (%s)' % (lapNum, totalTime, lapTime), end='')
        lapNum += 1
        lastTime = time.time()

except KeyboardInterrupt:
    print('\n.Done')

'''
Started counting...

Lap #1: 3.94 (3.94)
Lap #2: 6.14 (2.2)
Lap #3: 8.05 (1.91)
Lap #4: 8.4 (0.35)
Lap #5: 8.6 (0.19)
Lap #6: 8.8 (0.19)
Lap #7: 8.98 (0.18)
Lap #8: 9.16 (0.19)
Lap #9: 9.34 (0.18)
Lap #10: 9.55 (0.2)
.Done
'''
