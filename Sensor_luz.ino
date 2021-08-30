//definindo as portas
#define psensor A0
#define pled 2

//variavel para armazenar o valor vindo do sensor 
int vsensor = 0;

void setup() {
  pinMode(psensor, INPUT);
  pinMode(pled, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  vsensor = analogRead(psensor);

  if(vsensor < 10){
    digitalWrite(pled, HIGH);
    Serial.println("aceso");
  }else{
    digitalWrite(pled, LOW);
    Serial.println("apagado");
  }
  //mostra no monitor serial o valor obtido pelo sensor
 Serial.println(vsensor);
  delay(500);

}
