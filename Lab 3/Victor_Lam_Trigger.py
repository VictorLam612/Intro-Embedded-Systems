import Adafruit_BBIO.GPIO as GPIO
import time

pin = "P8_9"
GPIO.setup(pin, GPIO.IN)
GPIO.add_event_detect(pin, GPIO.RISING)
file = open("Timestamps.txt", "w+")
while (1):
    if GPIO.event_detected(pin):
        file.write(str(time.time()) + '\n')
    
    
