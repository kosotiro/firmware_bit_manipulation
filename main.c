#include <stdio.h>

unsigned char modifyBit(unsigned char reg, int pos, int mode) {
    // Write your code here
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