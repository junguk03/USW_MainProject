#include <stdio.h>

int main(void) {
    int ch;
    while( (ch = _getch()) != 'q' )
        _putch(ch);
    return 0;
}
