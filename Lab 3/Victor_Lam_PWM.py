import Adafruit_BBIO.PWM as PWM

pwmPin = "P8_13"
PWM.start(pwmPin) #Sets P8_13 to be PWM 
for i in range (0, 1):
    DC = float(input("Duty Cycle: "))
    PWM.set_duty_cycle(pwmPin, DC) #Sets duty cycle for P8_13
    Freq = float(input("Frequency: "))
    PWM.set_frequency(pwmPin, Freq) #Sets frequency for P8_13
stop = input("Press enter to stop: ")
PWM.stop(pwmPin)
PWM.cleanup()
