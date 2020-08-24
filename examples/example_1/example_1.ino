#include <4digit_7segment.h>

void setup() {
  init_7seg();       //initialize 4digit_7segment display and 74HC595
}

void loop() {
  Display(1,1);      //Display "1" in the thousands place
  Display(4,2);      //Display "4" in the hundreds place
  Display(7,3);      //Display "7" in the tens place
  Display(10,4);     //Display "A" in the ones place
}
