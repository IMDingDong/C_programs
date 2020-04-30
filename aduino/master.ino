int speakerPin = A3;
char warning;

void setup(){
  Serial.begin(9600);
  Serial1.begin(9600);
}

void loop(){
  while(Serial1.available())
  {
    warning = Serial1.read();
    Serial.write(Serial1.read());

    if (warning == 'O')
    {
      Serial.write("위급상황 발생!!!");
      for(int hz = 440; hz < 1000; hz++){
        tone(speakerPin, hz, 50);
        delay(5);
      }
      noTone(speakerPin);
      for(int hz = 1000; hz > 440; hz--){
        tone(speakerPin, hz, 50);
        delay(5);
      }
      noTone(speakerPin);
    }
  }
}
