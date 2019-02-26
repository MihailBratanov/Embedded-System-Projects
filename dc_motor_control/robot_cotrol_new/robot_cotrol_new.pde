import processing.serial.*;
import controlP5.*;
ControlP5 controlP5;
Serial port;
int pwm=250;
float x = 150;
float y = 50;
float w = 100;
float h = 80;
float x2 = 280;
float y2 = 150;
float w2= 100;
float h2 = 80;
float x3 = 150;
float y3 = 150;
float w3= 100;
float h3 = 80;
float x4 = 20;
float y4 = 150;
float w4= 100;
float h4 = 80;
float x5 = 150;
float y5 = 250;
float w5= 100;
float h5 = 80;
float xr1=420,xrr1=540;
float yr1=50,yrr1=50;
float wr1=100,wrr1=100;
float hr1=80,hrr1=80;
float xr2=420,xrr2=540;
float yr2=150,yrr2=150;
float wr2=100,wrr2=100;
float hr2=80,hrr2=80;
float xr3=420,xrr3=540;
float yr3=250,yrr3=250;
float wr3=100,wrr3=100;
float hr3=80,hrr3=80;
float xr4=420,xrr4=540;
float yr4=350,yrr4=350;
float wr4=100,wrr4=100;
float hr4=80,hrr4=80;


void setup()
{
  size(700,700);
  String portName=Serial.list()[0];
  port= new Serial(this,portName,9600);
  controlP5=new ControlP5(this);
  controlP5.addSlider("pwm",0,250,pwm,20,10,180,20);
}
void draw()
{ color c;
 noStroke();
 c=color(0,12,200);
 fill(c);
  rect(x,y,w,h);

 rect(x2,y2,w2,h2);
 rect(x3,y3,w3,h3);
 rect(x4,y4,w4,h4);
 rect(x5,y5,w5,h5);
colorMode(RGB,100);
c=color(0,200,0);
fill(c);
 rect(xr1,yr1,wr1,hr1);
  rect(xr2,yr2,wr2,hr2);
   rect(xr3,yr3,wr3,hr3);
  rect(xr4,yr4,wr4,hr4);
  colorMode(RGB,100);
c=color(200,0,0);
fill(c);
rect(xrr1,yrr1,wrr1,hrr1);
  rect(xrr2,yrr2,wrr2,hrr2);
   rect(xrr3,yrr3,wrr3,hrr3);
  rect(xrr4,yrr4,wrr4,hrr4);
if(mousePressed){
  if(mouseX>x && mouseX <x+w && mouseY>y && mouseY <y+h){
   println("The mouse is pressed and over the button");
    
port.write('w');

port.write(pwm);

println("w");

println(pwm);

  }
  else
  {port.write('0');
  }
}if(mousePressed){
    if(mouseX>x2 && mouseX <x2+w2 && mouseY>y2 && mouseY <y2+h2){
   println("The mouse is pressed and over the button");
   
port.write('d');

port.write(pwm);
println("d");
println(pwm);
  }
  else
  {port.write('0');
  }
 } 
 if(mousePressed){
    if(mouseX>x3 && mouseX <x3+w3 && mouseY>y3 && mouseY <y3+h3){
   println("The mouse is pressed and over the button");
   
port.write('e');

port.write(pwm);
println("e");
println(pwm);
  }
  else
  {port.write('0');
  }
 } 
 if(mousePressed){
    if(mouseX>x4 && mouseX <x4+w4 && mouseY>y4 && mouseY <y4+h4){
   println("The mouse is pressed and over the button");
     
port.write('a');port.write(pwm);
println("a");
println(pwm);
  }
  else
  {port.write('0');
  }
 } 
 if(mousePressed){
    if(mouseX>x5 && mouseX <x5+w5 && mouseY>y5 && mouseY <y5+h5){
   println("The mouse is pressed and over the button");
     
port.write('s');

port.write(pwm);
println("s");
println(pwm);
  }
  else
  {port.write('0');
  }
   if(mousePressed){
    if(mouseX>xr1 && mouseX <xr1+wr1 && mouseY>yr1 && mouseY <yr1+hr1){
   println("The mouse is pressed and over the button");
     
port.write('u');


println("u");

  }
  else
  {port.write('0');
  }
     if(mousePressed){
    if(mouseX>xr2 && mouseX <xr2+wr2 && mouseY>yr2 && mouseY <yr2+hr2){
   println("The mouse is pressed and over the button");
     
port.write('i');


println("i");

  }
  else
  {port.write('0');
  }
 } 
      if(mousePressed){
    if(mouseX>xr3 && mouseX <xr3+wr3 && mouseY>yr3 && mouseY <yr3+hr3){
   println("The mouse is pressed and over the button");
     
port.write('o');


println("o");

  }
  else
  {port.write('0');
  }
 } 
      if(mousePressed){
    if(mouseX>xr4 && mouseX <xr4+wr4 && mouseY>yr4 && mouseY <yr4+hr4){
   println("The mouse is pressed and over the button");
     
port.write('p');


println("p");

  }
  else
  {port.write('0');
  }
 } 
       if(mousePressed){
    if(mouseX>xrr1 && mouseX <xrr1+wrr1 && mouseY>yrr1 && mouseY <yrr1+hrr1){
   println("The mouse is pressed and over the button");
     
port.write('h');


println("h");

  }
  else
  {port.write('0');
  }
 } 
        if(mousePressed){
    if(mouseX>xrr2 && mouseX <xrr2+wrr2 && mouseY>yrr2 && mouseY <yrr2+hrr2){
   println("The mouse is pressed and over the button");
     
port.write('j');


println("j");

  }
  else
  {port.write('0');
  }
 } 
        if(mousePressed){
    if(mouseX>xrr3 && mouseX <xrr3+wrr3 && mouseY>yrr3 && mouseY <yrr3+hrr3){
   println("The mouse is pressed and over the button");
     
port.write('k');


println("k");

  }
  else
  {port.write('0');
  }
 } 
        if(mousePressed){
    if(mouseX>xrr4 && mouseX <xrr4+wrr4 && mouseY>yrr4 && mouseY <yrr4+hrr4){
   println("The mouse is pressed and over the button");
     
port.write('l');


println("l");

  }
  else
  {port.write('0');
  }
 } 
}}}