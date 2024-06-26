#include <stdint.h>
#include <stdio.h>

int main(){
    int8_t a = 127;
    int16_t b = 32767;
    int32_t c = 2147483647;
    int64_t d = 9223372036854775807;
    uint8_t e = 255;
    uint16_t f = 65535;
    uint32_t g = 4294967295;
    uint64_t h = 18446744073709551615ull;
    printf("int8_t: %d\n", a);
    printf("int16_t: %d\n", b);
    printf("int32_t: %d\n", c);
    printf("int64_t: %ld\n", d);
    printf("uint8_t: %u\n", e);
    printf("uint16_t: %u\n", f);
    printf("uint32_t: %u\n", g);
    printf("uint64_t: %llu\n\n\n", h);

    int8_t i = 'b';

    printf("%c\n", i);

    return 0;
}