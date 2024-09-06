// Proyek Mini Traffic Lights
int ledDelay = 10000; // delay Pada setiap perubahan
int redPin = 10;
int yellowPin = 9;
int greenPin = 8;

void setup() {
	pinMode(redPin, OUTPUT);
	pinMode(yellowPin, OUTPUT);
	pinMode(greenPin, OUTPUT);
}

void loop() {
	digitalWrite(redPin, HIGH); //  Nyalakan LED merah 
	delay(ledDelay); // tunda beberapa milisecond
	digitalWrite(yellowPin, HIGH); // Nyalakan LED Kuning
	delay(2000); // tunda 2 detik
	digitalWrite(greenPin, HIGH); // Nyalakan LED Hijau
	digitalWrite(redPin, LOW); // OFF kan LED Merah
	digitalWrite(yellowPin, LOW); // OFF kan LED Kuning
	delay(ledDelay); // tunda beberapa milisecond
	digitalWrite(yellowPin, HIGH); // Nyalakan LED Kuning
	digitalWrite(greenPin, LOW); // OFF kan LED Hijau
	delay(2000); // Tunda 2 detik
	digitalWrite(yellowPin, LOW); // OFF kan LED Kuning
	// Loop akan terus berulang
}
