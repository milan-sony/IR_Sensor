// Define pins
int SensorPin = 2;
int OutputPin = 13;

void setup() {
  // LED Output
  pinMode(OutputPin, OUTPUT);
  // IR Sensor Output
  pinMode(SensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int SensorValue = digitalRead(SensorPin);
  Serial.print("SensorPin Value: ");
  Serial.println(SensorValue);
//  delay(1000);
  if (SensorValue==LOW){ 
    // LOW means object detected
    digitalWrite(OutputPin, HIGH);
  }
  else
  {
    digitalWrite(OutputPin, LOW); 
  }
}
