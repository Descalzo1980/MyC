#include <stdio.h>
 typedef unsigned char *byte_pointer;

 void show_bytes(byte_pointer start, size_t len) {

int i;

for (i = 0; i < len; i++)

printf(" %.2x", start[i]);

printf("\n");
 }

 void show_int(int x) {

show_bytes((byte_pointer) &x, sizeof(int));
 }

 void show_float(float x) {

show_bytes((byte_pointer) &x, sizeof(float));
 }
 void show_pointer(void *x) {

show_bytes((byte_pointer) &x, sizeof(void *));
 }


int main() {
    int i = 12345;
    float f = 123.45;
    int *p = &i;

    printf("Integer bytes:\n");
    show_int(i);

    printf("Float bytes:\n");
    show_float(f);

    printf("Pointer bytes:\n");
    show_pointer(p);

    return 0;
}
