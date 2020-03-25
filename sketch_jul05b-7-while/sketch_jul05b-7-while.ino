int pinLed[5] = {12,11,10,9,8};
int numeroLed;
void setup() {
  // put your setup code here, to run once:
  int x;
  
  for(x = 0; x <= 4; x = x +1){
  pinMode(pinLed[x], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
numeroLed = 0;
while (numeroLed <=4){
    digitalWrite(pinLed[numeroLed], HIGH);
    delay(100);

    numeroLed = numeroLed + 1;
  }
numeroLed = 4;
while (numeroLed >=0){
    digitalWrite(pinLed[numeroLed], LOW);
    delay(100);
    
    numeroLed = numeroLed - 1;
  }  
}
