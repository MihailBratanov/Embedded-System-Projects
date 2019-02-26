
char letter;
void setup() {
  // put your setup code here, to run once:
pinMode(10,OUTPUT);
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
digitalWrite(10,LOW);
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
Serial.begin(9600);

}
void Null(){
 digitalWrite(10,LOW);
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
}
void loop() {
   if(Serial.available()>0)
 {letter=Serial.read();
switch (letter){
  case ' ':
   digitalWrite(10,LOW);
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  break;
  case 'a': 
  digitalWrite(1,HIGH);
  delay(100);
  digitalWrite(2,HIGH);
  delay(100);
  break;
  Null();
  case 'b':
   digitalWrite(1,HIGH);
  delay(100);
  digitalWrite(3,HIGH);
    delay(100);
  Null();
  break;
    case 'c':
   digitalWrite(1,HIGH);
  delay(100);
  digitalWrite(4,HIGH);
    delay(100);
  Null();
  break;
    case 'd':
   digitalWrite(1,HIGH);
  delay(100);
  digitalWrite(5,HIGH);
    delay(100);
  Null();
  break;
    case 'e':
   digitalWrite(1,HIGH);
  delay(100);
  digitalWrite(6,HIGH);
    delay(100);
  Null();
  break;
    case 'f':
   digitalWrite(1,HIGH);
  delay(100);
  digitalWrite(7,HIGH);
    delay(100);
  Null();
  break;
    case 'g':
   digitalWrite(1,HIGH);
  delay(100);
  digitalWrite(8,HIGH);
    delay(100);
  Null();
  break;
    case 'h':
   digitalWrite(1,HIGH);
  delay(100);
  digitalWrite(9,HIGH);
    delay(100);
  Null();
  break;
    case 'i':
   digitalWrite(1,HIGH);
  delay(100);
  digitalWrite(10,HIGH);
    delay(100);
  Null();
  break;
    case 'j':
   digitalWrite(2,HIGH);
  delay(100);
  digitalWrite(1,HIGH);
    delay(100);
  Null();
  break;
    case 'k':
   digitalWrite(2,HIGH);
  delay(100);
  digitalWrite(3,HIGH);
    delay(100);
  Null();
  break;
    case 'l':
   digitalWrite(2,HIGH);
  delay(100);
  digitalWrite(4,HIGH);
    delay(100);
  Null();
  break;
    case 'm':
   digitalWrite(2,HIGH);
  delay(100);
  digitalWrite(5,HIGH);
    delay(100);
  Null();
  break;
    case 'n':
   digitalWrite(2,HIGH);
  delay(100);
  digitalWrite(6,HIGH);
    delay(100);
  Null();
  break;
    case 'o':
   digitalWrite(2,HIGH);
  delay(100);
  digitalWrite(7,HIGH);
    delay(100);
  Null();
  break;
    case 'p':
   digitalWrite(2,HIGH);
  delay(100);
  digitalWrite(8,HIGH);
    delay(100);
  Null();
  break;
    case 'q':
   digitalWrite(2,HIGH);
  delay(100);
  digitalWrite(9,HIGH);
    delay(100);
  Null();
  break;
    case 'r':
   digitalWrite(2,HIGH);
  delay(100);
  digitalWrite(10,HIGH);
    delay(100);
  Null();
  break;
    case 's':
   digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(1,HIGH);
    delay(100);
  Null();
  break;
    case 't':
   digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(2,HIGH);
    delay(100);
  Null();
  break;
     case 'u':
   digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(4,HIGH);
    delay(100);
  Null();
  break;
     case 'v':
   digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(5,HIGH);
    delay(100);
  Null();
  break;
     case 'w':
   digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(6,HIGH);
    delay(100);
  Null();
  break;
     case 'x':
   digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(7,HIGH);
    delay(100);
  Null();
  break;
     case 'y':
   digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(8,HIGH);
    delay(100);
  Null();
  break;
     case 'z':
   digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(9,HIGH);
    delay(100);
  Null();
  break;
     case 'ъ':
   digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(9,HIGH);
    delay(30);
  Null();
  break;
     case 'ь':
   digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(0,HIGH);
    delay(30);
  Null();
  break;
     case 'ю':
   digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(1,HIGH);
    delay(30);
  Null();
  break;
     case 'я':
   digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(2,HIGH);
    delay(30);
  Null();
  break;
}

 
 }

 
  // put your main code here, to run repeatedly:


}
