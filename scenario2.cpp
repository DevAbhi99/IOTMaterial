//switch on lights (r for red light, y for yellow light and g for green light)

int pin1=13;
int pin2=12;
int pin3=11;

void setup(){
  Serial.begin(9600);
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
}

void loop(){

  if(Serial.available()>0){
    char inp=Serial.read();
    
    if(inp=='r'||inp=='R'){
    Serial.println("Red light on!");
      digitalWrite(pin1,HIGH);
        delay(1000);
      digitalWrite(pin1, LOW);
    }
    else if(inp=='y'||inp=='Y'){
      Serial.println("Yellow light on!");
      digitalWrite(pin2,HIGH);
        delay(1000);
      digitalWrite(pin2, LOW);
    }
    else if(inp=='g'||inp=='G'){
      Serial.println("Green light on!");
      digitalWrite(pin3,HIGH);
        delay(1000);
      digitalWrite(pin3, LOW);
    }
    else{
    Serial.println("Wrong Gesture!");
    }
  }
  
  
}