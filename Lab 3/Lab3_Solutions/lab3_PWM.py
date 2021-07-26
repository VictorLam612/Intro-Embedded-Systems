import Adafruit_BBIO.PWM as PWM
myPWM="P8_13"
PWM.start(myPWM, 0, 1000)
for i in range(0,3):
        DC=input("What Duty Cycle would you like, (0-100)?:")
        Freq=input("What Frequency would you like, (0-10kHz)?:")
        PWM.set_duty_cycle(myPWM, float(DC))
        PWM.set_frequency(myPWM, float(Freq))
PWM.stop(myPWM)
PWM.cleanup()