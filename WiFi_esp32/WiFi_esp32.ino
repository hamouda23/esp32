include<WiFi.h>

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
    
}

void loop() {
  // put your main code here, to run repeatedly:

}
