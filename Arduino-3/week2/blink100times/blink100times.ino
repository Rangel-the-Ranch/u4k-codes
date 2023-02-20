
int counter = 0;

void setup(){
  pinMode(13,OUTPUT);
}

void loop(){
  if(counter < 100){
    digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    delay(100);

    counter = counter + 1;
    //counter++;
  }
}