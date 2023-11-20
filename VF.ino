#include "DHT.h"
#define DHTPIN 2     // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11   // DHT 22  (AM2302), AM2321
DHT dht(DHTPIN, DHTTYPE);

const int ledPin = 13; // pino para temperatura alta acender luz vermelha e apagar luz azul
const int ledPin2 = 8; // pino para temperatura baixa acender luz azul e apagar luz vermelha
const int ledPin3 = 7; // pino para umidade alta acender luz amarela
int incomingByte;      // a variable to read incoming serial data into

unsigned long lastMsg;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  dht.begin();

}

void loop() {

  //Verifica se há dados chegando na porta serial para controle do led
  if (Serial.available() > 0) {
    incomingByte = Serial.read();

    if (incomingByte == 'H') {
      digitalWrite(ledPin, HIGH);
      digitalWrite(ledPin2, LOW);
    }

    if (incomingByte == 'L') {
      digitalWrite(ledPin, LOW);
      digitalWrite(ledPin2, HIGH);
    }

    if (incomingByte == 'K') {
      digitalWrite(ledPin3, HIGH);
    }

    if (incomingByte == 'Y') {
      digitalWrite(ledPin3, LOW);
    }


  }
  //A cada 2s realiza leitura do sensor DHT22 e imprime dados na serial
  unsigned long now = millis();

  if (now - lastMsg > 2000) {
    lastMsg = now;
    //Lê sensor DHT22
    float h = dht.readHumidity();
    float t = dht.readTemperature();

    if (isnan(h) || isnan(t)) { //isnan (is not a number) retorna 1 se não for um número
      Serial.println(F("Failed to read from DHT sensor!"));
      return;
      }

    //Dados de umidade e temperatura são impressos separados por "," na serial port do arduino IDE
    Serial.print(h);
    Serial.print(F(","));
    Serial.print(t);
    } 
}