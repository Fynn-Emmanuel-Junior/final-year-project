#include "ThingSpeak.h"
#include <ESP8266WiFi.h>
#include <WiFiClient.h>

const int inputPin1 = D1;
int val1 = 0; 

const int inputPin2 = D2;
int val2 = 0; 

const int inputPin3 = D3;
int val3 = 0; 

const int inputPin4 = D4;
int val4 = 0; 

unsigned long ch_no = 1876175;//Replace with Thingspeak Channel number
const char * write_api = "6O14JHCTGFM5QP9E";//Replace with Thingspeak write API

char ssid[] = "theapex";
char pass[] = "123456789";



unsigned long startMillis;
unsigned long currentMillis;
const unsigned long period = 2000;
WiFiClient  client;



void setup() 
{  
  Serial.begin(9600); 
   pinMode(inputPin1, INPUT); // declare Infrared sensor as input
 pinMode(inputPin2, INPUT); // declare Infrared sensor as input
 pinMode(inputPin3, INPUT); // declare Infrared sensor as input
 pinMode(inputPin4, INPUT); // declare Infrared sensor as input





  Serial.begin(115200);
  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED)
{
    delay(500);
    Serial.print(".");
  }
  Serial.println("WiFi connected");
  Serial.println(WiFi.localIP());
  ThingSpeak.begin(client);
  


}



void loop() {
  // put your main code here, to run repeatedly:
   val1 = digitalRead(inputPin1); // read input value 
    val2 = digitalRead(inputPin2); // read input value 
     val3 = digitalRead(inputPin3); // read input value 
      val4 = digitalRead(inputPin4); // read input value 


   currentMillis = millis();
  if (currentMillis - startMillis >= period)
  {
    ThingSpeak.setField(1,val1);
    ThingSpeak.writeFields(ch_no, write_api);
    ThingSpeak.setField(2,val2);
    ThingSpeak.writeFields(ch_no, write_api);   
     ThingSpeak.setField(3,val3);
    ThingSpeak.writeFields(ch_no, write_api);
     ThingSpeak.setField(4,val4);
    ThingSpeak.writeFields(ch_no, write_api);
 startMillis = currentMillis;

}


 





}