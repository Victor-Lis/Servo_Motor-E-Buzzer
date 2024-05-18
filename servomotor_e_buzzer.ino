#include <Servo.h>

#define SERVO 6 // Porta Digital 6 PWM

Servo s; // Variável Servo
int buzzer = 8;
int vermelho = 10;
int verde = 9;

void setup ()
{
  s.attach(SERVO);
  pinMode(vermelho, OUTPUT);
  pinMode(verde, OUTPUT);
  s.write(0); // Inicia motor posição zero
}

void loop()
{
  descer();
  delay(1000);
  subir();
  delay(1000);
}

void descer(){
  tone(buzzer, 500, 100);
  s.write(90);
  digitalWrite(verde, LOW);
  digitalWrite(vermelho, HIGH);
}

void subir(){
  noTone(buzzer);
  s.write(0);
  digitalWrite(verde, HIGH);
  digitalWrite(vermelho, LOW);
}