/*
 12-29-2012
 Spark Fun Electronics
 Nathan Seidle
 
 This code is public domain but you buy me a beer if you use this and we meet someday (Beerware license).
 
 This is bad code but is used to demonstrate how to use repositories on github.
 
 If we have an analog sensor such as a trimpot or flex sensor on A0, this code would attempt
 to read it and output it to the terminal at 9600bps.
*/

void setup()
{
  Serial.begin(9600);
  Serial.println("Trimpot read example");

  pinMode(A0, INPUT);
}

void loop() 
{
  int myValue = 0;
  myValue = analogRead(A0);
  
  Serial.print("The value is: ");
  Serial.println(myValue);

  delay(250);
}

