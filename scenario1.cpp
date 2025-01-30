// C++ code
//

/*write code to switch on the light with hand gesture with palm raised being 1 which means switch on and palm closed means 0 switch off  
*/

int pin=13;

void setup()
{
  Serial.begin(9600);
  pinMode(pin, OUTPUT);  
}

void loop()
{

  if(Serial.available()>0){
    char inp=Serial.read();
   
    if(inp=='r'||inp=='R'){
      digitalWrite(pin, HIGH);
      Serial.println("LED on");
    }
    else if(inp=='c'||inp=='C'){
      digitalWrite(pin, LOW);
      Serial.println("LED Off");
    }
    else{
    Serial.println("Wrong gesture!");
    }
    
  }
  
  
}