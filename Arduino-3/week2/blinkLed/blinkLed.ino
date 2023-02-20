
void setup(){
  pinMode(13,OUTPUT);

}

void loop(){
  digitalWrite(13,HIGH);
  delay(500);   //500ms    (1000ms = 1s)
  digitalWrite(13,LOW);
  delay(500);
}