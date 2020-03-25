char letra;

void setup() {

  letra = 'B';   //'B' e 66

  Serial.begin(9600);
  Serial.println(letra);
  Serial.println(letra, DEC);
  Serial.println(letra, BIN);


  letra = -129;   //127, 128, -129
  Serial.println();
  Serial.println(letra);
  Serial.println(letra, DEC);


  unsigned char novaLetra = 256;   //-129, 128, 255, 256
  Serial.println();
  Serial.println(novaLetra);
  Serial.println(novaLetra, DEC);


  /*
  Serial.println();
  Serial.print("Primeira Frase.Segunda Frase.");
  Serial.print("Terceira Frase.");


  char especial = '\n';
  Serial.println();
  Serial.print("Primeira Frase.Segunda Frase.");
  Serial.print(especial);
  Serial.print("Terceira Frase.");

  char especial = '\n';
  Serial.println();
  Serial.print("Primeira Frase.\nSegunda Frase.");
  Serial.print(especial);
  Serial.print("Terceira Frase.");

  char especial = '\t';
  Serial.println();
  Serial.print("\tPrimeira Frase.\nSegunda Frase.");
  Serial.print(especial);
  Serial.print("Terceira Frase.");
  
  char especial = '\\';
  Serial.println();
  Serial.print("\tPrimeira Frase.\0Segunda Frase.");
  Serial.print(especial);
  Serial.print("Terceira Frase.");
  */

  char texto[10] = {'O', 'l', 'a', '\0', 'M', 'u', 'n', 'd', 'o', '!'};
  Serial.println();
  Serial.print(texto);
}

void loop() {
  

}
