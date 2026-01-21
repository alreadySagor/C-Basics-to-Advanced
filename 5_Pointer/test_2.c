#include <stdio.h>

int main() {
    int num_1 = 10;
    printf("Value of num_1 : %d\n", num_1);
    printf("Address of num1_1 : %p\n", &num_1);
    
    int* ptr = &num_1;
    printf("Address of num_1 (using ptr) : %p\n", ptr);
    printf("Value of num_1 (using *ptr) : %d\n", *ptr);

    *ptr = 1010;
    printf("Value of num_1 (after change) : %d\n", num_1);

    // same address copy
    int* ptr_2 = ptr; // ptr er value (num_1 er address) ptr_2 er moddhe rekhe dilam.
    *ptr = 111;
    printf("Value using num_1 : %d\n", num_1);
    printf("Value using ptr : %d\n", *ptr);
    printf("Value using ptr_2 : %d\n", *ptr_2);

    printf("Size of num_1 : %d\n", sizeof(num_1));
    printf("Size of num_1 (using ptr) : %d\n", sizeof(*ptr)); // ptr jei jinish take point korche tar size. (num_1 ke point korche ja ekti integer type er data)
    printf("Size of num_1 (using ptr_2): %d\n", sizeof(*ptr_2)); // ptr_2 jei jinish take point korche tar size. (num_1 ke point korche ja ekti integer type er data)

    printf("Size of ptr (pointer) : %d\n", sizeof(ptr)); // eta pointer variable, mane ptr er size ta dekhabe.  
    
    //-----------------------------------------------
    printf("-----------------------------------------------\n");
    printf("Address of num_1 : %p\n", (void *)&num_1);
    printf("Address of num_1 (using ptr) : %p\n", (void *)ptr);

    printf("Size of num_1 : %zu bytes\n", sizeof(num_1));
    printf("Size of *ptr (behind the scene num_1) : %zu bytes\n", sizeof(*ptr));
    printf("Size of ptr (pointer) : %zu bytes\n", sizeof(ptr));

    
    return 0;
}

/*
num_1 → value

&num_1 → address

ptr → address ধরে রাখে

*ptr → ওই address-এর value

একাধিক pointer একই variable কে point করতে পারে

------------------------------------------------
%zu হলো size_t type প্রিন্ট করার format specifier
sizeof যেই value দেয়, তার type হলো size_t
sizeof(int)   // return type → size_t
bytes শুধু human-readable করার জন্য।
*/