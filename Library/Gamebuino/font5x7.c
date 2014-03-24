#ifndef FONT5X7_C
#define FONT5X7_C

#include <avr/io.h>
#include <avr/pgmspace.h> 

// standard ascii 5x7 font
static unsigned char font[] PROGMEM = {
    0x7F, 0x41, 0x41, 0x41, 0x7F, // 0
    0x3E, 0x5B, 0x4F, 0x5B, 0x3E, // 1  sad
    0x3E, 0x6B, 0x4F, 0x6B, 0x3E, // 2  happy
    0x18, 0x3C, 0x78, 0x3C, 0x18, // 3  heart
    0x18, 0x3C, 0x7E, 0x3C, 0x18, // 4  diamond
    0x1C, 0x57, 0x7D, 0x57, 0x1C, // 5  clover
    0x1C, 0x5E, 0x7F, 0x5E, 0x1C, // 6  spade
    0x00, 0x7E, 0x43, 0x43, 0x7E, // 7  bat low
    0x00, 0x7E, 0x73, 0x73, 0x7E, // 8  bat med
    0x00, 0x7E, 0x7F, 0x7F, 0x7E, // 9  bat high
    0x7F, 0x41, 0x41, 0x41, 0x7F, // 10  line feed
    0x30, 0x48, 0x3A, 0x06, 0x0E, // 11  male
    0x06, 0x29, 0x79, 0x29, 0x06, // 12  female
    0x7F, 0x41, 0x41, 0x41, 0x7F, // 13  carriage return
    0x60, 0x70, 0x3F, 0x02, 0x04, // 14  note
    0x2A, 0x1C, 0x36, 0x1C, 0x2A, // 15  sun
    0x7F, 0x3E, 0x1C, 0x08, 0x00, // 16  right triangle
    0x00, 0x08, 0x1C, 0x3E, 0x7F, // 17  left triangle
    0x14, 0x22, 0x7F, 0x22, 0x14, // 18  double arrow
    0x3C, 0x3C, 0x3C, 0x7E, 0xFF, // 19  speaker
    0x18, 0x42, 0x3C, 0x81, 0x7E, // 20  sound
    0x3E, 0x63, 0x75, 0x63, 0x3E, // 21  A button
    0x3E, 0x61, 0x6B, 0x63, 0x3E, // 22  B button
    0x3E, 0x63, 0x6B, 0x6B, 0x3E, // 23  C button
    0x04, 0x02, 0x7F, 0x02, 0x04, // 24  up arrow
    0x10, 0x20, 0x7F, 0x20, 0x10, // 25  down arrow
    0x08, 0x08, 0x2A, 0x1C, 0x08, // 26  right arrow
    0x08, 0x1C, 0x2A, 0x08, 0x08, // 27  left arrow
    0x14, 0x3E, 0x55, 0x41, 0x22, // 28  euro
    0x63, 0x75, 0x69, 0x75, 0x63, // 29  timer
    0x10, 0x18, 0x1C, 0x18, 0x10, // 30  up triangle
    0x04, 0x0C, 0x1C, 0x0C, 0x04, // 31  down triangle
    0x00, 0x00, 0x00, 0x00, 0x00, // 32  space
    0x00, 0x00, 0x5F, 0x00, 0x00, // 33
    0x00, 0x07, 0x00, 0x07, 0x00, // 34
    0x14, 0x7F, 0x14, 0x7F, 0x14, // 35
    0x04, 0x2A, 0x7F, 0x2A, 0x10, // 36
    0x23, 0x13, 0x08, 0x64, 0x62, // 37
    0x36, 0x49, 0x56, 0x20, 0x50, // 38
    0x00, 0x08, 0x07, 0x03, 0x00, // 39
    0x00, 0x1C, 0x22, 0x41, 0x00, // 40
    0x00, 0x41, 0x22, 0x1C, 0x00, // 41
    0x2A, 0x1C, 0x3E, 0x1C, 0x2A, // 42
    0x08, 0x08, 0x3E, 0x08, 0x08, // 43
    0x00, 0xE0, 0x60, 0x00, 0x00, // 44
    0x08, 0x08, 0x08, 0x08, 0x08, // 45
    0x00, 0x60, 0x60, 0x00, 0x00, // 46
    0x60, 0x10, 0x08, 0x04, 0x03, // 47
    0x3E, 0x51, 0x49, 0x45, 0x3E, // 48  0
    0x00, 0x42, 0x7F, 0x40, 0x00, // 49  1
    0x62, 0x51, 0x49, 0x49, 0x46, // 50  2
    0x21, 0x41, 0x49, 0x4D, 0x33, // 51  3
    0x18, 0x14, 0x12, 0x7F, 0x10, // 52  4
    0x27, 0x45, 0x45, 0x45, 0x39, // 53  5
    0x3C, 0x4A, 0x49, 0x49, 0x30, // 54  6
    0x41, 0x21, 0x11, 0x09, 0x07, // 55  7
    0x36, 0x49, 0x49, 0x49, 0x36, // 56  8
    0x06, 0x49, 0x49, 0x29, 0x1E, // 57  9
    0x00, 0x00, 0x24, 0x00, 0x00, // 58
    0x00, 0x80, 0x64, 0x00, 0x00, // 59
    0x08, 0x14, 0x22, 0x41, 0x00, // 60
    0x14, 0x14, 0x14, 0x14, 0x14, // 61
    0x00, 0x41, 0x22, 0x14, 0x08, // 62
    0x02, 0x01, 0x59, 0x09, 0x06, // 63
    0x3E, 0x41, 0x5D, 0x59, 0x4E, // 64
    0x7C, 0x12, 0x11, 0x12, 0x7C, // 65  A
    0x7F, 0x49, 0x49, 0x49, 0x36, // 66  B 
    0x3E, 0x41, 0x41, 0x41, 0x22, // 67  C
    0x7F, 0x41, 0x41, 0x22, 0x1C, // 68  D
    0x7F, 0x49, 0x49, 0x49, 0x41, // 69  E
    0x7F, 0x09, 0x09, 0x09, 0x01, // 70  F
    0x3E, 0x41, 0x41, 0x51, 0x32, // 71  G
    0x7F, 0x08, 0x08, 0x08, 0x7F, // 72  H
    0x00, 0x41, 0x7F, 0x41, 0x00, // 73  I
    0x20, 0x41, 0x41, 0x3F, 0x01, // 74  J
    0x7F, 0x08, 0x14, 0x22, 0x41, // 75  K
    0x7F, 0x40, 0x40, 0x40, 0x40, // 76  L
    0x7F, 0x02, 0x0C, 0x02, 0x7F, // 77  M
    0x7F, 0x02, 0x04, 0x08, 0x7F, // 78  N
    0x3E, 0x41, 0x41, 0x41, 0x3E, // 79  O
    0x7F, 0x09, 0x09, 0x09, 0x06, // 80  P
    0x3E, 0x41, 0x61, 0x41, 0xBE, // 81  Q
    0x7F, 0x09, 0x19, 0x29, 0x46, // 82  R
    0x26, 0x49, 0x49, 0x49, 0x32, // 83  S
    0x01, 0x01, 0x7F, 0x01, 0x01, // 84  T
    0x3F, 0x40, 0x40, 0x40, 0x3F, // 85  U
    0x1F, 0x20, 0x40, 0x20, 0x1F, // 86  V
    0x3F, 0x40, 0x38, 0x40, 0x3F, // 87  W
    0x63, 0x14, 0x08, 0x14, 0x63, // 88  X
    0x03, 0x04, 0x78, 0x04, 0x03, // 89  Y
    0x61, 0x51, 0x49, 0x45, 0x43, // 90  Z
    0x00, 0x7F, 0x41, 0x41, 0x00, // 91
    0x03, 0x04, 0x08, 0x10, 0x60, // 92
    0x00, 0x41, 0x41, 0x7F, 0x00, // 93
    0x04, 0x02, 0x01, 0x02, 0x04, // 94
    0x80, 0x80, 0x80, 0x80, 0x80, // 95
    0x00, 0x03, 0x07, 0x08, 0x00, // 96
    0x20, 0x54, 0x54, 0x78, 0x40, // 97  a
    0x7F, 0x28, 0x44, 0x44, 0x38, // 98  b
    0x38, 0x44, 0x44, 0x44, 0x28, // 99  c
    0x38, 0x44, 0x44, 0x28, 0x7F, // 100  d
    0x38, 0x54, 0x54, 0x54, 0x18, // 101  e
    0x08, 0x7E, 0x09, 0x09, 0x02, // 102  f
    0x18, 0xA4, 0xA4, 0x9C, 0x78, // 103  g
    0x7F, 0x08, 0x04, 0x04, 0x78, // 104  h
    0x00, 0x44, 0x7D, 0x40, 0x00, // 105  i
    0x00, 0x60, 0x80, 0x84, 0x7D, // 106  j
    0x7F, 0x10, 0x10, 0x28, 0x44, // 107  k
    0x00, 0x41, 0x7F, 0x40, 0x00, // 108  l
    0x7C, 0x04, 0x78, 0x04, 0x78, // 109  m
    0x7C, 0x08, 0x04, 0x04, 0x78, // 110  n
    0x38, 0x44, 0x44, 0x44, 0x38, // 111  o
    0xFC, 0x18, 0x24, 0x24, 0x18, // 112  p
    0x18, 0x24, 0x24, 0x18, 0xFC, // 113  q
    0x7C, 0x08, 0x04, 0x04, 0x08, // 114  r
    0x08, 0x54, 0x54, 0x54, 0x20, // 115  s
    0x04, 0x3F, 0x44, 0x44, 0x20, // 116  t
    0x3C, 0x40, 0x40, 0x20, 0x7C, // 117  u
    0x1C, 0x20, 0x40, 0x20, 0x1C, // 118  v
    0x3C, 0x40, 0x20, 0x40, 0x3C, // 119  w
    0x44, 0x28, 0x10, 0x28, 0x44, // 120  x
    0x4C, 0x90, 0x90, 0x90, 0x7C, // 121  y
    0x44, 0x64, 0x54, 0x4C, 0x44, // 122  z
    0x00, 0x08, 0x36, 0x41, 0x00, // 123
    0x00, 0x00, 0x7F, 0x00, 0x00, // 124
    0x00, 0x41, 0x36, 0x08, 0x00, // 125
    0x18, 0x04, 0x08, 0x10, 0x0C, // 126
    0x7F, 0x41, 0x41, 0x41, 0x7F // 127
};
#endif