#define BUZZER_PIN 6
#define BUTTON_PIN 12
#define LED_PIN 13

void setup(){
  pinMode(BUZZER_PIN , OUTPUT);
  pinMode(BUTTON_PIN , INPUT); //button is INPUT
  pinMode(LED_PIN , OUTPUT);

}

void loop(){
  bool isPressed = digitalRead(BUTTON_PIN);
  digitalWrtie(LED_PIN, isPressed);

  //digitalWrtie(LED_PIN, digitalRead(BUTTON_PIN));
}