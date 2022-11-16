
#include <Ultrasonic.h>     //Carrega a biblioteca do sensor
#include <LiquidCrystal.h>  //Carrega a biblioteca do LCD
 
//Definimos trigger do sensor
#define TRIGGER 13 
 
//Definimos echo do sensor
#define ECHO 10 
 
//informar qual o pino trigger e o echo respectivamente
Ultrasonic ultrasonic(TRIGGER, ECHO); 
 
//informar os pinos que o lcd usa
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 
 
void setup()
{
  Serial.begin(9600); //Inicializamos a serial com uma taxa de 9600 baud rate
  lcd.begin(16,2); //inicialização e definição das linhas e colunas do display
  lcd.clear();     //Limpa o que esta escrito no lcd
}
 
void loop()
{
  float cmMsec;// variavel para definir os microsegundos
 
 
  //Le os dados do sensor, com o tempo de retorno do sinal
  long microsec = ultrasonic.timing();  
 
  //Calcula a distancia em centimetros
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM); 
 

 
 

  String cmMsecToMetersFinal = String(cmMsec/100); //transformamos nossa variavel "cmMsec" que está até aqui em "cm" para "metros"
  String cmMsecString = String(cmMsec, 0); //aqui pego a variavel que armazena os valores em centimetros e no segundo argumento ("0") serve para dizer que nao quero nenhuma casa decimal (ou seja, numero intero apenas). RCosta.
  String cmMsecStringFinal = cmMsecString + " cm"; // temos agora o valor numa STRING em CENTIMETROS
  String mMsecToMetersFinal = cmMsecToMetersFinal + " m"; // temos agora o valor numa STRING em METROS
 
  //--------------------------------------------------------------------------
 
  //Apresentamos os dados, em centimetros, no display LCD e no Monitor Serial
  lcd.setCursor(0,0);
  lcd.print("Dist.1: ");
  lcd.print("        ");
  lcd.setCursor(9,0);
  lcd.print(cmMsecStringFinal);
  //lcd.print("cm");
 
  Serial.print("Cent: ");
  Serial.print(cmMsecStringFinal);
 
  //Apresentamos os dados, em metros, no display LCD e no Monitor Serial
  lcd.setCursor(0,1);
  lcd.print("Dist.2: ");
  lcd.print("        ");
  lcd.setCursor(8,1);
  lcd.print(mMsecToMetersFinal);
 
  Serial.print(", Metros: ");
  Serial.println(mMsecToMetersFinal);
 
  delay(1000);
}
