void setup() 
{
  // put your setup code here, to run once:
  //初始化串口
  Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  
  delay(1000);
}
