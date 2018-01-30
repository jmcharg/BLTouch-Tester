# BLTouch-Tester
Simple Arduino code to test a BTTouch 3D printer sensor.

After a lot of frustration trying to get a BLTouch and a clone (3DTouch) device working, I decided it would be useful to have a simple circuit to test the device to be sure it was a problem with the printer and not the device.

This code is based on a simple Arduino program running on an Arduino ProMini but would be easily transportable to the Uno or any othe flavour.

  Connect 5V to Red
  Connect Gnd to Brown
  Connect Pin 9 to Orange / Yellow
  Connect Pin 2 to White.

  Serial port to 9600 and dont send CR or LF

  Send 1 to Pin Down
  Send 2 to Pin Up
  Send 3 to Test
  Send 4 to Reset
