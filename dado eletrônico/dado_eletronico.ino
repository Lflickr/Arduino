int pinosLED[7] = {2,3,4,5,7,8,6};
int configDADO[7] [7] = //array dos padrões de dados
{
	{0,0,0,0,0,0,1},//1
	{1,0,0,1,0,0,0},//2
	{1,0,0,1,0,0,1},//3
	{1,0,1,1,0,1,0},//4
	{1,0,1,1,0,1,1},//5
	{1,1,1,1,1,1,0},//6
	{0,0,0,0,0,0,0}//off
};

int pinoBUTTON = 9; //var do botão
int apagado = 6; //var de tudo apagado

void setup()
{
	for (int i = 0; i < 7; i++)
	{
		pinMode(pinosLED[i], OUTPUT);
		digitalWrite(pinosLED[i], LOW);
	}
	pinMode(pinoBUTTON, INPUT_PULLUP); // setar pino do botão como entrada com pullup
	randomSeed(analogRead(0)); 
}

void loop()
{
	if(digitalRead(pinoBUTTON))
	{
		rolamento(); //fazer o lançamento do dado
	}
	delay(100);
}

void rolamento() //função de lançamento do dado
{
	int resultado = 0;
	int tempo = random(15,25); // duração do tempo de lançamento do dado
	for (int i = 0; i < tempo; i++)
	{
		resultado = random(0,6); //resultado mostra de 0 a 5
		show(resultado); //exibir o resultado
		delay (50 + i*10); // período variável de espera
	}
	for (int j = 0; j < 3; j++)
	{
		show(apagado); // mostrar dado apagado
		delay(500);
		show(resultado); // mostrar o resultado com leds aceso
		delay(500);
	}
}
		
void show(int resultado) //função para exibir o dado
{
	for(int i = 0; i < 7; i++)
	{
		digitalWrite(pinosLED[i], configDADO [resultado][i]);
	}
}
