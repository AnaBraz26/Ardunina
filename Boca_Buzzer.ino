
int buzzer = 7; // Porta em que o buzzer está conectado

void setup() {
  pinMode(buzzer, OUTPUT); // Declaração do modo do pin
}

void loop() {
  digitalWrite(led1, HIGH); // Acende o Buzzer
  delay(1000); // Delay para a quantidade de tempo do buzzer ligado em ms
  digitalWrite(led1, LOW); // Desliga o Buzzer
  delay(1000); // Delay para a quantidade de tempo do buzzer desligado em ms
  
}
