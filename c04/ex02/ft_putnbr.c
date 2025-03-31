
//putnbr.c
/*
 * putnbr.c
 * 
 *displays the number entered as a parameter. The function
 *has to be able to display all possible values within an int type variable.
 *
 */

#include <unistd.h>
#include <limits.h>

void put_char(char c) {
    write(1, &c, 1);
}

void display_int(int n) {
    char buffer[12];
    int index = 0;

    if (n == INT_MIN) {
        write(1, "-2147483648", 11);
        return;
    }

    if (n < 0) {
        put_char('-');
        n = -n;
    }

    if (n == 0) {
        put_char('0');
    } else {
        while (n > 0) {
            buffer[index++] = '0' + (n % 10);
            n /= 10;
        }
    }

    while (index > 0) {
        put_char(buffer[--index]);
    }
}

int main() {
    display_int(-2147483648);
    put_char('\n');
    display_int(2147483647);
    put_char('\n');
    display_int(0);
    put_char('\n');
    display_int(12345);
    put_char('\n');
    display_int(-9876);
    return 0;
}{
