char val;
byte pwm;



void setup() {
  // put your setup code here, to run once:
 pinMode(2,OUTPUT);
 digitalWrite(2,HIGH);
 pinMode(5,OUTPUT);
  digitalWrite(5,HIGH);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
   pinMode(7, OUTPUT); //set direction pin as output
  pinMode(6, OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);//set enable pin as output
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available()>1)
{
val=Serial.read();
delay(10);
pwm=Serial.read();
 
switch(val)
{case 'w':
digitalWrite(7, HIGH); //forward
  analogWrite(6,pwm);
  digitalWrite(4,HIGH);
  analogWrite(3,pwm);
  break;
 case 'd':
  digitalWrite(7,LOW);
  analogWrite(6,pwm);
  digitalWrite(4,HIGH);
  analogWrite(3,pwm);
  break;
  case 'e':
  digitalWrite(7,LOW);
  analogWrite(6,0);
  digitalWrite(4,LOW);
  analogWrite(3,0);
break;
case 'a':
  digitalWrite(7,HIGH);
  analogWrite(6,pwm);
  digitalWrite(4,LOW);
  analogWrite(3,pwm);
  break;
  case 's':
  digitalWrite(7,LOW);
  analogWrite(6,pwm);
  digitalWrite(4,LOW);
  analogWrite(3,pwm);
  break;
  case'u':
  digitalWrite(10,HIGH);
  break;
   case'i':
  digitalWrite(11,HIGH);
  break;
   case'o':
  digitalWrite(12,HIGH);
  break;
   case'p':
  digitalWrite(13,HIGH);
  break;
   case'h':
  digitalWrite(10,LOW);
  break;
   case'j':
  digitalWrite(11,LOW);
  break;
   case'k':
  digitalWrite(12,LOW);
  break;
   case'l':
  digitalWrite(13,LOW);
  break;
  
  
}   }}



