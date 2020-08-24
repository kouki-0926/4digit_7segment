# 4digit_7segment v0.1.2

## Library for controlling 4digit_7segment display with Arduino and 74HC595

###### This library is designed for 4digit_7segment display of common cathode.

###### If you did not install fastio library, please install the library from https://synapse.kyoto/lib/fastio/page001.html.

###### To use it, place the source code in the Arduino libraries folder on your computer. See the sample code for further usage.

---

#### Declaration of pins and connections

|  | __4digit_7segment pin__ | __74HC595 pin__ |
|:---:|:---:|:---:|
| segA  | 11 | Q0 |
| segB  | 7  | Q1 |
| segC  | 4  | Q2 |
| segD  | 2  | Q3 |
| segE  | 1  | Q4 |
| segF  | 10 | Q5 |
| segG  | 5  | Q6 |
| segdp | 3  | Q7 |
| | __4digit_7segment pin__ | __Arduino pin__ |
| Digit1 | 12 | D3 |
| Digit2 |  9 | D4 |
| Digit3 |  8 | D5 |
| Digit4 |  6 | D6 |
|  | __74HC595 pin__ | __Arduino pin__ |
| DATA   | DS    | D8  |
| LATCH  | ST_CP | D9  |
| CLOCK  | SH_CP | D10 |
