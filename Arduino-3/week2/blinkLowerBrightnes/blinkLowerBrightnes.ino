
void setup(){
  pinMode(13,OUTPUT);

}

void loop(){
  digitalWrite(13,HIGH);
  delay(2);   //2ms on 1ms off -> 1/3 of max brightnes
  digitalWrite(13,LOW);
  delay(1);  
}