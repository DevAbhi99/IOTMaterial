//Read analogous data from temperature sensor and ouput its value



void setup(){
Serial.begin(9600); 
}

void loop(){
  
  
  Serial.println(analogRead(A0));
  
  analogWrite(A0,200);
 
  
}