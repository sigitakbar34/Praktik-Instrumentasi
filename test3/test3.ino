int led1 = 7;
int led2 = 6;
int led3 = 5;
float ldr,temp,load,tegLdr,tegTemp,tegLoad;

void setup()
{
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop()
{
  ldr = analogRead(A0);
  temp = analogRead(A1);
  load = analogRead(A2);
  tegLdr = ldr * (5.0 / 1023.0);
  tegTemp = temp * 5.0;
  tegTemp *= 100;
  tegTemp /= 1023;
  tegLoad = load * (5.0 / 1023.0);
  delay(500);
  
  if(tegLdr<=3.33 && tegLoad<=0 && tegTemp<=33){
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
  }
  else if(tegLdr<=3.33 && tegLoad<=0 && tegTemp>33){
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
  }
  else if(tegLdr<=3.33 && tegLoad>0 && tegTemp>33){
   digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,HIGH);
  }
  else if(tegLdr>3.33 && tegLoad<=0 && tegTemp<=33){
   digitalWrite(led1,HIGH);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
  }
  else if(tegLdr>3.33 && tegLoad>0 && tegTemp<=33){
   digitalWrite(led1,HIGH);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
  }
  else if(tegLdr>3.33 && tegLoad>0 && tegTemp>33){
   digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,HIGH);
  }
  else{
   digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
  }
}
