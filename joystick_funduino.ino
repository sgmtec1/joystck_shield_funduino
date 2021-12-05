// Mundo da Automação @mundodaautomacao.net

#define X A0 // analogico horizontal
#define Y A1 // analógico vertical
# define K 8 // botão K
# define F 7 // botão F
# define E 6 // botão E
# define D 5 // botão D
# define C 4 // botão C
# define B 3 // botão B
# define A 2 // botão A

void setup() {
  for(int i=0; i<9; i++) pinMode(i, INPUT_PULLUP);
  pinMode(X, INPUT);
  pinMode(Y, INPUT);

  Serial.begin(9600);  
}

void loop() {
  int x_read = analogRead(X);
  int y_read = analogRead(Y);

  Serial.print ("X val:    ");
  Serial.print ("Y val:    ");
  Serial.print (x_read);
  Serial.print ("    ");
  Serial.println(y_read);

  if (!digitalRead(K)) Serial.println("K PRECIONADO");
  else if (!digitalRead(F)) Serial.println("F PRECIONADO");
  else if (!digitalRead(E)) Serial.println("E PRECIONADO");
  else if (!digitalRead(D)) Serial.println("D PRECIONADO");
  else if (!digitalRead(C)) Serial.println("C PRECIONADO");
  else if (!digitalRead(B)) Serial.println("B PRECIONADO");
  else if (!digitalRead(A)) Serial.println("A PRECIONADO");
  else Serial.println("NÃO PRESSIONADO");

  delay(500);
}
