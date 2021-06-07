/*
removed the comment
*/

void setup()
{
  Serial.begin(9600);
  Serial.println("Trimpot read example");

  pinMode(A0, INPUT);
}

void loop() 
{
  int myValue = 0;			//555
  myValue = analogRead(A0);
  
  Serial.print("The value is: ");
  Serial.println(myValue);

  delay(250);
}
