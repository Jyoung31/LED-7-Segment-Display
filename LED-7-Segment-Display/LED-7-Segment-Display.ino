#include <FastLED.h>

// How many leds in your strip?
#define NUM_LEDS 21

// For led chips like WS2812, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
// Clock pin only needed for SPI based chipsets when not using hardware SPI
#define DATA_PIN 14
#define CLOCK_PIN 13

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() { 
    // Uncomment/edit one of the following lines for your leds arrangement.
    // ## Clockless types ##
    Serial.begin(115200);
    //FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);  // GRB ordering is assumed
    // FastLED.addLeds<SM16703, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<TM1829, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<TM1812, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<TM1809, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<TM1804, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<TM1803, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<UCS1903, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<UCS1903B, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<UCS1904, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<UCS2903, DATA_PIN, RGB>(leds, NUM_LEDS);
     FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
    // FastLED.addLeds<WS2852, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
    // FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
    // FastLED.addLeds<GS1903, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<SK6812, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
    // FastLED.addLeds<SK6822, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<APA106, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<PL9823, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<SK6822, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<WS2813, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<APA104, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<WS2811_400, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<GE8822, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<GW6205, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<GW6205_400, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<LPD1886, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<LPD1886_8BIT, DATA_PIN, RGB>(leds, NUM_LEDS);
    // ## Clocked (SPI) types ##
    // FastLED.addLeds<LPD6803, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
    // FastLED.addLeds<LPD8806, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
    // FastLED.addLeds<WS2801, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<WS2803, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<SM16716, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<P9813, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // BGR ordering is typical
    // FastLED.addLeds<DOTSTAR, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // BGR ordering is typical
    // FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // BGR ordering is typical
    // FastLED.addLeds<SK9822, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // BGR ordering is typical
}

void loop() { 
  int delayTime=1000;
  //red is 0, green is 1, blue is 2, white is 3, yellow is 4, and 5
  CRGB red = CRGB::Red;

  displayDigit2(0,red,delayTime);
  displayDigit2(1,red,delayTime);
  displayDigit2(2,red,delayTime);
  displayDigit2(3,red,delayTime);
  displayDigit2(4,red,delayTime);
  displayDigit2(5,red,delayTime);
  displayDigit2(6,red,delayTime);
  displayDigit2(7,red,delayTime);
  displayDigit2(8,red,delayTime);
  displayDigit2(9,red,delayTime);
  displayDigit2(0,CRGB::Blue,delayTime);
  displayDigit2(1,CRGB::Blue,delayTime);
  displayDigit2(2,CRGB::Blue,delayTime);
  displayDigit2(3,CRGB::Blue,delayTime);
  displayDigit2(4,CRGB::Blue,delayTime);
  displayDigit2(5,CRGB::Blue,delayTime);
  displayDigit2(6,CRGB::Blue,delayTime);
  displayDigit2(7,CRGB::Blue,delayTime);
  displayDigit2(8,CRGB::Blue,delayTime);
  displayDigit2(9,CRGB::Blue,delayTime);
  displayDigit2(0,CRGB::Green,delayTime);
  displayDigit2(1,CRGB::Green,delayTime);
  displayDigit2(2,CRGB::Green,delayTime);
  displayDigit2(3,CRGB::Green,delayTime);
  displayDigit2(4,CRGB::Green,delayTime);
  displayDigit2(5,CRGB::Green,delayTime);
  displayDigit2(6,CRGB::Green,delayTime);
  displayDigit2(7,CRGB::Green,delayTime);
  displayDigit2(8,CRGB::Green,delayTime);
  displayDigit2(9,CRGB::Green,delayTime);
  displayDigit2(0,CRGB::Orange,delayTime);
  displayDigit2(1,CRGB::Orange,delayTime);
  displayDigit2(2,CRGB::Orange,delayTime);
  displayDigit2(3,CRGB::Orange,delayTime);
  displayDigit2(4,CRGB::Orange,delayTime);
  displayDigit2(5,CRGB::Orange,delayTime);
  displayDigit2(6,CRGB::Orange,delayTime);
  displayDigit2(7,CRGB::Orange,delayTime);
  displayDigit2(8,CRGB::Orange,delayTime);
  displayDigit2(9,CRGB::Orange,delayTime);
  displayDigit2(0,CRGB::Pink,delayTime);
  displayDigit2(1,CRGB::Pink,delayTime);
  displayDigit2(2,CRGB::Pink,delayTime);
  displayDigit2(3,CRGB::Pink,delayTime);
  displayDigit2(4,CRGB::Pink,delayTime);
  displayDigit2(5,CRGB::Pink,delayTime);
  displayDigit2(6,CRGB::Pink,delayTime);
  displayDigit2(7,CRGB::Pink,delayTime);
  displayDigit2(8,CRGB::Pink,delayTime);
  displayDigit2(9,CRGB::Pink,delayTime);
//  displayDigit(0,red,delayTime);
//  displayDigit(1,red,delayTime);
//  displayDigit(2,red,delayTime);
//  displayDigit(3,red,delayTime);
//  displayDigit(4,red,delayTime);
//  displayDigit(5,red,delayTime);
//  displayDigit(6,red,delayTime);
//  displayDigit(7,red,delayTime);
//  displayDigit(8,red,delayTime);
//  displayDigit(9,red,delayTime);
//  displayDigit(0,red,delayTime);
//  displayDigit(1,red,delayTime);
//  displayDigit(2,red,delayTime);
//  displayDigit(3,red,delayTime);
//  displayDigit(4,red,delayTime);
//  displayDigit(5,red,delayTime);
//  displayDigit(6,red,delayTime);
//  displayDigit(7,red,delayTime);
//  displayDigit(8,red,delayTime);
//  displayDigit(9,red,delayTime);

}
void testColors(int ledCount, CRGB color){
  for (int i=0;i<ledCount;i++){
    leds[i]= color;
    FastLED.show();
  }
}
void displayDigit1(int digit,CRGB color,int delayTime){
  
  
    if(digit==1){
      leds[12]=color;//segment in top right
      leds[13]=color;
      leds[14]=color;
      leds[18]=color;//segement in bottom right
      leds[19]=color;
      leds[20]=color;
      FastLED.show();
    } else if (digit ==2){
      leds[0]=color;//segment on bottom
      leds[1]=color;
      leds[2]=color;
      leds[3]=color;//segment on bottom left
      leds[4]=color;
      leds[5]=color;
      leds[15]=color;//segment in middle
      leds[16]=color;
      leds[17]=color;
      leds[12]=color;//segment on top right
      leds[13]=color;
      leds[14]=color;
      leds[9]=color;//segment on top
      leds[10]=color;
      leds[11]=color;
      FastLED.show();
    } else if (digit == 3){
      leds[0]=color;//segment on bottom
      leds[1]=color;
      leds[2]=color;
      leds[18]=color;//segment on bottom right
      leds[19]=color;
      leds[20]=color;
      leds[15]=color;//segment in middle
      leds[16]=color;
      leds[17]=color;
      leds[12]=color;//segment on top right
      leds[13]=color;
      leds[14]=color;
      leds[9]=color;//segment on top
      leds[10]=color;
      leds[11]=color;
      FastLED.show();
    } else if (digit==4){
      
      leds[18]=color;//segment on bottom right
      leds[19]=color;
      leds[20]=color;
      leds[15]=color;//segment in middle
      leds[16]=color;
      leds[17]=color;
      leds[12]=color;//segment on top right
      leds[13]=color;
      leds[14]=color;
      leds[6]=color;//segment on top left
      leds[7]=color;
      leds[8]=color;
      FastLED.show();
    } else if (digit==5){
      leds[9]=color;//segment on top
      leds[10]=color;
      leds[11]=color;
      leds[15]=color;//segment in middle
      leds[16]=color;
      leds[17]=color;
      leds[6]=color;//segment on top left
      leds[7]=color;
      leds[8]=color;
      leds[18]=color;//segment on bottom right
      leds[19]=color;
      leds[20]=color;
      leds[0]=color;//segment on bottom
      leds[1]=color;
      leds[2]=color;   
      FastLED.show();
    } else if (digit==6){
      leds[9]=color;//segment on top
      leds[10]=color;
      leds[11]=color;
      leds[15]=color;//segment in middle
      leds[16]=color;
      leds[17]=color;
      leds[6]=color;//segment on top left
      leds[7]=color;
      leds[8]=color;
      leds[18]=color;//segment on bottom right
      leds[19]=color;
      leds[20]=color;
      leds[0]=color;//segment on bottom
      leds[1]=color;
      leds[2]=color;   
      leds[3]=color;//segment on bottom left
      leds[4]=color;
      leds[5]=color;
      FastLED.show();
    } else if (digit==7){
      leds[9]=color;//segment on top
      leds[10]=color;
      leds[11]=color;
      leds[12]=color;//segment in top right
      leds[13]=color;
      leds[14]=color;
      leds[18]=color;//segement in bottom right
      leds[19]=color;
      leds[20]=color;
      FastLED.show();
    } else if (digit==8){
      leds[9]=color;//segment on top
      leds[10]=color;
      leds[11]=color;
      leds[15]=color;//segment in middle
      leds[16]=color;
      leds[17]=color;
      leds[6]=color;//segment on top left
      leds[7]=color;
      leds[8]=color;
      leds[18]=color;//segment on bottom right
      leds[19]=color;
      leds[20]=color;
      leds[0]=color;//segment on bottom
      leds[1]=color;
      leds[2]=color;   
      leds[3]=color;//segment on bottom left
      leds[4]=color;
      leds[5]=color;
      leds[12]=color;//segment on top right
      leds[13]=color;
      leds[14]=color;
      FastLED.show();
    } else if (digit==9){
      leds[9]=color;//segment on top
      leds[10]=color;
      leds[11]=color;
      leds[15]=color;//segment in middle
      leds[16]=color;
      leds[17]=color;
      leds[6]=color;//segment on top left
      leds[7]=color;
      leds[8]=color;
      leds[18]=color;//segment on bottom right
      leds[19]=color;
      leds[20]=color;
      leds[0]=color;//segment on bottom
      leds[1]=color;
      leds[2]=color;   
      leds[12]=color;//segment on top right
      leds[13]=color;
      leds[14]=color;
      FastLED.show();
    } else if (digit==0){
      leds[9]=color;//segment on top
      leds[10]=color;
      leds[11]=color;
      leds[6]=color;//segment on top left
      leds[7]=color;
      leds[8]=color;
      leds[18]=color;//segment on bottom right
      leds[19]=color;
      leds[20]=color;
      leds[0]=color;//segment on bottom
      leds[1]=color;
      leds[2]=color;   
      leds[12]=color;//segment on top right
      leds[13]=color;
      leds[14]=color;
      leds[3]=color;//segment on bottom left
      leds[4]=color;
      leds[5]=color;
      FastLED.show();
    }
    delay(delayTime);
    for (int i=0; i<NUM_LEDS;i++){
    leds[i]=CRGB::Black;
    FastLED.show();
  }
}
    
void displayDigit2(int digit,CRGB color,int delayTime){
  
  
    if(digit==1){
      seg42(color);
      seg52(color);
      FastLED.show();
    } else if (digit ==2){
      seg22(color);
      seg32(color);
      seg12(color);
      seg52(color);
      seg62(color);
      FastLED.show();
    } else if (digit == 3){
      seg12(color);
      seg32(color);
      seg42(color);
      seg52(color);
      seg62(color);
      FastLED.show();
    } else if (digit==4){
      seg12(color);
      seg22(color);
      seg42(color);
      seg52(color);      
      

      FastLED.show();
    } else if (digit==5){
      seg32(color);
      seg22(color);
      seg12(color);
      seg52(color);
      seg62(color);
      FastLED.show();
    } else if (digit==6){
      seg32(color);
      seg22(color);
      seg12(color);
      seg52(color);
      seg62(color);
      seg72(color);
      FastLED.show();
    } else if (digit==7){
      seg32(color);
      seg42(color);
      seg52(color);
      FastLED.show();
    } else if (digit==8){
      seg12(color);
      seg22(color);
      seg32(color);
      seg42(color);
      seg52(color);
      seg62(color);
      seg72(color);
      FastLED.show();
    } else if (digit==9){
      seg12(color);
      seg22(color);
      seg32(color);
      seg42(color);
      seg52(color);
      seg62(color);
      FastLED.show();
    } else if (digit==0){
      seg22(color);
      seg32(color);
      seg42(color);
      seg52(color);
      seg62(color);
      seg72(color);
    }


delay(delayTime);
for (int i=0; i<NUM_LEDS;i++){
    leds[i]=CRGB::Black;
    FastLED.show();
  }
}

void loopColors8(){
// Turn the LED on, then pause
  for (int i=0; i<NUM_LEDS;i++){
    leds[i] = CRGB::Red;
    Serial.println("tried to make an led red");
  }
  FastLED.show();
  delay(5000);
  for (int i=0; i<NUM_LEDS;i++){
    leds[i] = CRGB::Blue;
    Serial.println("tried to make an led White");
  }
  FastLED.show();
  delay(5000);
  for (int i=0; i<NUM_LEDS;i++){
    leds[i] = CRGB::Blue;
    Serial.println("tried to make an led blue");
  }
  for (int i=0; i<NUM_LEDS;i++){
    leds[i] = CRGB::White;
    Serial.println("tried to make an led white");
  }
  FastLED.show();
  delay(5000);
    

}

void seg12(CRGB color){
      leds[0]=color;//segment in middle
      leds[1]=color;
      leds[2]=color;
}
void seg72(CRGB color){
      leds[3]=color;//segment on bottom left
      leds[4]=color;
      leds[5]=color;
}
void seg62(CRGB color){
      leds[6]=color;//segment on bottom
      leds[7]=color;
      leds[8]=color;
}
void seg52(CRGB color){
      leds[9]=color;//segment on bottom right
      leds[10]=color;
      leds[11]=color;
}
void seg42(CRGB color){
      leds[12]=color;//segment on top right
      leds[13]=color;
      leds[14]=color;
}
void seg32(CRGB color){
      leds[15]=color;//segment on top 
      leds[16]=color;
      leds[17]=color;
}void seg22(CRGB color){
      leds[18]=color;//segment on top left
      leds[19]=color;
      leds[20]=color;
}
