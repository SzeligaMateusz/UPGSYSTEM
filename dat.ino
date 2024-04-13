void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // Ustawienie pinu LED_BUILTIN jako wyjście
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // Włączenie diody LED
  delay(1000); // Poczekaj 1 sekundę
  digitalWrite(LED_BUILTIN, LOW); // Wyłączenie diody LED
  delay(1000); // Poczekaj 1 sekundę
}
