 * print_buffer - Prints buffer contents.
 * @b: Buffer pointer
 * @size: Buffer size
 */
void print_buffer(char *b, int size)
{
    int p, q;

    for (p = 0; p < size; p += 10)
    {
        char hd;

        for (q = 0; q < 10; q++)
        {
            if (p + q < size)
            {
                hd = (b[p + q] >> 4) & 0xF;
                _putchar(hd < 10 ? hd + '0' : hd - 10 + 'a');

                hd = b[p + q] & 0xF;
                _putchar(hd < 10 ? hd + '0' : hd - 10 + 'a');
            }
            else
            {
                _putchar(' ');
                _putchar(' ');
            }

            if (q % 2 != 0)
            {
                _putchar(' ');
            }
        }

        _putchar(' ');
        for (q = 0; q < 10; q++)
        {
            if (p + q < size)
            {
                if (b[p + q] >= 32 && b[p + q] <= 126)
                {
                    _putchar(b[p + q]);
                }
                else
                {
                    _putchar('.');
                }
            }
            else
            {
                _putchar(' ');
            }
        }

        _putchar('\n');
    }
}
