String data;
int m1 = 2;
int m2 = 3;
int m3 = 4;
int m4 = 5;
int m5 = 6;
int m6 = 7;
int m7 = 8;
int m8 = 9;
void setup() 
{
 Serial.begin(9600);
 pinMode(m1,OUTPUT);
 pinMode(m2,OUTPUT);
 pinMode(m3,OUTPUT);
 pinMode(m4,OUTPUT);
 pinMode(m5,OUTPUT);
 pinMode(m6,OUTPUT);
 pinMode(m7,OUTPUT);
 pinMode(m8,OUTPUT);
}
void loop() 
{
 if(Serial.available()>0)
 {
  data = Serial.readString();
  data.trim();
  //Serial.print(data);
  if(data == "front")
  {
    Serial.println("FRONT");
    digitalWrite(m1,HIGH);
     digitalWrite(m2,LOW);
      digitalWrite(m3,HIGH);
     digitalWrite(m4,LOW);
  }
   if(data == "back")
  {
    Serial.println("BACK");
     digitalWrite(m1,LOW);
     digitalWrite(m2,HIGH);
      digitalWrite(m3,LOW);
     digitalWrite(m4,HIGH);
  }
   if(data == "left")
  {
    Serial.println("BOTE UP");
     digitalWrite(m5,HIGH);
     digitalWrite(m6,LOW);
      digitalWrite(m7,HIGH);
     digitalWrite(m8,LOW);
  }
   if(data == "right")
  {
    Serial.println("BOTE DOWN");
     digitalWrite(m5,HIGH);
     digitalWrite(m6,LOW);
      digitalWrite(m7,HIGH);
     digitalWrite(m8,LOW);
  }
   if(data == "stop")
  {
    Serial.println("STOP");
     digitalWrite(m1,LOW);
     digitalWrite(m2,LOW);
      digitalWrite(m3,LOW);
     digitalWrite(m4,LOW);
     digitalWrite(m5,LOW);
     digitalWrite(m6,LOW);
      digitalWrite(m7,LOW);
     digitalWrite(m8,LOW);
  }
  
 }

}