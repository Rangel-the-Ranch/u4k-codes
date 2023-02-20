#define BUZZER_PIN 6
#define LED_PIN 13

void setup(){
  pinMode(BUZZER_PIN , OUTPUT);
  pinMode(LED_PIN , OUTPUT);

}

void loop(){
  digitalWrite(BUZZER_PIN,HIGH);
  delay(1000);
  analogWrite(BUZZER_PIN,128);   //takes values between 0 -> 255
  delay(1000);
}