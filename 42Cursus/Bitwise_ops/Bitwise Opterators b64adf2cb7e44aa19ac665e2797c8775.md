# Bitwise Opterators

Date: January 23, 2025

[Assignements](Bitwise%20Opterators%20b64adf2cb7e44aa19ac665e2797c8775/Assignements%2070e070ab97f643128754ae880acb7865.csv)

### **Bitwise Operators in C**

1. **`&` (AND)**
    - Compares each bit of two numbers and returns `1` if both bits are `1`, otherwise returns `0`.
    - **Example:**
    
    ```c
    int a = 5;  // Binary: 0101
    int b = 3;  // Binary: 0011
    int result = a & b; // Binary: 0001 (1 in decimal)
    ```
    
2. **`|` (OR)**
    - Compares each bit of two numbers and returns `1` if either bit is `1`.
    - **Example:**
        
        ```c
        int a = 5;  // Binary: 0101
        int b = 3;  // Binary: 0011
        int result = a | b; // Binary: 0111 (7 in decimal)
        
        ```
        
3. **`^` (XOR)**
    - Compares each bit of two numbers and returns `1` if the bits are different, otherwise returns `0`.
    - **Example:**
        
        ```c
        int a = 5;  // Binary: 0101
        int b = 3;  // Binary: 0011
        int result = a ^ b; // Binary: 0110 (6 in decimal)
        ```
        
4. **`~` (NOT)**
    - Inverts all the bits of a number (flips `1` to `0` and vice versa).
    - **Example:**
        
        ```c
        int a = 5;  // Binary: 0101
        int result = ~a; // Binary: 1010 (in 32-bit: 11111111111111111111111111111010)
        
        ```
        
5. **`<<` (Left Shift)**
    - Shifts the bits of a number to the left by a specified number of positions, filling with `0s` on the right.
    - Equivalent to multiplying by `2^n`.
    - **Example:**
        
        ```c
        int a = 5;  // Binary: 0101
        int result = a << 2; // Binary: 10100 (20 in decimal)
        
        ```
        
6. **`>>` (Right Shift)**
    - Shifts the bits of a number to the right by a specified number of positions. Behavior differs for signed and unsigned types:
        - For unsigned types: fills with `0s`.
        - For signed types: fills with the sign bit (arithmetic shift).
    - Equivalent to dividing by `2^n` (ignoring remainder).
    - **Example:**
        
        ```c
        int a = 5;  // Binary: 0101
        int result = a >> 1; // Binary: 0010 (2 in decimal)
        ```
        

## Common Usage in C

### **1. Checking if a number is odd or even**

The least significant bit (LSB) of a binary number determines if it is odd or even:

- If the LSB is `1`, the number is odd.
- If the LSB is `0`, the number is even.

### Example:

```c
int num = 7;  // Binary: 0111

if (num & 1) 
    printf("Odd\n");
else 
    printf("Even\n");
```

- **How it works:**
    - The number `7` in binary is `0111`.
    - Performing `num & 1` isolates the LSB:
        - `0111 & 0001 = 0001` (result is non-zero, so it's odd).
    - For an even number, such as `6` (binary `0110`):
        - `0110 & 0001 = 0000` (result is zero, so it's even).

### **2. Swapping two numbers without a temporary variable**

This uses the XOR (`^`) operator. XOR has a unique property:

- `x ^ x = 0`
- `x ^ 0 = x`

### Example:

```c
int a = 5;  // Binary: 0101
int b = 3;  // Binary: 0011

a = a ^ b;  // a becomes 6 (0101 ^ 0011 = 0110)
b = a ^ b;  // b becomes 5 (0110 ^ 0011 = 0101)
a = a ^ b;  // a becomes 3 (0110 ^ 0101 = 0011)

printf("a = %d, b = %d\n", a, b); // Output: a = 3, b = 5
```

- **How it works:**
    - After the first step, `a` holds the XOR of the two numbers.
    - In the second step, `b` is restored to its original value.
    - In the final step, `a` is restored to its original value.
    - No temporary variable is used.

### **3. Counting the number of set bits (Hamming Weight)**

This iterates through each bit and counts how many are `1`.

### Example:

```c
int num = 13;  // Binary: 1101
int count = 0;

while (num) {
    count += (num & 1); // Check the LSB
    num >>= 1;          // Right shift to process the next bit
}

printf("Number of set bits = %d\n", count); // Output: 3
```

- **How it works:**
    - `num & 1` checks if the LSB is `1` and adds it to the count.
    - `num >>= 1` shifts the number right, effectively removing the processed bit.

### **4. Reversing the bits of a number**

This algorithm constructs a reversed bit representation.

### Example:

```c
unsigned int num = 5;  // Binary: 00000000000000000000000000000101
unsigned int result = 0;

for (int i = 0; i < 32; i++) {
    result = (result << 1) | (num & 1); // Shift result left and add the LSB of num
    num >>= 1;                         // Shift num right
}

printf("Reversed = %u\n", result);
```

- **How it works:**
    - For each bit in `num`, shift `result` left to make room for the next bit, and add the LSB of `num`.
    - Right shift `num` to process the next bit.

### Easier Example:

### **Initial Setup:**

- `num = 0101` (4 bits, representing `5` in decimal).
- `result = 0000` (we start with `0` because it's empty).

---

### **Iteration 1:**

1. **Extract LSB of `num`:**
    
    num & 1 ⇒  0101 & 0001 = 0001
    
    - **Extracted LSB = 1**
2. **Shift `result` left by 1:**
    
    result ≪ 1 ⇒ 0000 ≪ 1 = 0000
    
3. **Add the extracted LSB to `result` using `|`:**
    
    result = (0000 ≪ 1) ∣ 1 = 0000 ∣ 0001 = 0001
    
4. **Shift `num` right by 1:**
    
    num ≫ 1 ⇒ 0101 ≫ 1 = 0010
    
- **After Iteration 1:**
    - `num = 0010`
    - `result = 0001`

---

### **Iteration 2:**

1. **Extract LSB of `num`:** 
    
    num & 1⇒ 0010 & 0001 = 0000
    
    - **Extracted LSB = 0**
2. **Shift `result` left by 1:** 
    
    result ≪ 1 ⇒ 0001 ≪ 1 = 0010
    
3. **Add the extracted LSB to `result` using `|`:** 
    
    result = (0010 ≪ 1) ∣ 0 = 0010 ∣ 0000 =  0010 
    
4. **Shift `num` right by 1:** 
    
    num ≫ 1 ⇒ 0010 ≫ 1 = 0001
    
- **After Iteration 2:**
    - `num = 0001`
    - `result = 0010`

---

### **Iteration 3:**

1. **Extract LSB of `num`:**
    
    num & 1 ⇒ 0001 & 0001 = 0001
    
    - **Extracted LSB = 1**
2. **Shift `result` left by 1:**
    
    result ≪ 1 ⇒ 0010 ≪ 1 = 0100
    
3. **Add the extracted LSB to `result` using `|`:**
    
    result = (0100 ≪ 1) ∣ 1 = 0100 ∣ 0001 = 0101
    
4. **Shift `num` right by 1:**
    
    num ≫ 1 ⇒ 0001 ≫ 1 = 0000
    
- **After Iteration 3:**
    - `num = 0000`
    - `result = 0101`

---

### **Final Result:**

- After all iterations, `num = 0000` (all bits have been processed).
- **`result = 0101`**, which is the reversed binary of `num`.

---

### **Summary Table for 4 Bits**

| Iteration | `num` (binary) | Extracted LSB | `result << 1` (binary) | New `result` (binary) |
| --- | --- | --- | --- | --- |
| 1 | `0101` | `1` | `0000` | `0001` |
| 2 | `0010` | `0` | `0010` | `0010` |
| 3 | `0001` | `1` | `0100` | `0101` |

### **5. Setting, clearing, or toggling a specific bit**

### (a) **Set a bit (make it `1`)**:

Use the `|` operator with a bitmask:

```c
int num = 5;          // Binary: 0101
int bit_position = 1; // Set the 1st bit (counting from 0)

num = num | (1 << bit_position); // Binary: 0111 (7 in decimal)

printf("num = %d\n", num); // Output: 7
```

- **How it works:**
    - `1 << bit_position` creates a bitmask with a `1` at the desired position (e.g., `0010` for position 1).
    - The `|` operator sets that bit to `1` without affecting the others.

### (b) **Clear a bit (make it `0`)**:

Use the `&` operator with a negated bitmask:

```c
int num = 7;          // Binary: 0111
int bit_position = 1; // Clear the 1st bit

num = num & ~(1 << bit_position); // Binary: 0101 (5 in decimal)

printf("num = %d\n", num); // Output: 5
```

- **How it works:**
    - `1 << bit_position` creates a bitmask with a `1` at the desired position (`0010`).
    - `~` inverts the bitmask to `1101`.
    - The `&` operator clears the specific bit while leaving the others unchanged.

### (c) **Toggle a bit**:

Use the `^` operator:

```c
int num = 5;          // Binary: 0101
int bit_position = 1; // Toggle the 1st bit

num = num ^ (1 << bit_position); // Binary: 0111 (7 in decimal)

printf("num = %d\n", num); // Output: 7
```

- **How it works:**
    - The `^` operator flips the target bit:
        - If the bit is `1`, it becomes `0`.
        - If the bit is `0`, it becomes `1`.

### **6. Extracting a specific bit**

You can extract a bit by shifting and masking.

### Example:

```c
int num = 13;          // Binary: 1101
int bit_position = 2;  // Extract the 2nd bit

int bit = (num >> bit_position) & 1; // Shift and mask

printf("The bit is: %d\n", bit); // Output: 1
```

- **How it works:**
    - `num >> bit_position` moves the desired bit to the LSB position.
    - `& 1` isolates that bit.

### **Example: Extracting the 2nd Bit from `num = 13`**

### **Step 1: Represent `num` in Binary**

- `num = 13` → **`1101`** (in binary, assuming 4 bits for simplicity)
- **Bit positions (counting from right, starting at 0)**:
    
    
    | Bit Index | 3 | 2 | 1 | 0 |
    | --- | --- | --- | --- | --- |
    | `num` | 1 | 1 | 0 | 1 |
- We want to extract the **bit at position `2`** (highlighted in the table above), which is `1`.

---

### **Step 2: Right Shift (`>>`)**

To move the **desired bit** to the **least significant bit (LSB)** position (far right), we use the **right shift operator (`>>`)**.

```c
int bit = (num >> bit_position) & 1;
```

- **Right shift `num` (`1101` >> `2`)**:
    
    ```sql
    1101  (Original, num = 13)
    >> 2  (Shift 2 positions to the right)
    ----
    0011  (New binary value)
    ```
    

Now, **our desired bit is in the LSB position**.

---

### **Step 3: Mask with `& 1`**

After shifting, we use **bitwise AND (`& 1`)** to **isolate** the rightmost bit.

- `0011 & 0001 = 0001`
- The result is `1`, which is our extracted bit.

### **Final Output**

```c
#include <stdio.h>int main()
{
    int num = 13;          // Binary: 1101
    int bit_position = 2;  // Extracting the 2nd bit

    int bit = (num >> bit_position) & 1; // Shift and mask

    printf("The bit is: %d\n", bit); // Output: 1

    return 0;
}
```

**Output:**

```arduino
The bit is: 1
```

### **7. Finding the most significant bit (MSB) position**

This determines the position of the highest `1` bit.

### Example:

```c
int num = 18;  // Binary: 10010
int msbPosition = -1;

while (num) 
{
    num >>= 1;  // Shift right to move the MSB towards the LSB
    msbPosition++;
}

printf("MSB position: %d\n", msbPosition); // Output: 4
```

- **How it works:**
    - Each shift reduces the number, and the position count increments until the number becomes `0`.

### **8. Power of Two Check**

A number is a power of two if it has only one `1` bit in its binary representation.

### Example:

```c
int num = 16; // Binary: 10000

if (num > 0 && (num & (num - 1)) == 0)
	printf("Power of 2\n");
else
	printf("Not a power of 2\n");
```

- **How it works:**
    - Subtracting `1` from a power of two flips all bits after the MSB:
        - `16 - 1 = 15` (Binary: `10000 - 00001 = 01111`).
    - The `&` operation results in `0` if only one bit is set.