0x13: Bit Manipulation

0-binary_to_uint.c - Converts a binary number (as a string) to an unsigned int.
Returns the converted number, or 0 if unable to translate or string is null.
Example: binary_to_uint("1100010") returns 98.

1-print_binary.c - Takes an unsigned int (decimal) and prints the binary
representation to stdout.
Example: print_binary(98) prints 1100010 to stdout.

2-get_bit.c - Takes an unsigned long int, and returns the value of a bit
at a given index.
Example: get_bit(1024, 10) returns 1.

3-set_bit.c - Takes a pointer to an  unsigned long int and sets the value of
a bit at a certain index to 1.
Example: If a = 98, set_bit(&a, 0) returns 99.

4-clear_bit.c - Takes a pointer to an unsigned long int and sets the value of
a bit at a certain index to 0.
Example: If a = 98, clear_bit(&a, 1) returns 96.

5-flip_bits.c - Takes two unsigned long ints and calculates how many bits would
need to be flipped to get from one number to the other.
Example: flip_bits(402, 98) returns 5.

100-get_endianness.c - Checks the endianness of the processor compiled on.
Example: On a Little Endian machine, will return 1, will return 0 on Big Endian.

101-password - Password to unlock the crackme3 file found in the repo.