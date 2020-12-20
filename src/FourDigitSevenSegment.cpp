#include <fastio.h>  // https://synapse.kyoto/lib/fastio/page001.html
#include "FourDigitSevenSegment.h"

#define DATAPIN 8
#define LATCHPIN 9
#define CLOCKPIN 10
#define DIG1 3
#define DIG2 4
#define DIG3 5
#define DIG4 6

const char table[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f,
                    0x77,0x7c,0x39,0x5e,0x79,0x71,0x80,0xF3,0xB9,0x63,
                    };
//  Define output pattern
//    74HC595   7 6 5 4 3 2 1 0
//   7segment  dp g f e d c b a
//0   0 0x3f  B 0 0 1 1 1 1 1 1
//1   1 0x06  B 0 0 0 0 0 1 1 0
//2   2 0x5b  B 0 1 0 1 1 0 1 1
//3   3 0x4f  B 0 1 0 0 1 1 1 1
//4   4 0x66  B 0 1 1 0 0 1 1 0
//5   5 0x6d  B 0 1 1 0 1 1 0 1
//6   6 0x7d  B 0 1 1 1 1 1 0 1
//7   7 0x07  B 0 0 0 0 0 1 1 1
//8   8 0x7f  B 0 1 1 1 1 1 1 1
//9   9 0x6f  B 0 1 1 0 1 1 1 1
//10  A 0x77  B 0 1 1 1 0 1 1 1
//11  b 0x7c  B 0 1 1 1 1 1 0 0
//12  C 0x39  B 0 0 1 1 1 0 0 1
//13  d 0x5e  B 0 1 0 1 1 1 1 0
//14  E 0x79  B 0 1 1 1 1 0 0 1
//15  F 0x71  B 0 1 1 1 0 0 0 1
//16  . 0x80  B 1 0 0 0 0 0 0 0
//17 p. 0xF3  B 1 1 1 1 0 0 1 1
//18 c. 0xB9  B 1 0 1 1 1 0 0 1
//19  ° 0x63  B 0 1 1 0 0 0 1 1

hc595<DATAPIN,CLOCKPIN,LATCHPIN,1,MSBFIRST> my595;
// Name the shift register connected to Arduino as my595.
// The 1st parameter is the Arduino pin number that connects to the 74HC595 SER pin.
// The 2nd parameter is the Arduino pin number that connects to the 74HC595 SRCLK pin.
// The 3rd parameter is the Arduino pin number that connects to the 74HC595 RCLK pin.
// The 4th parameter is the number of 74HC595 connected in cascade.
// The 5th parameter selects whether to send from LSB or MSB.

void init_7seg() {
  my595.init();          // initialize 74HC595 and its driver
  pinMode(DIG1,OUTPUT);
  pinMode(DIG2,OUTPUT);
  pinMode(DIG3,OUTPUT);
  pinMode(DIG4,OUTPUT);
}

void Display(char num,int digit){
  // The 1st parameter is Value to output.
  // The 2nd parameter is Digits to output.

  //Select digit to output
  switch(digit){
    case 1:digitalWrite<DIG1>(LOW);
           digitalWrite<DIG2>(HIGH);
           digitalWrite<DIG3>(HIGH);
           digitalWrite<DIG4>(HIGH);
           break;
    case 2:digitalWrite<DIG1>(HIGH);
           digitalWrite<DIG2>(LOW);
           digitalWrite<DIG3>(HIGH);
           digitalWrite<DIG4>(HIGH);
           break;
    case 3:digitalWrite<DIG1>(HIGH);
           digitalWrite<DIG2>(HIGH);
           digitalWrite<DIG3>(LOW);
           digitalWrite<DIG4>(HIGH);
           break;
    case 4:digitalWrite<DIG1>(HIGH);
           digitalWrite<DIG2>(HIGH);
           digitalWrite<DIG3>(HIGH);
           digitalWrite<DIG4>(LOW);
           break;
  }

  my595.shiftOut(table[num]);   //Output 8-bit data
  delay(1);
}

//Output 4 values
void Display_4digit(int val_1,int val_2,int val_3,int val_4){
  for(int i=0;i<30;i++){
    Display(val_1,1);
    Display(val_2,2);
    Display(val_3,3);
    Display(val_4,4);
  }
}

//Output two 2-digit values
void Display_4digit_2(int val_1,int val_2){
  Display_4digit(val_1/10,val_1%10,val_2/10,val_2%10);
}
