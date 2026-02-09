int ledPin = 3;
int irPin1 = 8;
int irPin2 = 2;
int sensorVal1;
int sensorVal2;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  pinMode(irPin1,INPUT);
  pinMode(irPin2,INPUT);
  Serial.begin(9600);
  digitalWrite(irPin1,LOW);
  digitalWrite(irPin2,LOW);
  digitalWrite(ledPin,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorVal1 = digitalRead(irPin1);
  sensorVal2 = digitalRead(irPin2);
  Serial.print("IR Sensor1 Value : ");
  Serial.println(sensorVal1);
  Serial.print("IR Sensor2 Value : ");
  Serial.println(sensorVal2);
  
  if(sensorVal1 == 1 && sensorVal2 == 1)   //no object detected
  {
    digitalWrite(ledPin, LOW);
  }
  if (sensorVal1 == 0 && sensorVal2 == 0)   //object detected
  {
    digitalWrite(ledPin, HIGH);
  }
  delay(300);
}




