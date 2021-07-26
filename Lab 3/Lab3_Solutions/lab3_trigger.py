import Adafruit_BBIO.PWM as PWM
import time
import Adafruit_BBIO.GPIO as GPIO
import csv


## input pin for readout
analogPin="P8_9"
##
##GPIO Setup
GPIO.setup(analogPin, GPIO.IN)
GPIO.add_event_detect(analogPin, GPIO.RISING)
## Number of minutes
minutes=input("Number of minutes?:")
noSeconds = float(minutes)*60
## Initalize timestamping
timeStamp = []
timeStart = time.time()
xPrev = timeStart
## Event detct and store timestamps
while(xPrev - timeStart <noSeconds):
    if GPIO.event_detected(analogPin):
        xPresent = time.time()
        timeStamp.append(xPresent - xPrev)
        xPrev = xPresent
## Write the time stamps to a file
filename = 'DataRead_10kHz.csv'
with open(filename, mode='w',newline='') as outCSV:
    writer = csv.writer(outCSV)
    for i in timeStamp:
        writer.writerow([i])
