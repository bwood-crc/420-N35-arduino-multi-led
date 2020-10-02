const int LED1 = D3;
const int LED2 = D4;
const int LED3 = D5;
const int LED4 = D6;
const int LED5 = D7;
const int LED6 = D8;

void setup() {
  //delay(4000);
  
  //Serial.begin(9600);
 // Serial.write("Initialized");
   
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  
  
  digitalWrite(LED1, HIGH);
}

void loop() {

  delay(50);
  digitalWrite(LED1, random(1,3) == 2 ? LOW : HIGH);
  //Serial.write(random(1,3) == 2 ? "A" : "B");
  digitalWrite(LED2, random(1,3) == 2 ? LOW : HIGH);
  digitalWrite(LED3, random(1,3) == 2 ? LOW : HIGH);
  digitalWrite(LED4, random(1,3) == 2 ? LOW : HIGH);
  digitalWrite(LED5, random(1,3) == 2 ? LOW : HIGH);
  digitalWrite(LED6, random(1,3) == 2 ? LOW : HIGH);
  //delay(250);
  //digitalWrite(LED1, HIGH);
  //digitalWrite(LED2, HIGH);
  //digitalWrite(LED3, HIGH);
  //digitalWrite(LED4, HIGH);
  //digitalWrite(LED5, HIGH);
  //digitalWrite(LED6, HIGH);
}
