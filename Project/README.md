# Embedded Rain Sensing System






## Introduction
- The automated rain wiper system is used to detect rainfall and activate 
rain wipers without driver interaction. 
- Almost all motor vehicles, including cars, trucks, train locomotives etc are equipped with such wipers, which are usually a important requirement.




## Requirements
- In rainy days we suffer from sprinkling of water on front glass of vehicle. 
Due to this sprinkling of water on windshield glass the driver cannot see other vehicles on road clearly
- So he tries operating wiper on glass, for that
he should often switch on for operating wiper and due to the distraction from the road there is a possibility for an accident to occur.
- This accident can be avoided by placing a sensor which senses the sprinkling of water and sends signals to automatically operate the wiper.
- The main requirement of this project is when the water hit the sensor, it will send signal to the system thus moving the
wiper motor. Once sensor did not detect any water, the wiper will stop.



## System Design: Block Diagram
![Untitled Workspace (4)](https://user-images.githubusercontent.com/98951784/155115962-d0ba43de-9dd2-459e-ad87-9b01c79625a9.jpg)



## Components 
| components names|Model type| Quantity|
|-----------------|---------|----------|
|Power switch|DC type|1|
|Resistor|1MΩ,10KΩ,1KΩ|3|
|Relay|12V|1|
|Transistor(NPN)|BC548|1|
|Transformer|230V-12V|1|
|Wiper motor|12V DC|1|
|Rain sensor|Sensor pad|1|
|Capacitor (ceramic)|0.1µf|1|
|Control Unit|Arduino Mega|1|
|Attiny-85|AVR Microcontroller|1|


- Rain Sensor:
The most common modern rain sensors are based on the principle of total internal
reflection: an infrared light is beamed at a 45-degree angle into the windshield from
the interior — if the glass is wet, less light makes it back to the sensor, and the wipers
turn on.
- DC Motor:
This is used for controlling the direction and the speed of the wiper. It actuates whenever it
receives signal from the control circuit to operate the wiper.
- Attiny-85:
ATtiny85 is an 8-bit AVR microcontroller that comes with 8-pin interface and mainly used in automation and Arduino projects.
- Arduino Mega:The Arduino Mega 2560 is a microcontroller board based on the ATmega2560.It has 54 digital input/output pins.Arduino can be used to develop stand-alone interactive objects or can be connected to software on your computer




## High level Requirements

| ID | Description| 
|:---:|:---:|
|HLR-1| system shall be able to sense the sprinkling of rain water through the Rain sensor|
|HLR-2| System shall send the signals from sensor to control unit|  
|HLR-3| The control unit shall operate the actuator to turn on the rain wipers after receiving signals fron sensor|
|HLR-4| system shall avoid the accident that may occur due to the distarction of driver fron road|



## Low level Requirements:

| ID | Description|
|:---:|:---:|
|LLR-1|Sensor shall not send any signals to control unit when there is no sprinkling of rain water|
|LLR-2|The control unit shall stop the actuator upon not receiving signals from the sensor|





## Advantages
- It can be easily and quickly installed in automobiles. 
- Low Power consumption
- Simple and Portable
- Easy to implement
- Cost Effective



## Applications
- This small circuit finds numerous applications.
- Useful to vehicles.
- It can be implemented at house window for cleaning.
-  A slight modification in t leads to a better cleaning system.
-  Prevents gliss shield or bars from getting corroded.
