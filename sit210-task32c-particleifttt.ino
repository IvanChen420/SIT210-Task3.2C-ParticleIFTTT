int led = D6;
int LightSensor = A1;

void setup() {
    pinMode(led, OUTPUT);
}

void loop() {
    digitalWrite(led, HIGH);
    
    int LightData = analogRead (LightSensor);
    if(LightData >= 400){
    Particle.publish("SUN_LIGHT_ON", "Enough light now");
    }
    else{
        Particle.publish("SUN_LIGHT_OFF", "Need more light");
    }
    
        
    delay(30000); //wait for 30 seconds
    
    digitalWrite(led,LOW);
    delay(30000); //wait for 30 seconds
}
