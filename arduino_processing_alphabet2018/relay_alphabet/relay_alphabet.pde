 import processing.serial.*;
import controlP5.*;
ControlP5 controlP5;
Serial port;
char letter;
String words="Begin.. ";
void setup() {
  String portName=Serial.list()[0];
  port= new Serial(this,portName,9600);
  size(640, 360);
  // Create the font
}

void draw() {
  background(0); // Set background to black

  // Draw the letter to the center of the screen
  textSize(14);
  text("Current key: " + letter, 50, 70);
  
  textSize(36);
  text(words, 50, 120, 540, 300);
}

void keyTyped() {
  // The variable "key" always contains the value 
  // of the most recent key pressed.
  
    letter = key;
    words = words + key;
    // Write the letter to the console
    println(key);
    port.write(key);
  
}
