# BLTouch-Tester
Simple Arduino code to test a BTTouch 3D printer sensor.

After a lot of frustration trying to get a BLTouch and a clone (3DTouch) device working, I decided it would be useful to have a simple circuit to test the device to be sure it was a problem with the printer and not the device.

This code is based on a simple Arduino program running on an Arduino ProMini but would be easily transportable to the Uno or any othe flavour.

The hardware for this system is hooked up as follows :

#PIN     Use
2       BLTouch - White (Sensor output)
9       BLTouch - Orange (Signal)

BLTouch Red = 5V
BLTouch Brown = 0V / Ground

Once that is all hooked up and code installed, when powered up the BLTouch should do the twice pin down and up self diagnostics.

Open serial monitor and send the following to test.

#Character Sent      Action
1                     Pin Down
2                     Pin Up
3                     Self Test Process
4                     Reset
