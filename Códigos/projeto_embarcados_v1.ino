/* Criado por Rafael Guedes, Taynara Silva e Adriano Gomes
 *
 * Outubro de 2021
 *
 * Projeto SmartRoom
 */

// Definição dos pinos utilizados
const int pinLed = 2; // Led (lâmpada)
const int pinPir = 13; // Sensor PIR
const int pinLdr = A0; // Pino analógico do LDR
const int pinTemp = A1; // Pino do Sensor de temperatura
const int motor = 4; // Pino transistor e motor

// Pode ser necessário alterar o valor "limite de disparo" 
//	para encontrar um valor adequado para ligar e desligar 
//  o LED quando "mover a mão" sobre o fotoresistor (LDR)
// Ajustar de acordo com a leitura no Monitor serial
int limiteDisparo = 500;
//int readTemp = 0;


void setup() {
  pinMode(pinLed, OUTPUT); //Led saida (lâmpada)
  pinMode(pinPir, INPUT); //Entrada Movimento
  pinMode(pinLdr, INPUT); //Entrada Luminosidade
  pinMode(motor, OUTPUT); //Motor saída (Ventilador)
  
  // Utilizado para verificar qual seria melhor valor
  // para limite de disparo
  Serial.begin(9600);
}

void loop() {
  // Fazendo leitura das entradas
  int readMove = digitalRead(pinPir);
  int readLumis = analogRead(pinLdr);
  // Leitura e conversão da temperatura para Celsius
  int readTemp = -40 + 0.488155 * (analogRead(pinTemp) - 20);
  
  if((readMove == HIGH) && (readLumis < limiteDisparo)){
    digitalWrite(pinLed, HIGH);
    delay(2000); //2 segundos apenas para teste
    digitalWrite(pinLed, LOW);
  }
  else{
    digitalWrite(pinLed, LOW);
  }
  
  if (readTemp >= 25 || readMove == HIGH)
    digitalWrite(motor, HIGH);
  else
  	if(readTemp <=19 && readMove == LOW)
	  digitalWrite(motor, LOW);
    
  // Imprime as leituras atuais no monitor serial
  Serial.print ("Leitura do sensor PIR: ");
  Serial.println(readLumis);
  delay(130);
}