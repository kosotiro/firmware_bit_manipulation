#include <stdio.h>

/* Set or Clear a Specific Bit in a Register
*  Write a C program to set or clear a specific bit in an 8-bit register based on user input.
*
* The user provides an 8-bit integer (register value), a bit position (0-7), and a
* mode (0 for clear, 1 for set).
* Your task is to modify the register value accordingly and print the updated value. */

/**
 * Set or clear a specific bit in an 8-bit register based on user input
 * @param[in] reg 8-bit register
 * @param[in] pos position for change
 * @param[in] mode clear or set on this position
 * @param[out] reg modified register
 */
unsigned char modifyBit(unsigned char reg, int pos, int mode) {
    /* clear the bit */
    if (!mode)
       reg &= ~(1 << pos);
    else
       reg |= 1 << pos;

    return reg;
}

int main() {
   unsigned char reg;
   int pos, mode;
   scanf("%hhu %d %d", &reg, &pos, &mode);
   printf("%d", modifyBit(reg, pos, mode));
   return 0;
}