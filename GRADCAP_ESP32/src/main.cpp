#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
#include <images.h>

#define PIN 4

#define NUMPIXELS 16 * 16

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 5000; // delay for half a second
int transitiondelayval = 250;

const char32_t *curr = NCC;

bool drawTransition = true;

void drawImage(const char32_t image[])
{
  for (int offset = 0; offset <= get_width() - 16; offset++)
  {
    for (int r = 0; r < 16; r++)
      for (int c = 0; c < 16; c++)
      {
        int index = r * 16 + c;
        int source_index;
        if (r % 2 == 0)
          source_index = r * get_width() + (15 - c) + offset;
        else
          source_index = r * get_width() + c + offset;

        if (image[source_index])
        {
          long color = image[source_index];

          pixels.setPixelColor(index, color);
          if (drawTransition)
          {
            pixels.show();
          }
        }
      }
    pixels.show();
    if (!drawTransition)
    {
      delay(transitiondelayval);
      pixels.clear();
    }
    else
    {
      delay(delayval);
    }
  }
}

void setup()
{
  pixels.begin();
  Serial.begin(9600);
}

void loop()
{
  pixels.clear();
  handle_cycle();
  curr = get_image();
  drawTransition = get_transition();
  Serial.println(arr_index_img);
  Serial.println(get_width());
  Serial.println(curr[2 * arr_width[arr_index_img]]);
  drawImage(curr);
}