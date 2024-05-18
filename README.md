# Servo Motor e Buzzer
Projeto desenvolvido por conta do pedido dos meus professores na aula de S.E.(Sistemas Embarcados), fiz junto com o meu amigo [Luiz-Otávio](https://github.com/luizOASSilva), foi uma troca de conhecimentos muito bacana!

Esse projeto é bem simples, a ideia dele é basicamente simular uma catraca de trem, onde:
```
Quando o trem estiver próximo a catraca irá descer(nome de umas das funções) além de emitir um aviso sonóro e visual através do led vermelho
```
```
Quando o trem já tiver passado a catraca irá subir(nome de umas das funções) além de emitir um aviso visual através do led verde
```

## Código

### Configuração Inicial
Utilizei a lib "Servo" para manipular o servo motor e facilitar alguns processos...

#### Importando lib Servo
```c++
#include <Servo.h>
```

#### Declarando váriaveis
```c++
#define SERVO 6 // Entrada do pino laranja do servo motor

Servo s; // Variável Servo
int buzzer = 8; // Pino de dados do buzzer
int vermelho = 10; 
int verde = 9;
```

### Funções

#### Subir()
Responsabilidades da função "subir()":
- Desativar qualquer som do buzzer que possa estar ativo;
- Definir a "catraca"(servo motor) a 0°;
- Ligar led verde
- Desligar led vermelho
```c++
void subir(){
  noTone(buzzer);
  s.write(0);
  digitalWrite(verde, HIGH);
  digitalWrite(vermelho, LOW);
}
```

#### Descer()
Responsabilidades da função "subir()":
- Ativar aviso sonóro do buzzer;
- Definir a "catraca"(servo motor) a 90°;
- Desligar led verde
- Ligar led vermelho
```c++
void descer(){
  tone(buzzer, 500, 100);
  s.write(90);
  digitalWrite(verde, LOW);
  digitalWrite(vermelho, HIGH);
}
```

### Chamando funções
```c++
void loop() {
  descer();
  delay(1000);
  subir();
  delay(1000);
}
```

## Resultado
https://github.com/Victor-Lis/Servo_Motor-E-Buzzer/assets/109773129/578a62ec-a311-4fae-8575-23752d3bca74

## Autores

- [@Victor-Lis](https://github.com/Victor-Lis)
- [@Luiz-Otávio](https://github.com/luizOASSilva)

