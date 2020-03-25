int pinVermelho = 10;
int pinAmarelo  = 9;
int pinVerde = 8;
int pinBotao = 7;

int faseSemaforo;

int estadoBotao;

int estadoAnteriorBotao;

int tempoPisca;

int estadoPisca;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAmarelo, OUTPUT);
  pinMode(pinVermelho, OUTPUT);
  pinMode(pinBotao, INPUT);

  faseSemaforo = 1;

  estadoAnteriorBotao = digitalRead(pinBotao);

  tempoPisca = 0;

  estadoPisca = HIGH;
  }

void loop() {
  // put your main code here, to run repeatedly:
 estadoBotao = digitalRead(pinBotao);

 if ((estadoBotao == HIGH) && (estadoAnteriorBotao == LOW)){//Aqui podemos inverter para que o controle seja feito quando soltar o botão apenas invertendo//  
    if(faseSemaforo < 3){
    faseSemaforo = faseSemaforo + 1;
  }
    else{
    faseSemaforo = 1;
  }
 
  estadoAnteriorBotao = estadoBotao;
 } 
 tempoPisca = tempoPisca + 1;  
 if (tempoPisca == 400){
  estadoPisca = !estadoPisca;
  tempoPisca = 0;  
 }
 if (faseSemaforo == 1){//Led Verde//
  digitalWrite(pinVerde, estadoPisca);
  digitalWrite(pinAmarelo, LOW);
  digitalWrite(pinVermelho, LOW);
 }
 tempoPisca = tempoPisca + 1;  
 if (tempoPisca == 400){
  estadoPisca = !estadoPisca;
  tempoPisca = 0;  
 }
 if (faseSemaforo == 2){//Led Amarelo//
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinAmarelo, estadoPisca);
  digitalWrite(pinVermelho, LOW); 
 }
 tempoPisca = tempoPisca + 1;  
 if (tempoPisca == 400){
  estadoPisca = !estadoPisca;
  tempoPisca = 0;  
 }
 if (faseSemaforo == 3){//Led Vermelho//
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinAmarelo, LOW);
  digitalWrite(pinVermelho, estadoPisca);
 }
 delay(1);//Ao inserir o estadoAnteriorBotao poderia retirar o delay//
}
 
