int ledPin1 = 9;          // 1번 LED
int ledPin2 = 8;          // 2번 LED
int inputPin = 7;         // 센서 신호핀
int val = 0;              // 센서 신호의 판별을 위한 변수
int button = 2;           // 버튼 핀

unsigned long warningTime = 60000;  // 60초 (테스트를 위한 시간, 실제로는 더 많은 시간을 줘야함)
unsigned long previousMillis = 0;

void setup(){
  Serial.begin(9600);
  Serial1.begin(9600);
  pinMode(ledPin1, OUTPUT);    // 1번 LED를 출력으로 설정
  pinMode(ledPin2, OUTPUT);    // 2번 LED를 출력으로 설정
  pinMode(inputPin, INPUT);    // 센서 Input 설정
  pinMode(button, INPUT);      // 버튼 Input 설정
}

void loop(){
  val = digitalRead(inputPin);         // 센서 신호값을 읽어와서 val에 저장
  unsigned long currentMillis = millis();
  
  if (val == HIGH) {                   // 센서 신호값이 HIGH면(인체 감지가 되면)
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    delay(2000);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    Serial.println("인체 감지");
    previousMillis = currentMillis;
    Serial1.print('X');
  }

  else if ((unsigned long)(currentMillis - previousMillis) >= warningTime) {
    digitalWrite(ledPin1, LOW);       // 1번 LED OFF
    digitalWrite(ledPin2, HIGH);      // 2번 LED ON
    delay(2000);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    Serial.println("위급!!! 60초이상 감지 불가");
    Serial1.print('O');
  }

  if(digitalRead(button)==1){
    Serial.println("위급!!! 비상버튼 감지");
    Serial1.print('O');
  }
  
  Serial.println();
  delay(1000);
}
