 int  sensor1 = 2;
 int  sensor2 = 3;
 int  sensor3 = 4;
 int  actuador1 = 5;
 int  actuador2 = 6;
 int  actuador3 = 7;


  void setup(){

pinMode(2, INPUT);
pinMode(3, INPUT);
pinMode(4, INPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);



    
  }


  void loop(){

if(digitalRead(2) == HIGH && digitalRead(3) == LOW && digitalRead(4) == LOW){
  digitalWrite(actuador1, HIGH);
}else{
  if(digitalRead(2) == LOW && digitalRead(3) == HIGH && digitalRead(4) == LOW){
    digitalWrite(actuador2, HIGH);
  }else{
    if(digitalRead(2) == LOW && digitalRead(3) == LOW && digitalRead(4) == HIGH){
      digitalWrite(actuador3, HIGH);
    }
    
    
  }
}




    
  }
