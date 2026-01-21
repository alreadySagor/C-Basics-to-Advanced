#include <stdio.h>

int main() {
    int x = 100;
    int* ptr = &x;

    printf("Address of x : %p\n", &x);
    printf("Value of ptr : %p\n", ptr); // ptr variable ti x er address rakhe. Tai prt er value x er address. jehetu ptr er value address (Hexa decimal type) tai format specifier %p
    printf("Memory size of ptr : %d\n", sizeof(ptr));

    printf("Address of ptr : %p\n", &ptr);

    // dereference
    x = 200;
    printf("Value of x : %d\n", x);
    printf("Value of x : %d\n", *ptr); // ptr ke dereference kore ptr er moddhe rakha x er address er sahajje x er value niye ashlam.

    *ptr = 500; // dereference kore x er value 500 kore dilam.
    printf("Value of x : %d\n", x);

    // ekhon bola jay je, x lekha je kotha *ptr lekha same kothai. Duita eki jinish ke mean kore.
    // x = 200 == *ptr = 200 same jinish. {(pointer ke dereference kore 200 lekha eki jinish) karon x er memory address ptr ke diye diyechi}
    // *ptr --> ekhane ptr er kono ostitto nai eta ultimately x kei mean kore.
    return 0;
}