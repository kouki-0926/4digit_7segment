# FourDigitSevenSegment   v0.1.3

## Library for controlling FourDigitSevenSegmen display of common cathode with Arduino and 74HC595

[![Github issues](https://img.shields.io/github/issues/kouki-0926/FourDigitSevenSegment)](https://github.com/kouki-0926/FourDigitSevenSegment/issues)
[![Github forks](https://img.shields.io/github/forks/kouki-0926/FourDigitSevenSegment)](https://github.com/kouki-0926/FourDigitSevenSegment/network/members)
[![Github stars](https://img.shields.io/github/stars/kouki-0926/FourDigitSevenSegment)](https://github.com/kouki-0926/FourDigitSevenSegment/stargazers)
[![Github license](https://img.shields.io/github/license/kouki-0926/FourDigitSevenSegment)](https://github.com/kouki-0926/FourDigitSevenSegment/)

# Installation

__If you have not installed the fastio library yet, please download the library from https://synapse.kyoto/lib/fastio/page001.html.__
__To use it, place the source code in the Arduino libraries folder on your computer. See the example code for further usage.__

# Declaration of pins and connections

| | __74HC595 pin__ | | __FourDigitSevenSegmen pin__ |
|:---:|:---:|:---:|:---:|
| segA  | Q0 |==>| 11 |
| segB  | Q1 |==>|  7 |
| segC  | Q2 |==>|  4 |
| segD  | Q3 |==>|  2 |
| segE  | Q4 |==>|  1 |
| segF  | Q5 |==>| 10 |
| segG  | Q6 |==>|  5 |
| segdp | Q7 |==>|  3 |
| | __Arduino pin__ | | __FourDigitSevenSegmen pin__ |
| Digit1 | D3 |==>| 12 |
| Digit2 | D4 |==>| 9  |
| Digit3 | D5 |==>| 8  |
| Digit4 | D6 |==>| 6  |
| | __Arduino pin__ |  | __74HC595 pin__ |
| DATA   | D8  |==>|   DS  |
| LATCH  | D9  |==>| ST_CP |
| CLOCK  | D10 |==>| SH_CP |

# Contributors
- [kouki-0926](https://github.com/kouki-0926)
