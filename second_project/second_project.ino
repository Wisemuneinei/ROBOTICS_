// motor 1 variables
int ena =25;
int in1 =26;
int in2 =27;

// motor 2 variables
int enb =14;
int in3 =32;
int in4 =33;


;
void forward(){
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);



}


void reverse(){
digitalWrite(in1, LOW);
digitalWrite(in2, HIGH);
digitalWrite(in3, LOW);
digitalWrite(in4, HIGH);
}

void setup() {
  // put your setup code here, to run once: pinMode(ena OUTPUT); pinMode(in1,OUTPUT);

pinMode(ena,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(enb,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
}
analogWrite(ena,150);
analogWrite(enb,150);

ledAttachPin(ena,2);
ledAttachPin(enb,2);
ledSetup(0, 1000, 0);

void loop(){
  forward();
  delay(5000);
  reverse();
  delay(5000);
}

void loop() {
  // put your main code here, to run repeatedly:

}
