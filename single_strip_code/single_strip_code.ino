// Used LED: WS2812

#include <Adafruit_NeoPixel.h>

/*Values you can change*/
#define strip_pin 2
#define n_leds 20
#define delay_ms_on 50
#define delay_ms_off 200


Adafruit_NeoPixel pixels_2 = Adafruit_NeoPixel(n_leds, strip_pin, NEO_GRB + NEO_KHZ800);


int redColor = 0;
int greenColor = 0;
int blueColor = 0;




void setup() {
  pinMode(strip_pin,OUTPUT);
  pixels_2.begin();
}




void loop()
{
    /* Turn ON */  
   for(int i=0;i<=n_leds;i++) //first row go ahead with 4
   {
       pixels_2.setPixelColor(i, pixels_2.Color(254,254,254));
       pixels_2.show();
       delay(delay_ms_on);
     

     if(i==n_leds)
     {
       for(i=n_leds;i>=0;i--)
       {
       pixels_2.setPixelColor(i, pixels_2.Color(0,0,0));
      pixels_2.show();
      delay(delay_ms_off);
       }
        i=-1;
     }
   }
}
      
      
      
