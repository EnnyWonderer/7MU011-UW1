/* Code for FastLED video tutorial
 *  by Nils Gregersen 2017
 *  youtube: hamburgtech
 *  email: info@hamburgtech.de
 */

#include <FastLED.h>

#define LED_PIN     3
//#define CLOCK_PIN 4 
#define NUM_LEDS    144
#define LED_TYPE    WS2812B
#define COLOR_ORDER GRB
#define BRIGHTNESS  64

CRGB leds[NUM_LEDS];
char data [100]; 
int red;
int green;
int blue;
char note;
int c;
int csharp;
int d;
int dsharp;
int e;
int f;
int fsharp;
int g;
int gsharp;
int a;
int asharp;
int b;
void setup() {
    delay(1000);
    LEDS.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS);
//  LEDS.addLeds<LED_TYPE, LED_PIN, CLOCK_PIN COLOR_ORDER>(leds, NUM_LEDS);
    FastLED.setBrightness(BRIGHTNESS);
    Serial.begin(115200);


}

void loop()
{ 

 
  if (Serial.available()){
   note = Serial.read();
   c = 1;
csharp = 2;
d = 3;
dsharp = 4;
e = 5;
f = 6;
fsharp = 7;
g = 8;
gsharp = 9;
a = 10;
asharp = 11;
b = 12;



   if (note == c){
 leds[0].setRGB(red, green, blue);
 leds[1].setRGB(red, green, blue);
 leds[24].setRGB(red, green, blue);
 leds[25].setRGB(red, green, blue);
 leds[48].setRGB(red, green, blue);
 leds[49].setRGB(red, green, blue);
 leds[72].setRGB(red, green, blue);
 leds[73].setRGB(red, green, blue);
 leds[96].setRGB(red, green, blue);
 leds[97].setRGB(red, green, blue);
 
  FastLED.show();}
 else if (note == csharp) { 
 leds[2].setRGB(red, green, blue);
 leds[3].setRGB(red, green, blue);
 leds[26].setRGB(red, green, blue);
 leds[27].setRGB(red, green, blue);
 leds[50].setRGB(red, green, blue);
 leds[51].setRGB(red, green, blue);
 leds[74].setRGB(red, green, blue);
 leds[75].setRGB(red, green, blue);
 leds[98].setRGB(red, green, blue);
 leds[99].setRGB(red, green, blue);
 
 FastLED.show();}

 else if (note == d) { 
 leds[4].setRGB(red, green, blue);
 leds[5].setRGB(red, green, blue);
 leds[28].setRGB(red, green, blue);
 leds[29].setRGB(red, green, blue);
 leds[52].setRGB(red, green, blue);
 leds[53].setRGB(red, green, blue);
 leds[76].setRGB(red, green, blue);
 leds[77].setRGB(red, green, blue);
 leds[100].setRGB(red, green, blue);
 leds[101].setRGB(red, green, blue);
 
 FastLED.show();}

  else if (note == dsharp) { 
 leds[6].setRGB(red, green, blue);
 leds[7].setRGB(red, green, blue);
 leds[30].setRGB(red, green, blue);
 leds[31].setRGB(red, green, blue);
 leds[54].setRGB(red, green, blue);
 leds[55].setRGB(red, green, blue);
 leds[78].setRGB(red, green, blue);
 leds[79].setRGB(red, green, blue);
 leds[102].setRGB(red, green, blue);
 leds[103].setRGB(red, green, blue);
 
 FastLED.show();}

   else if (note == e) { 
 leds[8].setRGB(red, green, blue);
 leds[9].setRGB(red, green, blue);
 leds[32].setRGB(red, green, blue);
 leds[33].setRGB(red, green, blue);
 leds[56].setRGB(red, green, blue);
 leds[57].setRGB(red, green, blue);
 leds[80].setRGB(red, green, blue);
 leds[81].setRGB(red, green, blue);
 leds[104].setRGB(red, green, blue);
 leds[105].setRGB(red, green, blue);
 FastLED.show();}
    else if (note == e) { 
 leds[10, 11, 34, 36, 58, 59, 82, 83, 106, 107].setRGB(red, green, blue);
 }
   
   else if (note == f) { 
 leds[10].setRGB(red, green, blue);
 leds[11].setRGB(red, green, blue);
 leds[34].setRGB(red, green, blue);
 leds[35].setRGB(red, green, blue);
 leds[58].setRGB(red, green, blue);
 leds[59].setRGB(red, green, blue);
 leds[82].setRGB(red, green, blue);
 leds[83].setRGB(red, green, blue);
 leds[106].setRGB(red, green, blue);
 leds[107].setRGB(red, green, blue);
 FastLED.show();}
  
 else if (note == fsharp) { 
 leds[12].setRGB(red, green, blue);
 leds[13].setRGB(red, green, blue);
 leds[36].setRGB(red, green, blue);
 leds[37].setRGB(red, green, blue);
 leds[60].setRGB(red, green, blue);
 leds[61].setRGB(red, green, blue);
 leds[84].setRGB(red, green, blue);
 leds[85].setRGB(red, green, blue);
 leds[108].setRGB(red, green, blue);
 leds[109].setRGB(red, green, blue);
 FastLED.show();}
 
   else if (note == g) { 
 leds[14].setRGB(red, green, blue);
 leds[15].setRGB(red, green, blue);
 leds[38].setRGB(red, green, blue);
 leds[39].setRGB(red, green, blue);
 leds[62].setRGB(red, green, blue);
 leds[63].setRGB(red, green, blue);
 leds[86].setRGB(red, green, blue);
 leds[87].setRGB(red, green, blue);
 leds[110].setRGB(red, green, blue);
 leds[111].setRGB(red, green, blue);
 FastLED.show();}
    
     else if (note == gsharp) { 
 leds[16].setRGB(red, green, blue);
 leds[17].setRGB(red, green, blue);
 leds[40].setRGB(red, green, blue);
 leds[41].setRGB(red, green, blue);
 leds[64].setRGB(red, green, blue);
 leds[65].setRGB(red, green, blue);
 leds[88].setRGB(red, green, blue);
 leds[89].setRGB(red, green, blue);
 leds[112].setRGB(red, green, blue);
 leds[113].setRGB(red, green, blue);
 FastLED.show();}
 
       else if (note == a) { 
 leds[18].setRGB(red, green, blue);
 leds[19].setRGB(red, green, blue);
 leds[42].setRGB(red, green, blue);
 leds[43].setRGB(red, green, blue);
 leds[66].setRGB(red, green, blue);
 leds[67].setRGB(red, green, blue);
 leds[90].setRGB(red, green, blue);
 leds[91].setRGB(red, green, blue);
 leds[114].setRGB(red, green, blue);
 leds[115].setRGB(red, green, blue);
 FastLED.show();}
  
      else if (note == b) { 
 leds[20].setRGB(red, green, blue);
 leds[21].setRGB(red, green, blue);
 leds[44].setRGB(red, green, blue);
 leds[45].setRGB(red, green, blue);
 leds[68].setRGB(red, green, blue);
 leds[69].setRGB(red, green, blue);
 leds[92].setRGB(red, green, blue);
 leds[93].setRGB(red, green, blue);
 leds[116].setRGB(red, green, blue);
 leds[117].setRGB(red, green, blue);
 FastLED.show();}
   red = Serial.read();

   green = Serial.read();

   blue = Serial.read();
  }

  }
 
