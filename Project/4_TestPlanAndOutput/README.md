## 1.1 HIGH LEVEL TEST PLAN
|Test number|Description|Input|Expected output|Actual output|status (passed or not passed)|
|-----------|-----------|----|----------------|-------------|------|
|1|Ultrasonic sensor|Object detected at a distance > 20cm|motors running in forward mode|forward motion of motors|:heavy_check_mark:|
|2|Ultrasonic sensor|Object detected at a distance < 20cm|Motors stopped|Motors in halt position|:heavy_check_mark:|
|3|Ultrasonic sensor|Object detected at a distance 28cm|motors running in forward mode|forward motion of motors|:heavy_check_mark:|
|4|Ultrasonic sensor|Object detected at a distance 10cm|Motors stopped|Motors in halt position|:heavy_check_mark:|
|5| Relay|motor position|Relay is open when motors are in forward motion| Relay contact open|:heavy_check_mark:|
|6| Relay|motor position|Relay is closed when motors are stopped| Relay contact closed|:heavy_check_mark:|
|7| Relay|motor position|Relay is open when motors are decelerating| Relay contact open|:heavy_check_mark:|
|8| Buzzer|object position|Buzzer on when object is detected|Buzzer on|:heavy_check_mark:|
|9| Buzzer|object position|Buzzer off when there is no object|Buzzer off|:heavy_check_mark:|

## 1.2 LOW LEVEL TEST PLAN

|Test number|Description|Input|Expected output|Actual output|status (passed or not passed)|
|-----------|-----------|----|----------------|-------------|------|
|1|motor driver|object position|object at distance <20cm stops the motors|stops motors|:heavy_check_mark:|
|2|motor driver|object position|object at distance >20cm runs motors|Runs motors|:heavy_check_mark:|
|3|motor driver|object position|object at distance 10cm runs motors|Runs motors|:heavy_check_mark:|


