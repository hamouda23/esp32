#include<WiFi.h>
#include <dht.h>
#define dht_pin 32

dht DHT;
const char* ssid = "Bravotelecom_F9002";
const char* password = "09149564";

void setup() {
  
    Serial.begin(115200);
    delay(1000);
    Serial.println("\n");

    WiFi.begin(ssid, password);
    Serial.print("Tentaive de connexion...");

    while(WiFi.status() != WL_CONNECTED)
    {
       Serial.print(".");
       delay(100);  
    }

    Serial.println("\a");
    Serial.println("Connexion Établie!");
    Serial.print("Adresse IP :");
    Serial.println(WiFi.localIP());
    Serial.println("DHT11 Humidity & temperature Sensor\n\n");
    
}

void loop() {
    DHT.read11(dht_pin);
    
    Serial.print("Humidity = ");
    Serial.print(DHT.humidity);
    Serial.print("%    ");
    Serial.print("Temperature = ");
    Serial.print(DHT.temperature); 
    Serial.println(" C");
    
    delay(5000); //Reduce Time for Quick Reply 
}
