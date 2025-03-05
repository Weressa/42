# Reverse Bits

```bash
Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0010  0110
	 ||
	 \/
 0110  0100
```

```c
unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	result;
	int				i;

	result = 0;
	i = 0;
	while (i < 8) // Loop 8 times (1 byte has 8 bits)
	{
		result = (result << 1) | (octet & 1); // Shift result left and add LSB of octet
		octet = octet >> 1;                  // Shift octet right to get the next bit
		i++;
	}
	return (result);
}
```

### **Explanation:**

1. **Parameters:**
    - The function takes an **unsigned char `octet`**, which is an 8-bit (1-byte) value.
2. **Reversing Logic:**
    - A `result` variable is initialized to `0`. This will store the reversed bits.
    - A loop runs 8 times (since there are 8 bits in a byte).
        - In each iteration:
            - Extract the **least significant bit (LSB)** of `octet` using `octet & 1`.
            - Shift the `result` one position to the left to make room for the next bit.
            - Add the extracted bit from `octet` to `result` using the `|` operator.
            - Shift `octet` one position to the right using `octet >> 1` to process the next bit.
3. **Return Value:**
    - After 8 iterations, the `result` contains the reversed bits of the original `octet`.

---

### **Example Walkthrough:**

Let’s reverse the bits of `octet = 0010 0110` (38 in decimal):

| Iteration | `octet` (binary) | Extracted LSB (`octet & 1`) | `result` (binary) (after `<< 1` + OR) | New `octet` (after `>> 1`) |
| --- | --- | --- | --- | --- |
| 1 | `0010 0110` | `0` | `0000 0000` | `0001 0011` |
| 2 | `0001 0011` | `1` | `0000 0001` | `0000 1001` |
| 3 | `0000 1001` | `1` | `0000 0011` | `0000 0100` |
| 4 | `0000 0100` | `0` | `0000 0110` | `0000 0010` |
| 5 | `0000 0010` | `0` | `0000 1100` | `0000 0001` |
| 6 | `0000 0001` | `1` | `0001 1001` | `0000 0000` |
| 7 | `0000 0000` | `0` | `0011 0010` | `0000 0000` |
| 8 | `0000 0000` | `0` | `0110 0100` | `0000 0000` |
- **Final `result`:** `0110 0100` (100 in decimal).