# Print Bits

```bash
Assignment name  : print_bits
Expected files   : print_bits.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010"

```

```c
#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;

	i = 7; // Start with the most significant bit (MSB)
	while (i >= 0) // Loop through all 8 bits
	{
		if ((octet >> i) & 1) // Check if the current bit is 1
			write(1, "1", 1);
		else // If not, it's 0
			write(1, "0", 1);
		i--;
	}
}
```

### **Explanation:**

1. **Parameters:**
    - The function takes an **unsigned char `octet`**, which is a single byte (8 bits).
2. **Printing Logic:**
    - Start with the **most significant bit (MSB)** (bit 7) and move down to the **least significant bit (LSB)** (bit 0).
    - For each bit:
        - Use `(octet >> i)` to shift the bit at position `i` to the rightmost position.
        - Use `& 1` to check if the bit is `1` or `0`.
        - Print `"1"` if the bit is `1` and `"0"` if the bit is `0`.
3. **Output:**
    - The bits are printed from MSB to LSB, forming the binary representation of the byte.
    - No newline is printed at the end, as per the requirements.

---

### **Example Walkthrough:**

Let’s print the bits for `octet = 2` (binary `00000010`):

| Iteration | `i` | `(octet >> i)` | `(octet >> i) & 1` | Printed Character |
| --- | --- | --- | --- | --- |
| 1 | 7 | `00000000` | `0` | `0` |
| 2 | 6 | `00000000` | `0` | `0` |
| 3 | 5 | `00000000` | `0` | `0` |
| 4 | 4 | `00000000` | `0` | `0` |
| 5 | 3 | `00000000` | `0` | `0` |
| 6 | 2 | `00000000` | `0` | `0` |
| 7 | 1 | `00000001` | `1` | `1` |
| 8 | 0 | `00000010` | `0` | `0` |
- **Output:** `"00000010"`