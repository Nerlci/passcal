#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>

void write(int count, ...) {
    va_list args;
    va_start(args, count);
    // print va_list
    printf("count: %d\n", count);

    for (int i = 0; i < count; i++) {
        char type = va_arg(args, int); // Get the type of the argument

        switch (type) {
        case 'i': // int32 (int)
            printf("%d", va_arg(args, int));
            break;
        case 'b': // int1 (bool)
            printf("%s", va_arg(args, int) ? "true" : "false");
            break;
        case 'c': // int4 (char)
            printf("%c", (char)va_arg(args, int));
            break;
        case 'f': // float32 (float)
            printf("%f", (float)va_arg(args, double));
            break;
        default:
            printf("Unknown");
            break;
        }

        if (i < count - 1) {
            printf(" ");
        }
    }

    printf("\n");
    va_end(args);
}

void read(int* n) {
    scanf("%d", n);
}

// int main(void) {
//     write(8, 'i', 42, 'b', true, 'c', 'A', 'f', 3.14f, 'i', -10, 'b', false, 'c', '!', 'f', 2.718f);
//     ;
// }
