/**
 * @file Print_Binary.c
 * @brief Source code for Print_Binary function implementation.
 *
 * This file contains the function implementation for the Print_Binary function,
 * which takes in a uint8_t value and prints the value in binary format.
 * It relies on the EUSCI_A0_UART driver.
 *
 * @author Aaron Nanas
 *
 */

#include "../inc/Print_Binary.h"

void Print_Binary(uint8_t value_to_convert)
{
     // if the value is 0, just print all zeros and leave
    if (value_to_convert == 0)
    {
        printf("Line Sensor: 0000_0000\n");
        return;
    }

    printf("Line Sensor: ");

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
