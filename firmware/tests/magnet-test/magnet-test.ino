int magnet_pin = 8;

void setup() {
  pinMode(magnet_pin, OUTPUT);

}
void loop() {
 digitalWrite(magnet_pin, HIGH);
 delay(15000);
 digitalWrite(magnet_pin, LOW);
 delay(15000);
} 
