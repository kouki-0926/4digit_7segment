#include <FourDigitSevenSegment.h>

void setup() {
    init_7seg();  // initialize 4digit_7segment display and 74HC595
}

void loop() {
    for (int i = 0; i < 210; i++) {
        Display(0, 1);  // Display "0" in the thousands place
        Display(3, 2);  // Display "3" in the hundreds place
        Display(6, 3);  // Display "6" in the tens place
        Display(9, 4);  // Display "9" in the ones place
    }

    for (int i = 0; i < 8; i++) {
        Display_4digit(10, 12, 14, 16);
        // Display "A" in the thousands place
        // Display "C" in the hundreds place
        // Display "E" in the tens place
        // Display "." in the ones place
    }

    for (int i = 0; i < 8; i++) {
        Display_4digit_2(12, 34);
        // Display "1" in the thousands place
        // Display "2" in the hundreds place
        // Display "3" in the tens place
        // Display "4" in the ones place
    }
}
