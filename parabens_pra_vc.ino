  const int A = 12; // Primeiramente setamos os 7 pinos
    const int B = 11;
    const int C = 10;
    const int D = 9;
    const int E = 8;
    const int F = 6;
    const int G = 7;
    const int Ponto = 5;
    const int bu = 4;
    
    void setup(){
      pinMode(A, OUTPUT); // seta todos as portas que estão os leds do display como saída
      pinMode(B, OUTPUT);
      pinMode(C, OUTPUT);
      pinMode(D, OUTPUT);
      pinMode(E, OUTPUT);
      pinMode(F, OUTPUT);
      pinMode(G, OUTPUT);
      pinMode(Ponto, OUTPUT);
      pinMode(bu, OUTPUT);
    }
    
    void loop(){
      digitalWrite(A, HIGH); //acende os leds que representam o número 0
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, LOW);
      digitalWrite(Ponto, LOW);
      tone(bu, 528, 100);//nota C
      delay(100); //aguarda 1 segundo para mostrar próximo número
      digitalWrite(A, LOW); //acende os leds que representam o número 1
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, LOW);
      digitalWrite(E, LOW);
      digitalWrite(F, LOW);
      digitalWrite(G, LOW);
      digitalWrite(Ponto, LOW);
      tone(bu, 556, 100);//nota C#
      delay(100); //aguarda 1 segundo para mostrar próximo número
      digitalWrite(A, HIGH); //acende os leds que representam o número 2
      digitalWrite(B, HIGH);
      digitalWrite(C, LOW);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, LOW);
      digitalWrite(G, HIGH);
      tone(bu, 592, 100);//nota D
      delay(100); //aguarda 1 segundo para mostrar próximo número
      digitalWrite(A, HIGH); //acende os leds que representam o número 3
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, LOW);
      digitalWrite(F, LOW);
      digitalWrite(G, HIGH);
      digitalWrite(Ponto, LOW);
      tone(bu, 624, 100);//nota D#
      delay(100); //aguarda 1 segundo para mostrar próximo número
      digitalWrite(A, LOW); //acende os leds que representam o número 4
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, LOW);
      digitalWrite(E, LOW);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      digitalWrite(Ponto, LOW);
      tone(bu, 664, 100);//nota E
      delay(100); //aguarda 1 segundo para mostrar próximo número
      digitalWrite(A, HIGH); //acende os leds que representam o número 5
      digitalWrite(B, LOW);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, LOW);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      digitalWrite(Ponto, LOW);
      tone(bu, 704, 100);//nota F
      delay(100); //aguarda 1 segundo para mostrar próximo número
      digitalWrite(A, LOW); //acende os leds que representam o número 6
      digitalWrite(B, LOW);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      tone(bu, 744, 100);//nota F#
      delay(100); //aguarda 1 segundo para mostrar próximo número
      digitalWrite(A, HIGH); //acende os leds que representam o número 7
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, LOW);
      digitalWrite(E, LOW);
      digitalWrite(F, LOW);
      digitalWrite(G, LOW);
      tone(bu, 788, 100);//nota G
      delay(100); //aguarda 1 segundo para mostrar próximo número
      digitalWrite(A, HIGH); //acende os leds que representam o número 8
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      digitalWrite(Ponto, LOW);
      tone(bu, 836, 100);//nota G#
      delay(100); //aguarda 1 segundo para mostrar próximo número
      digitalWrite(A, HIGH); //acende os leds que representam o número 9
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, LOW);
      digitalWrite(E, LOW);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      digitalWrite(Ponto, LOW);
      tone(bu, 888, 100);//nota A
      delay(100); //aguarda 1 segundo para mostrar próximo número
      digitalWrite(A, HIGH); //acende os leds que representam o número 10
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, LOW);
      digitalWrite(Ponto, HIGH);
      tone(bu, 940, 100);//nota A#
      delay(100);
      digitalWrite(A, LOW); //acende os leds que representam o número 11
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, LOW);
      digitalWrite(E, LOW);
      digitalWrite(F, LOW);
      digitalWrite(G, LOW);
      digitalWrite(Ponto, HIGH);
      tone(bu, 996, 100);//nota B
      delay(100); //aguarda 1 segundo para mostrar próximo número
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
    }
