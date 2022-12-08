#define PIN        22 
#define ANALOGPIN  26
#define NUMPIXELS 3

#include <Adafruit_NeoPixel.h>
#include <stdio.h>

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
#define DELAYVAL 500

void setup() {
  pixels.begin();
  Serial.begin(9600);
}

void loop() 
{
  pixels.clear();
  
  for(int i=0; i<NUMPIXELS; i++) {
    int val = analogRead(ANALOGPIN);  // read the input pin
    int r = val/2;
    int g = 255- (val/2);
    //printf("%d", i);
//    pixels.setPixelColor(i, pixels.Color(2, val*200/4096+20, val>2048?255:0));
   pixels.setPixelColor(i, pixels.Color(r,g,0));
    //pixels.setPixelColor(i, pixels.Color(200, 0, (val/16)-100)); //max 255
   // if (i==3) pixels.setPixelColor(i, pixels.Color(255, 255, 0));
    pixels.show();
    delay(DELAYVAL);
    Serial.print(val);
    Serial.print(",");
    Serial.print(r);
    Serial.print(",");
    Serial.println(g);
    
  }
  
  
}
