_BIT MAINIPULATION_
__Defination__
Bit manipulation is the act of algorithmically manipulating bits or other pieces of data shorter than a byte. Bit manipulation is often used in low-level programming, such as device drivers, cryptography, and embedded systems, where direct control over the bits is required. Bit manipulation can also be used to optimize the performance and memory usage of algorithms.

In C programming, bit manipulation can be achieved using bitwise operators, which are operators that work on individual bits or groups of bits of the operands. The bitwise operators in C are:

Bitwise AND (&): This operator copies a bit to the result if it exists in both operands. For example, 5 & 3 is 1, because 0101 & 0011 is 0001.
Bitwise OR (|): This operator copies a bit to the result if it exists in either operand. For example, 5 | 3 is 7, because 0101 | 0011 is 0111.
Bitwise XOR (^): This operator copies a bit to the result if it is set in one operand but not both. For example, 5 ^ 3 is 6, because 0101 ^ 0011 is 0110.
Bitwise NOT (~): This operator is unary and has the effect of ‘flipping’ bits. For example, ~5 is -6, because ~0101 is 1010, which is the two’s complement representation of -6.
Bitwise left shift (<<): This operator shifts the bits of the left operand to the left by the number of positions specified by the right operand. The vacated bits are filled with zeros. For example, 5 << 2 is 20, because 0101 << 2 is 10100.
Bitwise right shift (>>): This operator shifts the bits of the left operand to the right by the number of positions specified by the right operand. The vacated bits are filled with zeros for unsigned operands, and with the sign bit for signed operands. For example, 5 >> 2 is 1, because 0101 >> 2 is 0001.
Some common applications of bit manipulation in C are:

Setting a bit: To set the k-th bit of a number x to 1, we can use the expression x | (1 << k). For example, to set the 3rd bit of 5, we can use 5 | (1 << 3), which is 13.
Clearing a bit: To clear the k-th bit of a number x to 0, we can use the expression x & ~(1 << k). For example, to clear the 2nd bit of 5, we can use 5 & ~(1 << 2), which is 1.
Toggling a bit: To toggle the k-th bit of a number x, we can use the expression x ^ (1 << k). For example, to toggle the 1st bit of 5, we can use 5 ^ (1 << 1), which is 7.
Checking a bit: To check the k-th bit of a number x, we can use the expression (x >> k) & 1. This will return 1 if the bit is set, and 0 if the bit is clear. For example, to check the 0th bit of 5, we can use (5 >> 0) & 1, which is 1.
Counting bits: To count the number of bits set to 1 in a number x, we can use a loop that repeatedly shifts the number to the right and checks the least significant bit. For example, the following function counts the number of bits in an unsigned char:
int bitcount(unsigned char x) {
  int count = 0;
    while (x != 0) {
        count += x & 1; // add the least significant bit
	    x >>= 1; // right shift by one bit
	      }
	        return count;
		}
