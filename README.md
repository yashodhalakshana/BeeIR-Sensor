# BeeIR-Sensor Library

Arduino Library for BeeIR and all of other analog IR sensors. The Library can output analog sensors values as a boolean values. the sensor values is greater than programmer provided threshold value then output is 1 and sensor value is minor than threshold value then output is 0. <br />
## Library methods
#### Intialize library object
> BeeIR bIR(threshold_value, Sensor1, Sensor2, Sensor3, Sensor4, Sensor5, Sensor6, Sensor7, Sensor8); <br />

BeeIR           -> is class name. <br />
bIR             -> is a new BeeIR object name. You can put your own name. <br />
threshold_value -> is value marign between 1 and 0. <br />
Sensor1 -8      -> Replace the analog pin which is you connected sensor panel <br />

#### Get Sensor readings

> ReadSensor(senosr_number)
<br />
the senosr_number is vari between 1-8. put the correct sensor number to senosr_number. <br />
call this function in Arduino as following <br /><br />
bIR.ReadSensor(1); // Read sensor 1 value


## BeeIR-Sensor

BeeIR sensor is a TCRT5000 based 8 sensor array board. Which it is provides 8 analog outputs to user. BeeIR have a preset controller to the adjust IR led brightnes. And the LED is use as power indicator.
### Sensor Specs
Model : BeeIR <br />
IR sensor : TCRT5000 <br />
Channels : 8 <br />
Pitch : 9.5 mm <br />
Supply voltage : 3.3-5V DC <br />
Supply current : 200mA max <br />
Analog Outputs : 8 <br />
PCB Size : 77.00mm x 26.00mm <br />
### Stores
>Buy original BeeIR sensor from our stores
Manufacture : http://beefactory.lk/ <br />
Online Store : http://duino.lk/ <br />
 
![bee array front](https://user-images.githubusercontent.com/34935773/42123493-ba085c64-7c70-11e8-8f6e-3d8b62c1ea20.png)

![bee array back](https://user-images.githubusercontent.com/34935773/42123495-babdb00a-7c70-11e8-9eb8-110664e32b87.png)

### Full dimention specs

![dimention](https://user-images.githubusercontent.com/34935773/42123494-ba82d0e8-7c70-11e8-8c65-80ce2ef144e6.png)
