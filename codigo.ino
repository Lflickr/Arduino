/* colaboração: https://github.com/leosin12
*/


int conta; //
int bu = 12;
int bo = A1;
byte displaySeteSeg[10][7] = {
  
{ 1,1,1,1,1,1,0 },  //DIGITO 0
{ 0,1,1,0,0,0,0 },  //DIGITO 1
{ 1,1,0,1,1,0,1 },  //DIGITO 2
{ 1,1,1,1,0,0,1 },  //DIGITO 3
{ 0,1,1,0,0,1,1 },  //DIGITO 4
{ 1,0,1,1,0,1,1 },  //DIGITO 5
{ 1,0,1,1,1,1,1 },  //DIGITO 6
{ 1,1,1,0,0,0,0 },  //DIGITO 7
{ 1,1,1,1,1,1,1 },  //DIGITO 8
{ 1,1,1,1,0,1,1 }   //DIGITO 9



};
  
void setup(){



 //Definindo pinos como saída
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10,INPUT);
  pinMode(A1, INPUT);



 //inicializa display com número 0
  conta = 0;
  ligaSegmentosDisplay(conta);
    
}



void loop() {
  



 if(digitalRead(10)== LOW){ //Se o botão for pressionado soma +1 no display
     
    delay(500);



   conta++; //incremento



   if(conta == 3){ //Se passar de 9 reseta o display para 0
      conta = 0;
      ligaSegmentosDisplay(conta);
    }
    else{ //Se não mostra no display o próximo número
      ligaSegmentosDisplay(conta);
    }
       
  }
  if (conta == 1 ){
     if(digitalRead(A1)== HIGH){
      delay(1000); //aguarda 1 segundo para mostrar próximo número
      tone(bu, 528, 250);//nota C
      delay(250);
      tone(bu, 528, 250);//nota C
      delay(250);
      tone(bu, 592, 500);//nota D
      delay(500);
      tone(bu, 528, 500);//nota C
      delay(500);
      tone(bu, 704, 500);//nota F
      delay(500);
      tone(bu, 664, 1000);//nota E
      delay(1000);
      tone(bu, 528, 250);//nota C
      delay(250);
      tone(bu, 528, 250);//nota C
      delay(250);
      tone(bu, 592, 500);//nota D
      delay(500);
      tone(bu, 528, 500);//nota C
      delay(500);
      tone(bu, 788, 500);//nota G
      delay(500);
      tone(bu, 704, 500);//nota F
      delay(500);
      tone(bu, 704, 500);//nota F
      delay(500);
      tone(bu, 888, 250);//nota A
      delay(500);
      tone(bu, 888, 250);//nota A
      delay(500);
      tone(bu, 528, 500);//nota C
      delay(500);
      tone(bu, 888, 500);//nota A
      delay(500);
      tone(bu, 704, 500);//nota F
      delay(500);
      tone(bu, 664, 500);//nota E
      delay(500);
      tone(bu, 592, 500);//nota D
      delay(500);
      tone(bu, 940, 250);//nota A#
      delay(500);
      tone(bu, 940, 250);//nota A#
      delay(250);
      tone(bu, 888, 500);//nota A
      delay(500);
      tone(bu, 704, 500);//nota F
      delay(500);
      tone(bu, 788, 500);//nota G
      delay(500);
      tone(bu, 704, 500);//nota F
      delay(500);
      tone(bu, 704, 1000);//nota F
      delay(1000);
      tone(bu, 996, 100);//nota B
      delay(500);
      tone(bu, 996, 100);//nota B
      delay(500);
      tone(bu, 996, 100);//nota B
      delay(500);
     }
  }
   
}



void ligaSegmentosDisplay(byte digito){ //função para acionar o display com o digito correspondente
   
  byte pino = 2;
   
  //Liga os segmentos de acordo com o digito correspondente
  for (byte contadorSegmentos = 0; contadorSegmentos < 7; ++contadorSegmentos){
    digitalWrite(pino, displaySeteSeg[digito][contadorSegmentos]);
    ++pino;
  }
}

