#define BUZZER_PIN 6
#define BUTTON_PIN 12
#define LED_PIN 13

//Задача: Когато е натиснат бутона диода свети , а ако не е бъзера пищи

void setup(){
  pinMode(BUZZER_PIN , OUTPUT);
  pinMode(BUTTON_PIN , INPUT); 
  pinMode(LED_PIN , OUTPUT);

}

// operator !  (негация)
//  !true  -> false
//  !false -> true

void loop(){
  bool isPressed = digitalRead(BUTTON_PIN);
  if(isPresed == true){
    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, LOW);
  }else{
    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, HIGH);
  }

  //digitalWrite(LED_PIN, isPressed);
  //digitalWrite(BUZZER_PIN, !isPressed);

}