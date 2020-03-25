int valorX;
int valorY;
int valorZ;
//O tipo boolean serve para operações lógicas (&&=e) (||=ou)//
//Todos os tipos de variáveis estão no arquivo em bloco de notas// 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  valorX = 10;
  valorY = 20;
  valorZ = valorX + valorY;

  Serial.print("valorX=");
  Serial.print(valorX, BIN);

  Serial.print(" valorY=");
  Serial.print(valorY, BIN);

  
  Serial.print(" valorZ=");
  Serial.println(valorZ, BIN);
}

void loop() {
  // put your main code here, to run repeatedly:

}
