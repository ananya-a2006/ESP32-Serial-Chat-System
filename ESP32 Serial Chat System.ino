void setup() {
  Serial.begin(115200);
  Serial.println("ESP32 Chat Started");
  Serial.println("Type something...");
}

void loop() {
  if (Serial.available()) {
    String msg = Serial.readStringUntil('\n');
    msg.trim();

    Serial.print("You typed: ");
    Serial.println(msg);

    if (msg == "hi") {
      Serial.println("ESP32: Hello!");
    } 
    else if (msg == "how are you") {
      Serial.println("ESP32: I'm fine 😄");
    } 
    else if (msg == "bye") {
      Serial.println("ESP32: Bye 👋");
    } 
    else {
      Serial.println("ESP32: I don't understand 🤔");
    }
  }
}
