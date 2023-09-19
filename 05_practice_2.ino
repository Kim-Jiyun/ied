#define PIN_LED 7
unsigned int count, toggle;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while(!Serial){
    ;
  }
  Serial.println("hello world");
  count = toggle = 1;
  digitalWrite(PIN_LED, toggle);
  delay(1000);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  while (count<11){
    toggle = toggle_state(toggle);
    digitalWrite(PIN_LED, toggle);
    delay(100);
    Serial.println(++count);
  }
  while(1) {digitalWrite(PIN_LED, 0);}
  
}

int toggle_state(int toggle){
  if (toggle == 0){
    return 1;
  }
  else {
    return 0;
  }
}
