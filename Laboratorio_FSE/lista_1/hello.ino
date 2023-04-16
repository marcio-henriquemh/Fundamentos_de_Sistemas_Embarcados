#include <LiquidCrystal.h> // Include the LiquidCrystal library

//definindo os números dos pinos como 
LiquidCrystal lcd(12, 13, 7, 6, 5, 4); // Pinagem do LCD

// Definindo os caracteres que formam um coração
byte heart[8] = {
  B00000,
  B01010,
  B11111,
  B11111,
  B01110,
  B00100,
  B00000,
  B00000
};

void setup() {
  //Configurando o número de colunas e linhas do LCD
  lcd.begin(16, 2);

  //Crie o caractere personalizado para o símbolo do coração
  lcd.createChar(0, heart);
}

void loop() {
  // Imprima "Alan Turing !" e o símbolo do coração na primeira linha do LCD
  lcd.setCursor(0, 0);
  lcd.print(" Alan Turing ");
  lcd.write(byte(0));
  lcd.setCursor(2, 1);      // 2 = 2 colunas para a direita. 1 = Segunda linha
  lcd.print("*1912-1954*"); 
  delay(5000);  

  // // Espera 1 segundo
  delay(1000);

  // Limpando a tela do LCD
  lcd.clear();

  // Aguarde mais 1 segundo
  delay(1000);
}