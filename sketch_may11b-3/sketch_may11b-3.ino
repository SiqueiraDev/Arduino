void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, INPUT_PULLUP);// AQUI PODE SER TANTO "INPUT" QUANTO "INPUT_PULLUP:
}

void loop() {
  // put your main code here, to run repeatedly:
  
  int estadoBotao;
  estadoBotao = digitalRead(7);  
  
  digitalWrite(10, estadoBotao);
  digitalWrite(9, !estadoBotao);
 }
