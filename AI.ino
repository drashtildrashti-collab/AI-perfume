 const int sensorpin = A0;
  // put your setup code here, to run once:

void setup() {}
      serial.begin(9600);
}
void loop() {
  int value =
 analogread(sensorpin);

serial.println(vslue);

  delay(500);
}
  
  // put your main code here, to run repeatedly:

}
