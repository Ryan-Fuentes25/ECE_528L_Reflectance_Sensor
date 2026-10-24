/**
 * @file print_binary.c
 *
 * @brief Main source code for Print_Binary program.
 *
 * This file contains the main entry point and the implementation
 * of the Print_Binary function that takes in a uint8_t value and
 * prints the value in binary format.
 *
 * @author Ryan Fuentes
 */

#include <stdio.h>
#include <stdint.h>

void Print_Binary(uint8_t value_to_convert);

int main()
{
    uint8_t value_to_convert = 170;

    printf("Decimal: %d\n", value_to_convert);
    Print_Binary(value_to_convert);

    return 0;
}

void Print_Binary(uint8_t value_to_convert)
{
    // if the value is 0, just print all zeros and leave
    if (value_to_convert == 0)
    {
        printf("Binary: 0000_0000\n");
        return;
    }

    printf("Binary: ");

    // go from bit 7 down to bit 0
    for (int bit = 7; bit >= 0; bit--)
    {
        printf("%d", (value_to_convert >> bit) & 1);

        // underscore after the 4th bit
        if (bit == 4)
        {
            printf("_");
        }
    }

    printf("\n");
}
