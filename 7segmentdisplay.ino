int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;

void setup() {
  // put your setup code here, to run once:

  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);

  delay(1000);

  digitalWrite(a, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);

  delay(1000);

  digitalWrite(a, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(g, HIGH);

  delay(1000);

  digitalWrite(c, HIGH);
  digitalWrite(e, LOW);

  delay(1000);

  digitalWrite(a, LOW);
  digitalWrite(d, LOW);
  digitalWrite(f, HIGH);

  delay(1000);

  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(d, HIGH);
  
  delay(1000);

  digitalWrite(a, LOW);
  digitalWrite(e, HIGH);

  delay(1000);

  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);

  delay(1000);

  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);

  delay(1000);

  digitalWrite(d, LOW);
  digitalWrite(e, LOW);

  delay(1000);

}