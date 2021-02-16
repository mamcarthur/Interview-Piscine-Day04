# Bitwise | Interview Piscine: Day04

These were the exercises from Day04 (Bit Manipulation) of the Interview Piscine at 42 Silicon Valley.
Full explanations of the exercises are provided in the PDF.

# ex00  
Adds together strings of binary numbers without converting to integers.
```bash
$> ./decrypt 000010 + 000001
000011 (3)
$> ./decrypt 000010 + 000010
000100 (4)
```
# ex01
Reproduces bitwise AND and OR behavior on strings of binary numbers without converting to integers.
```bash
$> ./bit 0010 '&' 0000
0000 (0)
$> ./bit 0010 '&' 1111
0010 (2)
$> ./bit 0010 '&' 0010
0010 (2)
$> ./bit 0010 '&' 1101
0000 (0)
$> ./bit 0010 '&' '~1101'
0010 (2)
$> ./bit 0010 '|' 0000
0010 (2)
$> ./bit 0010 '|' 1111
1111 (15)
$> ./bit 0010 '|' 0010
0010 (2)
$> ./bit 0010 '|' 1101
1111 (15)
$> ./bit '~0010' '|' 1101
```

# ex02
Reproduces arithmetic bit shifting on strings of binary numbers without converting to integers
```bash
$> ./shift 000011 '<<' 2
001100 (12)
$> ./shift 101000 '>>' 3
111101 (-3)
$> ./shift 110100 '>>' 5
111111 (-1)
```

# ex03

Reproduces bitwise XOR behavior on strings of binary numbers without converting to integers
```bash
$> ./xor 111111 ^ 010101
101010 (42)
$> ./xor 101010 ^ 000000
101010 (42)
$> ./xor 101010 ^ 101010
000000 (0)
```

# ex04

Input a number and a bit position (0 is the rightmost bit), and the program prints whether that position holds a 1 or 0.
```bash
$> #here 42 is '00000000000000101010'
$> ./getPlace 42 0
Parking place 0: vacant
$> ./getPlace 42 1
Parking place 0: occupied
$> ./getPlace 42 2
Parking place 0: vacant
$> ./getPlace 42 3
Parking place 0: occupied
```

# ex05

Input a number and a bit position, and the program unsets the bit in that position and prints the resulting number.
```bash
$> ./clearPlace 42 3
New parking row: 34
$> ./clearPlace 42 5
New parking row: 10
```

# ex06
Input a number and a bit position, and the program sets the bit in that position and returns the resulting number.
```bash
$> ./setPlace 42 0
New parking row: 44
$> ./setPlace 42 2
New parking row: 46
```
# ex07
Input a number, a bit position and a value, and the program updates the bit in that position to the value provided and prints the resulting number.
```bash
$> ./updatePlace 42 0 1
Updated parking row: 43
$> ./updatePlace 42 2 1
Updated parking row: 46
```

# ex08
Input a number, and the program returns whether the bits are filled in from right to left
15 (00001111) is filled
27 (00011011) is not filled
```bash
$> ./isFilled 42
Parking row 42 is not filled from right to left
$> ./isFilled 15
Parking row 15 is filled from right to left
$> ./isFilled 1024
Parking row 1024 is not filled from right to left
$> ./isFilled 1023
Parking row 1023 is filled from right to left
```

# ex09
Input a number, and the program returns the number of 1 bits.
```bash
$> ./occupiedPlaces 42
Parking row 42 has 3 occupied places
$> ./occupiedPlaces 15
Parking row 15 has 4 occupied places
$> ./occupiedPlaces 1024
Parking row 1024 has 1 occupied places
$> ./occupiedPlaces 1023
Parking row 1023 has 10 occupied places
```
# ex10
Input a number with a single set bit, and the program returns the position of that set bit. If the number has more or fewer than 1 bit, it returns -1.

```bash
$> ./occupiedPlaces 0
Parking row 0 has 1 car at position -1
$> ./occupiedPlaces 1
Parking row 1 has 1 car at position 0
$> ./occupiedPlaces 16
Parking row 16 has 1 car at position 4
$> ./occupiedPlaces 1024
Parking row 1024 has 1 car at position 10
```

# ex11
Identical behavior to the previous exercise, but bit shifting is implemented using power functions.
```bash
$> ./occupiedPlaces 0
Parking row 0 has 1 car at position -1
$> ./occupiedPlaces 1
Parking row 1 has 1 car at position 0
$> ./occupiedPlaces 16
Parking row 16 has 1 car at position 4
$> ./occupiedPlaces 1024
Parking row 1024 has 1 car at position 10
```

# ex12

Input a number and a bit position, and the program clears all the bits to the right of the specified bit.
```text
Input : parkingRow = 1101, n = 3
Output : parkingRow = 1000
```
```bash
$> ./clearBits 42 4
Cleared parking row: 32
$> ./clearBits 1023 5
Cleared parking row: 992
$> ./clearBits 1023 9
Cleared parking row: 512
$> ./clearBits 367 6
Cleared parking row: 320
```

# ex13
Input a number, and the program returns the position of the leftmost set bit.
```text
Input : 00101010
Output : 5
```
```bash
$> ./leftmostCar 42
Parking row 42: the leftmost car is at position 5
$> ./leftmostCar 15
Parking row 15: the leftmost car is at position 3
$> ./leftmostCar 1024
Parking row 1024: the leftmost car is at position 10
$> ./leftmostCar 1023
Parking row 1023: the leftmost car is at position 9
$> ./leftmostCar 1022
Parking row 1022: the leftmost car is at position 9
$> ./leftmostCar 31
Parking row 31: the leftmost car is at position 4
```
# ex14
Input a number, and the program returns the position of the rightmost set bit.
```bash
$> ./rightmostCar 42
Parking row 42: the rightmost car is at position 1
$> ./rightmostCar 15
Parking row 15: the rightmost car is at position 0
$> ./rightmostCar 1024
Parking row 1024: the rightmost car is at position 10
$> ./rightmostCar 1023
Parking row 1023: the rightmost car is at position 0
$> ./rightmostCar 1022
Parking row 1022: the rightmost car is at position 1
$> ./rightmostCar 352
Parking row 352: the rightmost car is at position 5
```
# ex15
Input a number, and the program prints the how many 1's in a row appear in the longest run of 1's.
```text
Parking row : 100111011000
The number of cars in the longest sequence of consecutive cars : 3
```
```bash
$> ./longestSequence 42
Parking row 42: the longest sequence has 1 car(s)
$> ./longestSequence 15
Parking row 15: the longest sequence has 4 car(s)
$> ./longestSequence 1024
Parking row 1024: the longest sequence has 1 car(s)
$> ./longestSequence 1023
Parking row 1023: the longest sequence has 10 car(s)
$> ./longestSequence 1022
Parking row 1022: the longest sequence has 9 car(s)
$> ./longestSequence 352
Parking row 352: the longest sequence has 2 car(s)
```

# ex16
"Decompresses" a .piano file.
```text
$> cat song1.piano
32
1 1 1 1 2 2 2 2 2 4 4 4 4 8 8 8 8 16 16 16 16
$> ./decompress song1.piano
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
$> ./decompress song1.piano | piano/play
```

# ex17
Corrects a piano file by inserting a missing "note."
```bash
$> cat empty.piano
32
0 0 0 0 0 0 0 0 0 0 0 0 0 0
$> ./correctSong empty.piano 0 1 3
32
2 2 2 0 0 0 0 0 0 0 0 0 0 0
$> ./correctSong empty.piano 3 3 6
32
0 0 0 8 8 8 8 8 8 0 0 0 0 0
$> ./correctSong nephewMasterPiece.piano
```

# ex18

Determines whether two numbers are equal using only bitwise operators. If true, it prints 0. All other numbers mean they are not equal.
```bash
$> ./isEqual 11 11
0
$> ./isEqual 10 12
6
```
# ex19

Finds the unique number in the array in O(n) time and O(1) space.
```bash
$> ./aloneCan 20 5 10 18 20 18 10
5
$> ./aloneCan 10 3 10
3
```

# ex20
Finds two unique numbers in the array in O(n) time and O(1) space.
```bash
$> ./aloneCans 3 20 20 10 5 18 20 10 20 18
53
$> ./aloneCans 1 2 2 3
13
$> ./aloneCans 1 2 2 3 2 2 2 2
13
```
