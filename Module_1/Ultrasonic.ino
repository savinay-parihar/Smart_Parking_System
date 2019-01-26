
/********* Functions For Checking Cycle distance in slot *********/

void UltrasonicSensor()
{

    Serial.println("\n Digital Value");
    Serial.println(digitalRead(wakeUpPin));
    
  
    Serial.println(analogRead(wakeUpPin));
    delay(30);
//    if (analogRead(wakeUpPin) <263 )
//    {
//      lockledPin = 0;
//    }
//    else if (analogRead(wakeUpPin) >=263)
//    {
//      lockledPin = 1;
//    }

    if (digitalRead(wakeUpPin) == 0 )
    {
      lockledPin = 0;
    }
    else if (digitalRead(wakeUpPin) == 1)
    {
      lockledPin = 1;
    }
  
  delay(10);
}

void UltrasonicSensorL()
{
  
    Serial.println(analogRead(wakeUpPin));
    delay(30);
    if (analogRead(wakeUpPin) <258 )
    {
      lockledPin = 0;
    }
    else if (analogRead(wakeUpPin) >=258)
    {
      lockledPin = 1;
    }
  
  delay(10);
}
