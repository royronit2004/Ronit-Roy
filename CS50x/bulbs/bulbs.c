#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    string msg = get_string("Message: ");

    for (int i = 0; i < strlen(msg); i++)
    {
        unsigned char byte = msg[i];
        int binary[BITS_IN_BYTE];
        int quo = byte;
        int remd;

        for (int j = 0; j < BITS_IN_BYTE; j++)
        {
            remd = quo % 2;
            binary[j] = remd;
            quo /= 2;
        }

        for (int k = BITS_IN_BYTE - 1; k >= 0; k--)
        {
            print_bulb(binary[k]);
        }
        printf("\n");

    }

}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
