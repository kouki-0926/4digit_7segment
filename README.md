# 4digit_7segment   v0.1.2

## Library for controlling 4digit_7segment display of common cathode with Arduino and 74HC595

[![Github issues](https://img.shields.io/github/issues/kouki-0926/4digit_7segment)](https://github.com/kouki-0926/4digit_7segment/issues)
[![Github forks](https://img.shields.io/github/forks/kouki-0926/4digit_7segment)](https://github.com/kouki-0926/4digit_7segment/network/members)
[![Github stars](https://img.shields.io/github/stars/kouki-0926/4digit_7segment)](https://github.com/kouki-0926/4digit_7segment/stargazers)
[![Github license](https://img.shields.io/github/license/kouki-0926/4digit_7segment)](https://github.com/kouki-0926/4digit_7segment/)

# Tags
`Arduino` `4 digit 7 segment`

# Installation
__If you have not installed the fastio library yet, please download the library from https://synapse.kyoto/lib/fastio/page001.html.__
__To use it, place the source code in the Arduino libraries folder on your computer. See the example code for further usage.__

# Declaration of pins and connections

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

# Contributors
- [kouki-0926](https://github.com/kouki-0926)
