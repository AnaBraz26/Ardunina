
int led1 = 3; // led para o olho esquerdo
int led2 = 5; // led para o olho direito

void setup() {
  pinMode(led1, OUTPUT); // Declaração do modo do pin
  pinMode(led2, OUTPUT); // Declaração do modo do pin
}

void loop() {
  digitalWrite(led1, HIGH); // Acende o LED
  digitalWrite(led2, HIGH);
  delay(1000); // Delay para a quantidade de tempo do led acesso em ms
  digitalWrite(led1, LOW); // Desliga o LED
  digitalWrite(led2, LOW);
  delay(1000);
  
}
