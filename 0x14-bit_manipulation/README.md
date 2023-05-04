Bit Manipulation

Summary
In C progamming Language bit manipulation is the act of algorithmically manipulating bits or other pieces of data shorter than a byte.

Bitwise Operators
&	Bitwise Binary AND Operator
|	Bitwise Binary OR Operator
^	Bitwise Binary XOR / Exclusive OR Operator
~	Bitwise Binary Ones Complement Operator
<<	Bitwise Binary Left Shift Operator
>>	Bitwise Binary Right Shift Operator

Illustrations
Bitwise Right shift operator >> is used to shift the binary sequence to the right side by the specified position.
Let’s take the number 14.  The binary representation of 14 is 00001110 (for the sake of clarity let’s write it using 8 bit)
14 = (00001110) base2

Then 14 >> 1 will shift the binary sequence by 1 position to the right side.
Illustration1
14 = 		0 0 0 0 1 1 1 0
14 >> 1 = 	- 0 0 0 0 1 1 1


Bitwise Left shift operator << is used to shift the binary sequence to the left side by the specified position.

Then 14 << 1 will shift the binary sequence by 1 position to the left side.
Illustration2
14 = 		0 0 0 0 1 1 1 0
14 >> 1 = 	0 0 0 1 1 1 0 -

Note: The Empty spaces are marked as 0


References
https://coolconversion.com/math/binary-octal-hexa-decimal/Convert_decimal_number_98_in_hexadecimal_
https://www.cs.ryerson.ca/~mth110/Handouts/bitwise.pdf
https://www.log2base2.com/C/bitwise/bitwise-right-shift-operator-in-c.html
https://www.log2base2.com/C/bitwise/bitwise-left-shift-operator-in-c.html



