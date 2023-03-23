
int val;
void setup() {
  // put your setup code here, to run once:
  pinMode(32, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(14, OUTPUT);
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  for(val=255; val>0; val--){
    digitalWrite(32, val);
    digitalWrite(26, 255-val);
    digitalWrite(14, 128-val);
    delay(50);
  }

  for(val=0; val<255; val++){
    digitalWrite(32, val);
    digitalWrite(26, 255-val);
    digitalWrite(14, 128-val);
    delay(50);
  } 

  Serial.println(val, DEC);


}
